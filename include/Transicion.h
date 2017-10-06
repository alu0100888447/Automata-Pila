//
// Created by izm20 on 3/10/17.
//

#ifndef AP_TRANSICION_H
#define AP_TRANSICION_H

#include <iostream>
#include <string>
#include <set>
#include <cstdio>

using namespace std;

class Transicion {
private:
    string estadoSiguiente_;
    char entrada_;
    char cabezaPila;
    string meterPila;
public:
    Transicion();
    Transicion(string estadoSiguiente, char entrada, char cabezaPila, string meterPila);
    Transicion(const Transicion &cp);
    virtual ~Transicion();
    Transicion& operator=(const Transicion &cp);
    bool operator==(const Transicion &cp) const;

    friend ostream& operator<<(ostream &out, const Transicion &cp);
};


#endif //AP_TRANSICION_H
