//
// Created by izm20 on 3/10/17.
//

#include "../include/Nodo.h"

Nodo::Nodo() {

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
