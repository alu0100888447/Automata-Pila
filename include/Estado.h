//
// Created by izm20 on 3/10/17.
//

#ifndef AP_NODO_H
#define AP_NODO_H

#include "SetTransiciones.h"

#include <iostream>
#include <string>

using namespace std;

class Estado {
private:
    string id_;
    SetTransiciones transiciones_;
public:
    Estado();
    Estado(const Estado &cp);
    Estado(SetTransiciones transiciones, string id);
    virtual ~Estado();
    const string &getId_() const;
    const SetTransiciones &getTransiciones_() const;
    void setId_(const string &id_);
    void setTransiciones_(const SetTransiciones &transiciones_);
    void operator=(const Estado &cp);

    friend ostream& operator<<(ostream &out, const Estado &cp);
};


#endif //AP_NODO_H
