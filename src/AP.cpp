//
// Created by izm20 on 3/10/17.
//

#include <sstream>
#include "../include/AP.h"

AP::AP() {
    setCadenaEntrada_("");
}

AP::AP(SetEstados conjuntoEstados, set<string> alfabeto, set<string> alfabetoPila, stack<string> pilaAutomata,
       string cadenaEntrada) {
    setConjuntoEstados_(conjuntoEstados);
    setAlfabeto_(alfabeto);
    setAlfabetoPila_(alfabetoPila);
    setPilaAutomata_(pilaAutomata);
    setCadenaEntrada_(cadenaEntrada);
}

AP::AP(const AP &cp) {
    setConjuntoEstados_(cp.getConjuntoEstados_());
    setAlfabeto_(cp.getAlfabeto_());
    setAlfabetoPila_(cp.getAlfabetoPila_());
    setPilaAutomata_(cp.getPilaAutomata_());
    setCadenaEntrada_(cp.getCadenaEntrada_());
}

AP::~AP() {
    conjuntoEstados_.clearSetEstados();
    alfabeto_.clear();
    alfabetoPila_.clear();
    cadenaEntrada_.clear();
}

void AP::leerFichero(string nombreFichero) {
    string cadena = "";
    vector <vector <string>> cadenas;
    vector <vector <string>> cadenasAux;
    ifstream fichero(nombreFichero);

    if (fichero.is_open()) {
        while (!fichero.eof()) {
            cadena.clear();
            getline(fichero, cadena);
            if (cadena[0] == '#' || cadena == "") {
                cadena.clear();
            } else {
                cadenas.push_back(separarCadenas(cadena));
            }
        }
        for (int i = 0; i < cadenas.size(); ++i) {
            if (i != 1 && i != 2 && i != 4)
                cadenasAux.push_back(cadenas[i]);
        }
        guardarEstados(cadenasAux);
        guardarAlfabeto(cadenas[1]);
        guardarAlfabetoPila(cadenas[2]);
        guardarCabezaPila(cadenas[4][0]);
        cout << *this << endl;
        fichero.close();
    }
    else {
        cout << endl << "~ El fichero no se pudo abrir o no existe." << endl;
    }
}

bool AP::preAnalisis(string cadena) {
    int contador = 0;
    for (int i = 0; i < cadena.size(); ++i) {
        for (set <string>::iterator it = alfabeto_.begin(); it != alfabeto_.end(); ++it) {
            string auxCadena = *it;
            if (cadena[i] == auxCadena[0])
                ++contador;
        }
    }
    if (contador == cadena.size()) {
        setCadenaEntrada_(cadena);
        return true;
    }

    else
        return false;
}

bool AP::analisis() {
    stack <AP> pilaRecorrido;
    AP AuxAP = (*this);
    SetTransiciones TransicionesPosibles;
    Transicion AuxTransicion;
    string auxCaracter;
    string auxPila;
    string nombreEstado = getConjuntoEstados().devolverInicio();
    bool repeat = false;

    do {
        if (AuxAP.getPilaAutomata_().size() == 0) {
            if (AuxAP.getCadenaEntrada_().size() == 0) {
                return true;
            }
            else {
                if (pilaRecorrido.size() != 0) {
                    AuxAP = pilaRecorrido.top();
                    pilaRecorrido.pop();
                    repeat = true;
                }
                else {
                    return false;
                }
            }
        }
        else {
            TransicionesPosibles = AuxAP.getConjuntoEstados().analisisTransiciones(AuxAP.getCaracter(), AuxAP.getPilaAutomata().top(), nombreEstado);
            if (repeat == true) {
                AuxAP.setConjuntoEstados_(getConjuntoEstados());
                repeat = false;
            }
            switch (TransicionesPosibles.getNumeroTransiciones_()) {
                case 0:
                    if (pilaRecorrido.size() != 0) {
                        AuxAP = pilaRecorrido.top();
                        pilaRecorrido.pop();
                        repeat = true;
                    }
                    else {
                        return false;
                    }
                    break;
                case 1:
                    AuxTransicion = TransicionesPosibles.getTransicion();
                    break;
                default:
                    AuxTransicion = TransicionesPosibles.getTransicion();
                    TransicionesPosibles.eliminarTransicion(AuxTransicion);
                    AP AuxAuxAP = AuxAP;
                    AuxAuxAP.setTransicion(AuxTransicion.getEstadoSiguiente_(), TransicionesPosibles);
                    pilaRecorrido.push(AuxAuxAP);
            }
            if (AuxTransicion.getEstadoSiguiente_() != "") {
                cout << endl << "Transicion elegida: " << endl << endl << AuxTransicion;
                nombreEstado = AuxTransicion.getEstadoSiguiente_();
                if (AuxTransicion.getEntrada_() != ".") {
                    auxCaracter = AuxAP.getCadenaEntrada_();
                    auxCaracter.erase(auxCaracter.begin());
                    AuxAP.setCadenaEntrada_(auxCaracter);
                }
                AuxAP.getPilaAutomata().pop();
                if (AuxTransicion.getMeterPila_().size() == 1) {
                    if (AuxTransicion.getMeterPila_()[0] != ".") {
                        AuxAP.getPilaAutomata().push(AuxTransicion.getMeterPila_()[0]);
                    }
                }
                else {
                    for (int i = AuxTransicion.getMeterPila_().size() - 1; i >= 0; --i) {
                        AuxAP.getPilaAutomata().push(AuxTransicion.getMeterPila_()[i]);
                    }
                }
            }
        }
        AuxTransicion.clearTransicion();
    } while (1 == 1);
}

