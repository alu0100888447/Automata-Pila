//
// Created by izm20 on 3/10/17.
//

#ifndef AP_TRANSICION_H
#define AP_TRANSICION_H

#include <iostream>
#include <string>
#include <set>
#include <iterator>
#include <vector>
#include <cstdio>
#include <stack>
#include <fstream>

using namespace std;

class Transicion {
private:
    int idNumber_;
    string estadoSiguiente_;
    char entrada_;
    char cabezaPila_;
    string meterPila_;
public:
    Transicion();
    Transicion(int idNumber, string estadoSiguiente, char entrada, char cabezaPila, string meterPila);
    Transicion(const Transicion &cp);
    virtual ~Transicion();
    void clearTransicion();

    int getIdNumber_() const;
    void setIdNumber_(int idNumber_);
    const string &getEstadoSiguiente_() const;
    void setEstadoSiguiente_(const string &estadoSiguiente_);
    char getEntrada_() const;
    void setEntrada_(char entrada_);
    char getCabezaPila_() const;
    void setCabezaPila_(char cabezaPila_);
    const string &getMeterPila_() const;
    void setMeterPila_(const string &meterPila_);

    Transicion& operator=(const Transicion &cp);
    bool operator==(const Transicion &cp) const;
    bool operator!=(const Transicion &cp) const;
    bool operator<(const Transicion &cp) const;

    friend ostream& operator<<(ostream &out, const Transicion &cp);
};


#endif //AP_TRANSICION_H
