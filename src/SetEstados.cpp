//
// Created by izm20 on 3/10/17.
//

#include "../include/SetEstados.h"

SetEstados::SetEstados() {
    setNumeroEstados_(-1);
}

SetEstados::SetEstados(set<Estado> conjuntoEstados, int numeroEstados) {
    setConjuntoEstados_(conjuntoEstados);
    setNumeroEstados_(numeroEstados);
}

SetEstados::SetEstados(const SetEstados &cp) {
    setConjuntoEstados_(cp.getConjuntoEstados_());
    setNumeroEstados_(cp.getNumeroEstados_());
}

SetEstados::~SetEstados() {
    conjuntoEstados_.clear();
    numeroEstados_ = 0;
}

void SetEstados::clearSetEstados() {
    conjuntoEstados_.clear();
    numeroEstados_ = 0;
}

void SetEstados::pushEstado(const Estado &cp) {
    conjuntoEstados_.insert(cp);
}

void SetEstados::guardarEstadoTransicion(vector<vector<string>> cadenas) {
    for (int i = 0; i < cadenas[0].size(); ++i) {
        int contador = 0;
        SetTransiciones AuxSetTransicion;
        Estado AuxEstado;
        AuxEstado.setIdNumber_(i + 1);
        AuxEstado.setId_(cadenas[0][i]);
        if(cadenas[0][i] == cadenas[1][0])
            AuxEstado.setInicio_(true);

        for (int j = 2; j < cadenas.size(); ++j) {
            if(AuxEstado.getId_() == cadenas[j][0]) {
                Transicion AuxTransicion;
                vector <string> auxString;
                AuxTransicion.setIdNumber_(j - 1);
                AuxTransicion.setEntrada_(cadenas[j][1]);
                AuxTransicion.setCabezaPila_(cadenas[j][2]);
                AuxTransicion.setEstadoSiguiente_(cadenas[j][3]);
                for (int k = 4; k < cadenas[j].size(); ++k) {
                    auxString.push_back(cadenas[j][k]);
                }
                AuxTransicion.setMeterPila_(auxString);
                AuxSetTransicion.pushTransicion(AuxTransicion);
                ++contador;
            }
        }
        AuxSetTransicion.setNumeroTransiciones_(contador);
        AuxEstado.setTransiciones_(AuxSetTransicion);
        pushEstado(AuxEstado);
    }
}

const set<Estado> &SetEstados::getConjuntoEstados_() const {
    return conjuntoEstados_;
}

void SetEstados::setConjuntoEstados_(const set<Estado> &conjuntoEstados_) {
    SetEstados::conjuntoEstados_ = conjuntoEstados_;
}

int SetEstados::getNumeroEstados_() const {
    return numeroEstados_;
}

void SetEstados::setNumeroEstados_(int numeroEstados_) {
    SetEstados::numeroEstados_ = numeroEstados_;
}

SetEstados &SetEstados::operator=(const SetEstados &cp) {
    if(this != &cp) {
        setConjuntoEstados_(cp.getConjuntoEstados_());
        setNumeroEstados_(cp.getNumeroEstados_());
    }
    return *this;
}

bool SetEstados::operator==(const SetEstados &cp) const {
    bool aux = false;
    if((getConjuntoEstados_() == cp.getConjuntoEstados_()) && (getNumeroEstados_() == cp.getNumeroEstados_()))
        aux = true;
    return aux;
}

ostream &operator<<(ostream &out, const SetEstados &cp) {
    out << endl << "+ Numero de estados: " << cp.getNumeroEstados_() << endl << endl;
    for(set<Estado>::iterator it = cp.getConjuntoEstados_().begin(); it != cp.getConjuntoEstados_().end(); ++it) {
        out << *it << endl;
    }
    return out;
}
