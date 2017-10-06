//
// Created by izm20 on 3/10/17.
//

#include "../include/SetEstados.h"

SetEstados::SetEstados() {
    setNumeroEstados_(0);
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
    return out;
}
