//
// Created by izm20 on 3/10/17.
//

#ifndef AP_SETNODOS_H
#define AP_SETNODOS_H

#include "Estado.h"

class SetEstados {
private:
    set <Estado> conjuntoEstados_;
    int numeroEstados_;
public:
    SetEstados();
    SetEstados(set <Estado> conjuntoEstados, int numeroEstados);
    SetEstados(const SetEstados &cp);
    virtual ~SetEstados();
    SetTransiciones analisisTransiciones(string caracter, string cabezaPila, string id);
    string devolverInicio();
    void clearSetEstados();
    void pushEstado(const Estado &cp);
    void guardarEstadoTransicion(vector<vector<string>> cadenas);
    Transicion crearTransicion(int indicie, vector<vector<string>> cadenas);
    void setTransicion(string id, SetTransiciones Transiciones);

    const set<Estado> &getConjuntoEstados_() const;
    void setConjuntoEstados_(const set<Estado> &conjuntoEstados_);
    int getNumeroEstados_() const;
    void setNumeroEstados_(int numeroEstados_);

    SetEstados& operator=(const SetEstados &cp);
    bool operator==(const SetEstados &cp) const;

    friend ostream& operator<<(ostream &out, const SetEstados &cp);
};


#endif //AP_SETNODOS_H
