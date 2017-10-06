//
// Created by izm20 on 3/10/17.
//

#include "../include/Estado.h"

Estado::Estado() {

}

Estado::Estado(const Estado &cp) {
    id_ = cp.getId_();
    transiciones_ = cp.getTransiciones_();
}

Estado::Estado(SetTransiciones transiciones, string id) {

}

Estado::~Estado() {

}

const string Estado::getId_() const {
    return id_;
}

const SetTransiciones Estado::getTransiciones_() const {
    return transiciones_;
}

void Estado::setId_(const string &id_) {
    Estado::id_ = id_;
}

void Estado::setTransiciones_(const SetTransiciones &transiciones_) {
    Estado::transiciones_ = transiciones_;
}

Estado& Estado::operator=(const Estado& cp) {

}

bool Estado::operator==(const Estado &cp) const {
    return false;
}

ostream& operator<<(ostream &out, const Estado &cp) {
    return out;
}



