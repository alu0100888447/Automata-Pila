//
// Created by izm20 on 3/10/17.
//

#include "../include/AP.h"

AP::AP() {
    setCadenaEntrada_("");
}

AP::AP(string nombreFichero) {
    string cadena = "";
    vector <vector<string>> cadenas;
    vector <vector<string>> cadenasAux;
    ifstream fichero(nombreFichero);

    if(fichero.is_open()) {
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

vector <string> AP::separarCadenas(string cadena) {
    vector <string> cadenas;
    string cadenaAux;
    int i = 0;
    while(i < cadena.size()) {
        if(cadena[i] != ' ') {
            cadenaAux.push_back(cadena[i]);
        }
        else {
            if(cadenaAux != "")
                cadenas.push_back(cadenaAux);
            cadenaAux.clear();
        }
        ++i;
    }
    if(cadenaAux != "")
    cadenas.push_back(cadenaAux);
    return cadenas;
}

void AP::guardarEstados(vector <vector<string>> cadenas) {
    conjuntoEstados_.setNumeroEstados_(cadenas[0].size());
    conjuntoEstados_.guardarEstadoTransicion(cadenas);
}

void AP::guardarAlfabeto(vector<string> cadenas) {
    for (int i = 0; i < cadenas.size(); ++i) {
        alfabeto_.insert(cadenas[i]);
    }
}

void AP::guardarAlfabetoPila(vector<string> cadenas) {
    for (int i = 0; i < cadenas.size(); ++i) {
        alfabetoPila_.insert(cadenas[i]);
    }
}

void AP::guardarCabezaPila(string cadena) {
    pilaAutomata_.push(cadena);
}

const SetEstados &AP::getConjuntoEstados_() const {
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

ostream &operator<<(ostream &out, const AP &cp) {
    //out << "--- " << cp.getCadenaEntrada_() << " ---" << endl;
    out << cp.getConjuntoEstados_() << endl << "Alfabeto de la cadena: ";
    for(set <string>::iterator it = cp.getAlfabeto_().begin(); it != cp.getAlfabeto_().end(); ++it) {
        out << *it << " ";
    }
    out << endl << "Alfabeto de la pila: ";
    for(set <string>::iterator it = cp.getAlfabetoPila_().begin(); it != cp.getAlfabetoPila_().end(); ++it) {
        out << *it << " ";
    }
    out << endl << "Cabeza de la pila: " <<"(" << cp.getPilaAutomata_().top() << ")" << endl;
    return out;
}


