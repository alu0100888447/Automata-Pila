//
// Created by izm20 on 3/10/17.
//

#ifndef AP_TRANSICION_H
#define AP_TRANSICION_H

#include <iostream>
#include <string>
#include <sstream>
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
    string entrada_;
    string cabezaPila_;
    vector <string> meterPila_;
public:
    Transicion();
    Transicion(int idNumber, string estadoSiguiente, string entrada, string cabezaPila, vector <string> meterPila);
    Transicion(const Transicion &cp);
    virtual ~Transicion();
    void clearTransicion();

    int getIdNumber_() const;
    void setIdNumber_(int idNumber_);
    const string &getEstadoSiguiente_() const;
    void setEstadoSiguiente_(const string &estadoSiguiente_);
    const string &getEntrada_() const;
    void setEntrada_(const string &entrada_);
    const string &getCabezaPila_() const;
    void setCabezaPila_(const string &cabezaPila_);
    const vector<string> &getMeterPila_() const;
    void setMeterPila_(const vector<string> &meterPila_);

    Transicion& operator=(const Transicion &cp);
    bool operator==(const Transicion &cp) const;
    bool operator!=(const Transicion &cp) const;
    bool operator<(const Transicion &cp) const;

    friend ostream& operator<<(ostream &out, const Transicion &cp);
};


#endif //AP_TRANSICION_H
