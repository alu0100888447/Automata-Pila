//
// Created by izm20 on 3/10/17.
//

#include "../include/Transicion.h"

Transicion::Transicion() {
    setIdNumber_(-1);
    setEstadoSiguiente_("");
    setEntrada_("");
    setCabezaPila_("");
}


Transicion::Transicion(int idNumber, string estadoSiguiente, string entrada, string cabezaPila, vector <string> meterPila) {
    setIdNumber_(idNumber);
    setEstadoSiguiente_(estadoSiguiente);
    setEntrada_(entrada);
    setCabezaPila_(cabezaPila);
    setMeterPila_(meterPila);
}

Transicion::Transicion(const Transicion &cp) {
    setIdNumber_(cp.getIdNumber_());
    setEstadoSiguiente_(cp.getEstadoSiguiente_());
    setEntrada_(cp.getEntrada_());
    setCabezaPila_(cp.getCabezaPila_());
    setMeterPila_(cp.getMeterPila_());
}

Transicion::~Transicion() {
    idNumber_ = -1;
    estadoSiguiente_.clear();
    entrada_ = ' ';
    cabezaPila_ = ' ';
    meterPila_.clear();
}

void Transicion::clearTransicion() {
    idNumber_ = -1;
    estadoSiguiente_.clear();
    entrada_ = ' ';
    cabezaPila_ = ' ';
    meterPila_.clear();
}

int Transicion::getIdNumber_() const {
    return idNumber_;
}

void Transicion::setIdNumber_(int idNumber_) {
    Transicion::idNumber_ = idNumber_;
}

const string &Transicion::getEstadoSiguiente_() const {
    return estadoSiguiente_;
}

void Transicion::setEstadoSiguiente_(const string &estadoSiguiente_) {
    Transicion::estadoSiguiente_ = estadoSiguiente_;
}

const string &Transicion::getEntrada_() const {
    return entrada_;
}

void Transicion::setEntrada_(const string &entrada_) {
    Transicion::entrada_ = entrada_;
}

const string &Transicion::getCabezaPila_() const {
    return cabezaPila_;
}

void Transicion::setCabezaPila_(const string &cabezaPila_) {
    Transicion::cabezaPila_ = cabezaPila_;
}

const vector<string> &Transicion::getMeterPila_() const {
    return meterPila_;
}

void Transicion::setMeterPila_(const vector<string> &meterPila_) {
    Transicion::meterPila_ = meterPila_;
}

Transicion& Transicion::operator=(const Transicion &cp) {
    if(this != &cp) {
        setEstadoSiguiente_(cp.getEstadoSiguiente_());
        setEntrada_(cp.getEntrada_());
        setCabezaPila_(cp.getCabezaPila_());
        setMeterPila_(cp.getMeterPila_());
    }
    return *this;
}


bool Transicion::operator==(const Transicion &cp) const {
    if(getMeterPila_().size() == cp.getMeterPila_().size()) {
        for (int i = 0; i < getMeterPila_().size(); ++i) {
            if (getMeterPila_()[i] != cp.getMeterPila_()[i])
                return false;
        }
        if ((getIdNumber_() == cp.getIdNumber_()) && (getEstadoSiguiente_() == cp.getEstadoSiguiente_()) &&
            (getEntrada_() == cp.getEntrada_()) && (getCabezaPila_() == cp.getCabezaPila_()))
            return true;
    }
    return false;
}

bool Transicion::operator!=(const Transicion &cp) const {
    if ((getIdNumber_() == cp.getIdNumber_()) && (getEstadoSiguiente_() == cp.getEstadoSiguiente_()) &&
        (getEntrada_() == cp.getEntrada_()) && (getCabezaPila_() == cp.getCabezaPila_())) {
        if (getMeterPila_().size() == cp.getMeterPila_().size()) {
            for (int i = 0; i < getMeterPila_().size(); ++i) {
                if (getMeterPila_()[i] != cp.getMeterPila_()[i])
                    return true;
            }
        }
        else
            return true;
    }
    else
        return true;
    return false;
}

bool Transicion::operator<(const Transicion &cp) const {
    if(getIdNumber_() < cp.getIdNumber_())
        return true;
    return false;
}

ostream& operator<<(ostream &out, const Transicion &cp) {
    out << "===" << cp.getIdNumber_() << "===" << cp.getEstadoSiguiente_() << "===" << cp.getEntrada_() << "===" << cp.getCabezaPila_() << "===";
    for (int i = 0; i < cp.getMeterPila_().size(); ++i) {
        out << cp.getMeterPila_()[i] << "===";
    }
    out << endl;
    return out;
}
