//
// Created by izm20 on 3/10/17.
//

#include "../include/SetTransiciones.h"

SetTransiciones::SetTransiciones() {
    numeroTransiciones_ = 0;
}

SetTransiciones::SetTransiciones(set<Transicion> Transiciones, int numeroTransiciones) {
    setConjuntoTransiciones_(Transiciones);
    setNumeroTransiciones_(numeroTransiciones);
}

SetTransiciones::SetTransiciones(const SetTransiciones &cp) {
    setConjuntoTransiciones_(cp.getConjuntoTransiciones_());
    setNumeroTransiciones_(cp.getNumeroTransiciones_());
}

SetTransiciones::~SetTransiciones() {
    conjuntoTransiciones_.clear();
    numeroTransiciones_ = 0;
}

void SetTransiciones::clearSetTransiciones() {
    conjuntoTransiciones_.clear();
    numeroTransiciones_ = 0;
}

void SetTransiciones::pushTransicion(const Transicion &cp) {

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

SetTransiciones &SetTransiciones::operator=(const SetTransiciones &cp) {
    if(this != &cp) {
        setConjuntoTransiciones_(cp.getConjuntoTransiciones_());
        setNumeroTransiciones_(cp.getNumeroTransiciones_());
    }
    return *this;
}

bool SetTransiciones::operator==(const SetTransiciones &cp) const {
    if((getConjuntoTransiciones_() == cp.getConjuntoTransiciones_()) && (getNumeroTransiciones_() == cp.getNumeroTransiciones_()))
        return true;
    return false;
}

bool SetTransiciones::operator!=(const SetTransiciones &cp) const {
    if((getConjuntoTransiciones_() != cp.getConjuntoTransiciones_()) && (getNumeroTransiciones_() != cp.getNumeroTransiciones_()))
        return true;
    return false;
}

ostream &operator<<(ostream &out, const SetTransiciones &cp) {
    out << "&&&" << cp.getNumeroTransiciones_() << endl;
    for(set<Transicion>::iterator it = cp.getConjuntoTransiciones_().begin(); it != cp.getConjuntoTransiciones_().end(); ++it) {
        out << *it << endl;
    }
    return out;
}
