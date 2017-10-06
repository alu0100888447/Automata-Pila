//
// Created by izm20 on 3/10/17.
//

#ifndef AP_SETTRANSICIONES_H
#define AP_SETTRANSICIONES_H

#include "Transicion.h"

class SetTransiciones {
private:
    set <Transicion> conjuntoTransiciones_;
    int numeroTransiciones_;
public:
    SetTransiciones();
    SetTransiciones(set<Transicion> Transiciones);
    SetTransiciones(const SetTransiciones &cp);

    const set<Transicion> &getConjuntoTransiciones_() const;

    void setConjuntoTransiciones_(const set<Transicion> &conjuntoTransiciones_);

    int getNumeroTransiciones_() const;

    void setNumeroTransiciones_(int numeroTransiciones_);

};


#endif //AP_SETTRANSICIONES_H
