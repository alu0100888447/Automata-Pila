//
// Created by izm20 on 3/10/17.
//

#ifndef AP_SETTRANSICIONES_H
#define AP_SETTRANSICIONES_H

#include "Transicion.h"

/**
 * @class SetTransiciones
 * @brief Representa el conjunto de transiciones de un estado.
 */
class SetTransiciones {
private:
    set<Transicion> conjuntoTransiciones_;
    int numeroTransiciones_;
public:
    /**
     * @brief Constructor por defecto.
     */
    SetTransiciones();
    /**
     * @brief Constructor parametrizado.
     * @param Transiciones
     * @param numerTransiciones
     */
    SetTransiciones(set<Transicion> Transiciones, int numerTransiciones);
    /**
     * @brief Constructor de copia.
     * @param cp
     */
    SetTransiciones(const SetTransiciones &cp);
    /**
     * @brief Destructor por defecto.
     */
    virtual ~SetTransiciones();
    /**
     * @brief Funcion que devuelve el conjunto de transiciones posibles para una caracter y la cabeza de la pila.
     * @param caracter
     * @param cabezaPila
     * @return
     */
    SetTransiciones analisisTransiciones(string caracter, string cabezaPila);
    /**
     * @brief Funcion que elimina una transicion.
     * @param cp
     */
    void eliminarTransicion(Transicion cp);
    /**
     * @brief Funcion que limpia el objeto.
     */
    void clearSetTransiciones();
    /**
     * @brief Funcion que inserta una transicion.
     * @param cp
     */
    void pushTransicion(const Transicion &cp);
    /**
     * @brief Funcion que devuelve la primera transicion del set.
     * @return
     */
    Transicion getTransicion();
    /**
     * @brief Getter conjuntoTransiciones_.
     * @return
     */
    const set<Transicion> &getConjuntoTransiciones_() const;
    /**
     * @brief Setter conjuntoTransiciones_.
     * @param conjuntoTransiciones_
     */
    void setConjuntoTransiciones_(const set<Transicion> &conjuntoTransiciones_);
    /**
     * @brief Getter numeroTransiciones_.
     * @return
     */
    int getNumeroTransiciones_() const;
    /**
     * @brief Setter numeroTransiciones_.
     * @param numeroTransiciones_
     */
    void setNumeroTransiciones_(int numeroTransiciones_);
    /**
     * @brief Sobrecarga operador =.
     * @param cp
     * @return
     */
    SetTransiciones &operator=(const SetTransiciones &cp);
    /**
     * @brief Sobrecarga operador ==.
     * @param cp
     * @return
     */
    bool operator==(const SetTransiciones &cp) const;
    /**
     * @brief Sobrecarga operador !=.
     * @param cp
     * @return
     */
    bool operator!=(const SetTransiciones &cp) const;
    /**
     * @brief Sobrecarga operador <<.
     * @param out
     * @param cp
     * @return
     */
    friend ostream &operator<<(ostream &out, const SetTransiciones &cp);
};


#endif //AP_SETTRANSICIONES_H
