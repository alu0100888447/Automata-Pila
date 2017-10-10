//
// Created by izm20 on 3/10/17.
//

#include "../include/AP.h"

AP::AP() {
    setCadenaEntrada_("");
}

AP::AP(string nombreFichero) {
    int contador = 0;
    string cadena = "";
    vector <string> cadenas;
    ifstream fichero(nombreFichero);

    if(fichero.is_open()) {
        while(!fichero.eof()) {
            cadena.clear();
            getline(fichero, cadena);
            if(cadena[0] == '#' || cadena == "") {
                cadena.clear();
            }
            else {
                cadenas = leerEstados(cadena);
                if(contador == 0) {
                    conjuntoEstados_.setNumeroEstados_(cadenas.size());
                    set <Estado> setAuxiliar;
                    for (int i = 0; i < conjuntoEstados_.getNumeroEstados_(); ++i) {
                        Estado estadoAuxiliar;
                        estadoAuxiliar.setId_(cadenas[i]);
                        setAuxiliar.insert(estadoAuxiliar);
                    }
                    conjuntoEstados_.setConjuntoEstados_(setAuxiliar);
                }
                cadenas.clear();
                ++contador;
            }
        }
    }
}

AP::AP(SetEstados conjuntoEstados, stack <char> pilaAutomata, string cadenaEntrada) {
    setConjuntoEstados_(conjuntoEstados);
    setPilaAutomata_(pilaAutomata);
    setCadenaEntrada_(cadenaEntrada);
}

AP::AP(const AP &cp) {
    setConjuntoEstados_(cp.getConjuntoEstados_());
    setPilaAutomata_(cp.getPilaAutomata_());
    setCadenaEntrada_(cp.getCadenaEntrada_());
}

AP::~AP() {
    conjuntoEstados_.clearSetEstados();
    cadenaEntrada_.clear();
}

vector <string> AP::leerEstados(string cadena) {
    vector <string> cadenas;
    string cadenaAux;
    int i = 0;
    while(i < cadena.size()) {
        if (cadena[i] != ' ') {
            cadenaAux.push_back(cadena[i]);
        }
        else {
            cadenas.push_back(cadenaAux);
            cadenaAux.clear();
        }
        ++i;
    }
    cadenas.push_back(cadenaAux);
    return cadenas;
}

const SetEstados &AP::getConjuntoEstados_() const {
    return conjuntoEstados_;
}

void AP::setConjuntoEstados_(const SetEstados &conjuntoEstados_) {
    AP::conjuntoEstados_ = conjuntoEstados_;
}

const stack <char> &AP::getPilaAutomata_() const {
    return pilaAutomata_;
}

void AP::setPilaAutomata_(const stack <char> &pilaAutomata_) {
    AP::pilaAutomata_ = pilaAutomata_;
}

const string &AP::getCadenaEntrada_() const {
    return cadenaEntrada_;
}

void AP::setCadenaEntrada_(const string &cadenaEntrada_) {
    AP::cadenaEntrada_ = cadenaEntrada_;
}

ostream &operator<<(ostream &out, const AP &cp) {
    return out;
}


