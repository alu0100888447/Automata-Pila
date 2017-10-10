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

void SetEstados::guardarInicio(string cadena) {
    for(set <Estado>::iterator it = conjuntoEstados_.begin(); it != conjuntoEstados_.end(); ++it) {
        Estado Aux = *it;
        if(Aux.getId_() == cadena) {
            conjuntoEstados_.erase((*it));
            Aux.setInicio_(true);
            conjuntoEstados_.insert(Aux);
        }
    }
}

const set<Estado> &SetEstados::getConjuntoEstados_() const {
    return conjuntoEstados_;
}

void SetEstados::setConjuntoEstados_(const set<Estado> &conjuntoEstados_) {
    this->conjuntoEstados_ = conjuntoEstados_;
}

int SetEstados::getNumeroEstados_() const {
    return numeroEstados_;
}

void SetEstados::setNumeroEstados_(int numeroEstados_) {
    this->numeroEstados_ = numeroEstados_;
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
    out << "*** " << cp.getNumeroEstados_() << " ***" << endl;
    for(set<Estado>::iterator it = cp.getConjuntoEstados_().begin(); it != cp.getConjuntoEstados_().end(); ++it) {
        out << *it << endl;
    }
    return out;
}
