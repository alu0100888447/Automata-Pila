//
// Created by izm20 on 3/10/17.
//

#include "../include/Estado.h"

Nodo::Nodo() {

}

Nodo::Nodo(const Nodo &cp) {
    id_ = cp.getId_();
    transiciones_ = cp.getTransiciones_();
}

Nodo::Nodo(SetTransiciones transiciones, string id) {

}

Nodo::~Nodo() {

}

const string Nodo::getId_() const {
    return id_;
}

const SetTransiciones Nodo::getTransiciones_() const {
    return transiciones_;
}

void Nodo::setId_(const string &id_) {
    Nodo::id_ = id_;
}

void Nodo::setTransiciones_(const SetTransiciones &transiciones_) {
    Nodo::transiciones_ = transiciones_;
}

void Nodo::operator=(const Nodo& cp) {

}

ostream &operator<<(ostream &out, const Nodo &cp) {
    return <#initializer#>;
}



