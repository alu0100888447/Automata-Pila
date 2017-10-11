//
// Created by izm20 on 3/10/17.
//

#include "../include/Estado.h"

Estado::Estado() {
    setIdNumber_(-1);
    setId_(" ");
    setInicio_(false);
}

Estado::Estado(int idNumber, string id, SetTransiciones transiciones, bool inicio) {
    setIdNumber_(idNumber);
    setId_(id);
    setTransiciones_(transiciones);
    setInicio_(inicio);
}

Estado::Estado(const Estado &cp) {
    setIdNumber_(cp.getIdNumber_());
    setId_(cp.getId_());
    setTransiciones_(cp.getTransiciones_());
    setInicio_(cp.isInicio_());
}

Estado::~Estado() {
    idNumber_ = -1;
    id_.clear();
    transiciones_.clearSetTransiciones();
    inicio_ = false;
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

bool Estado::isInicio_() const {
    return inicio_;
}

void Estado::setInicio_(bool inicio_) {
    Estado::inicio_ = inicio_;
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
    out << "Nombre del estado: " << cp.getId_();
    if(cp.isInicio_() == true) {
        out << " <- Es el estado de arranque" << endl;
    }
    out << endl << cp.getTransiciones_() << endl;
    return out;
}
