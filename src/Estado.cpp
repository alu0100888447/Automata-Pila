//
// Created by izm20 on 3/10/17.
//

#include "../include/Estado.h"

Estado::Estado() {
    setIdNumber_(-1);
    setId_(" ");
}

Estado::Estado(int idNumber, string id, SetTransiciones transiciones) {
    setIdNumber_(idNumber);
    setId_(id);
    setTransiciones_(transiciones);
}

Estado::Estado(const Estado &cp) {
    setIdNumber_(cp.getIdNumber_());
    setId_(cp.getId_());
    setTransiciones_(cp.getTransiciones_());
}

Estado::~Estado() {
    idNumber_ = -1;
    id_.clear();
    transiciones_.clearSetTransiciones();
}

int Estado::getIdNumber_() const {
    return idNumber_;
}

void Estado::setIdNumber_(int idNumber_) {
    Estado::idNumber_ = idNumber_;
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
    setIdNumber_(cp.getIdNumber_());
    setId_(cp.getId_());
    setTransiciones_(cp.getTransiciones_());
    return *this;
}

bool Estado::operator==(const Estado &cp) const {
    if((getIdNumber_() == cp.getIdNumber_()) && (getId_() == cp.getId_()) && (getTransiciones_() == cp.getTransiciones_()))
        return true;
    return false;
}

bool Estado::operator!=(const Estado &cp) const {
    if((getIdNumber_() != cp.getIdNumber_()) && (getId_() != cp.getId_()) && (getTransiciones_() != cp.getTransiciones_()))
        return true;
    return false;
}

bool Estado::operator<(const Estado &cp) const {
    if(getIdNumber_() < cp.getIdNumber_())
        return true;
    return false;
}

ostream& operator<<(ostream &out, const Estado &cp) {
    out << cp.getIdNumber_() << " " << cp.getId_() << endl;
    //out << cp.getTransiciones_() << endl;
    return out;
}
