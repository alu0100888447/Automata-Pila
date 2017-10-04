//
// Created by izm20 on 3/10/17.
//

#ifndef AP_NODO_H
#define AP_NODO_H

#include "SetTransiciones.h"

#include <iostream>
#include <string>

using namespace std;

class Nodo {
private:
    string id_;
    SetTransiciones transiciones_;
public:
    Nodo();
    Nodo(const Nodo &cp);
    Nodo(SetTransiciones transiciones, string id);
    virtual ~Nodo();
    const string &getId_() const;
    const SetTransiciones &getTransiciones_() const;
    void setId_(const string &id_);
    void setTransiciones_(const SetTransiciones &transiciones_);
    void operator=(const Nodo &cp);

    friend ostream& operator<<(ostream &out, const Nodo &cp);
};


#endif //AP_NODO_H
