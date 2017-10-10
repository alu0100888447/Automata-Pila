//
// Created by izm20 on 3/10/17.
//

#ifndef AP_AP_H
#define AP_AP_H

#include "SetEstados.h"

class AP {
private:
    SetEstados conjuntoEstados_;
    set <string> alfabeto_;
    set <string> alfabetoPila_;
    stack <string> pilaAutomata_;
    string cadenaEntrada_;
public:
    AP();
    AP(string nombreFichero);
    AP(SetEstados conjuntoEstados, set <string> alfabeto, set <string> alfabetoPila, stack <string> pilaAutomata,
       string cadenaEntrada);
    AP(const AP &cp);
    virtual ~AP();
    vector <string> leerEstados(string cadena);
    void guardarEstados(vector <string> cadenas);
    void guardarAlfabeto(vector <string> cadenas);
    void guardarAlfabetoPila(vector <string> cadenas);
    void guardarInicio(string cadena);
    void guardarCabezaPila(string cadena);

    const SetEstados &getConjuntoEstados_() const;
    void setConjuntoEstados_(const SetEstados &conjuntoEstados_);
    const set<string> &getAlfabeto_() const;
    void setAlfabeto_(const set<string> &alfabeto_);
    const set<string> &getAlfabetoPila_() const;
    void setAlfabetoPila_(const set<string> &alfabetoPila_);
    const stack <string> &getPilaAutomata_() const;
    void setPilaAutomata_(const stack <string> &pilaAutomata_);
    const string &getCadenaEntrada_() const;
    void setCadenaEntrada_(const string &cadenaEntrada_);

    friend ostream& operator<<(ostream &out, const AP &cp);

};


#endif //AP_AP_H
