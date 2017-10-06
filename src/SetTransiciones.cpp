//
// Created by izm20 on 3/10/17.
//

#include "../include/SetTransiciones.h"

SetTransiciones::SetTransiciones() {}

SetTransiciones::SetTransiciones(set<Transicion> Transiciones) {

}

SetTransiciones::SetTransiciones(const SetTransiciones &cp) {

}

const set<Transicion> &SetTransiciones::getConjuntoTransiciones_() const {
    return conjuntoTransiciones_;
}

void SetTransiciones::setConjuntoTransiciones_(const set<Transicion> &conjuntoTransiciones_) {
    SetTransiciones::conjuntoTransiciones_ = conjuntoTransiciones_;
}

int SetTransiciones::getNumeroTransiciones_() const {
    return numeroTransiciones_;
}

void SetTransiciones::setNumeroTransiciones_(int numeroTransiciones_) {
    SetTransiciones::numeroTransiciones_ = numeroTransiciones_;
}