vector <string> AP::separarCadenas(string cadena) {
    vector <string> cadenas;
    string cadenaAux;
    int i = 0;
    while(i < cadena.size()) {
        if (cadena[i] != ' ') {
            cadenaAux.push_back(cadena[i]);
        }
        else {
            if (cadenaAux != "")
                cadenas.push_back(cadenaAux);
            cadenaAux.clear();
        }
        ++i;
    }
    if (cadenaAux != "")
    cadenas.push_back(cadenaAux);
    return cadenas;
}

void AP::guardarEstados(vector <vector <string>> cadenas) {
    conjuntoEstados_.setNumeroEstados_(cadenas[0].size());
    conjuntoEstados_.guardarEstadoTransicion(cadenas);
}

void AP::guardarAlfabeto(vector <string> cadenas) {
    for (int i = 0; i < cadenas.size(); ++i) {
        alfabeto_.insert(cadenas[i]);
    }
}

void AP::guardarAlfabetoPila(vector <string> cadenas) {
    for (int i = 0; i < cadenas.size(); ++i) {
        alfabetoPila_.insert(cadenas[i]);
    }
}

void AP::guardarCabezaPila(string cadena) {
    pilaAutomata_.push(cadena);
}

void AP::setTransicion(string id, SetTransiciones Transiciones) {
    conjuntoEstados_.setTransicion(id, Transiciones);
}

string AP::getCaracter() {
    stringstream ss;
    string caracter;
    ss << cadenaEntrada_[0];
    ss >> caracter;
    return caracter;
}

SetEstados& AP::getConjuntoEstados() {
    return conjuntoEstados_;
}

stack<string>& AP::getPilaAutomata() {
    return pilaAutomata_;
}

const SetEstados AP::getConjuntoEstados_() const {
    return conjuntoEstados_;
}

void AP::setConjuntoEstados_(const SetEstados &conjuntoEstados_) {
    AP::conjuntoEstados_ = conjuntoEstados_;
}

const set<string> &AP::getAlfabeto_() const {
    return alfabeto_;
}

void AP::setAlfabeto_(const set<string> &alfabeto_) {
    AP::alfabeto_ = alfabeto_;
}

void AP::setPilaAutomata_(const stack<string> &pilaAutomata_) {
    AP::pilaAutomata_ = pilaAutomata_;
}

const set<string> &AP::getAlfabetoPila_() const {
    return alfabetoPila_;
}

void AP::setAlfabetoPila_(const set<string> &alfabetoPila_) {
    AP::alfabetoPila_ = alfabetoPila_;
}

const stack <string> &AP::getPilaAutomata_() const {
    return pilaAutomata_;
}

const string &AP::getCadenaEntrada_() const {
    return cadenaEntrada_;
}

void AP::setCadenaEntrada_(const string &cadenaEntrada_) {
    AP::cadenaEntrada_ = cadenaEntrada_;
}

AP &AP::operator=(const AP &cp) {
    conjuntoEstados_ = cp.getConjuntoEstados_();
    alfabeto_ = cp.getAlfabeto_();
    alfabetoPila_ = cp.getAlfabetoPila_();
    pilaAutomata_ = cp.getPilaAutomata_();
    cadenaEntrada_ = cp.getCadenaEntrada_();
    return *this;
}

ostream &operator<<(ostream &out, const AP &cp) {
    //out << "--- " << cp.getCadenaEntrada_() << " ---" << endl;
    out << cp.getConjuntoEstados_() << endl << "Alfabeto de la cadena: ";
    for (set <string>::iterator it = cp.getAlfabeto_().begin(); it != cp.getAlfabeto_().end(); ++it) {
        out << *it << " ";
    }
    out << endl << "Alfabeto de la pila: ";
    for (set <string>::iterator it = cp.getAlfabetoPila_().begin(); it != cp.getAlfabetoPila_().end(); ++it) {
        out << *it << " ";
    }
    out << endl << "Cabeza de la pila: " <<"(" << cp.getPilaAutomata_().top() << ")" << endl;
    return out;
}



