//
// Created by izm20 on 3/10/17.
//

#ifndef AP_NODO_H
#define AP_NODO_H

#include "SetTransiciones.h"

class Estado {
private:
    int idNumber_;
    string id_;
    SetTransiciones transiciones_;
    bool inicio_;
public:
    Estado();
    Estado(const Estado &cp);
    Estado(int idNumber, string id, SetTransiciones transiciones, bool inicio);
    virtual ~Estado();

    int getIdNumber_() const;
    void setIdNumber_(int idNumber_);
    string getId_() const;
    const SetTransiciones getTransiciones_() const;
    void setId_(const string &id_);
    void setTransiciones_(const SetTransiciones &transiciones_);

    bool isInicio_() const;

    void setInicio_(bool inicio_);

    Estado& operator=(const Estado &cp);
    bool operator==(const Estado &cp) const;
    bool operator!=(const Estado &cp) const;
    bool operator<(const Estado &cp) const;

    friend ostream& operator<<(ostream &out, const Estado &cp);
};


#endif //AP_NODO_H
