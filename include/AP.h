//
// Created by izm20 on 3/10/17.
//

#ifndef AP_AP_H
#define AP_AP_H

#include "SetEstados.h"

class AP {
private:
    SetEstados conjuntoEstados_;
    stack <char> pilaAutomata_;
    string cadenaEntrada_;
public:
    AP();
    AP(string nombreFichero);
    AP(SetEstados conjuntoEstados, stack <char> pilaAutomata, string cadenaEntrada);
    AP(const AP &cp);
    virtual ~AP();

    const SetEstados &getConjuntoEstados_() const;
    void setConjuntoEstados_(const SetEstados &conjuntoEstados_);
    const stack <char> &getPilaAutomata_() const;
    void setPilaAutomata_(const stack <char> &pilaAutomata_);
    const string &getCadenaEntrada_() const;
    void setCadenaEntrada_(const string &cadenaEntrada_);

    friend ostream& operator<<(ostream &out, const AP &cp);

};


#endif //AP_AP_H
