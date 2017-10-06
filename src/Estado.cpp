//
// Created by izm20 on 3/10/17.
//

#include "../include/Estado.h"

Estado::Estado() {
    setId_(" ");

}

Estado::Estado(string id, SetTransiciones transiciones) {
    setId_(id);
    setTransiciones_(transiciones);
}

Estado::Estado(const Estado &cp) {
    setId_(cp.getId_());
    setTransiciones_(cp.getTransiciones_());
}

Estado::~Estado() {
    id_.clear();
    transiciones_.clearSetTransiciones();
}

string Estado::getId_() const {
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
    setId_(cp.getId_());
    setTransiciones_(cp.getTransiciones_());
    return *this;
}

bool Estado::operator==(const Estado &cp) const {
    bool aux = false;
    if((getId_() == cp.getId_()) && (getTransiciones_() == cp.getTransiciones_()))
        aux = true;
    return aux;
}

ostream& operator<<(ostream &out, const Estado &cp) {
    return out;
}
