//
// Created by izm20 on 3/10/17.
//

#include "../include/AP.h"

AP::AP() {
    setCadenaEntrada_("");
}

AP::AP(string nombreFichero) {
    string aux = "", aux1 = "";
    ifstream fichero(nombreFichero);
    cout << endl << nombreFichero << endl;
    if(fichero.is_open()) {
        while(!fichero.eof()) {
            aux.clear();
            aux1.clear();
            fichero >> aux;
            if(aux != "") {
                if(aux == "#")
                    getline(fichero, aux);
                else {
                    getline(fichero, aux1);
                    aux += aux1;
                    cout << aux << endl;

                }
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


