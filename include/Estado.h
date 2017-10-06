//
// Created by izm20 on 3/10/17.
//

#ifndef AP_NODO_H
#define AP_NODO_H

#include "SetTransiciones.h"

class Estado {
private:
    string id_;
    SetTransiciones transiciones_;
public:
    Estado();
    Estado(const Estado &cp);
    Estado(string id, SetTransiciones transiciones);
    virtual ~Estado();

    string getId_() const;
    const SetTransiciones getTransiciones_() const;
    void setId_(const string &id_);
    void setTransiciones_(const SetTransiciones &transiciones_);

    Estado& operator=(const Estado &cp);
    bool operator==(const Estado &cp) const;

    friend ostream& operator<<(ostream &out, const Estado &cp);
};


#endif //AP_NODO_H
