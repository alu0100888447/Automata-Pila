//
// Created by izm20 on 3/10/17.
//

#ifndef AP_SETNODOS_H
#define AP_SETNODOS_H

#include "Estado.h"

/**
 * @class SetEstados
 * @brief Representa el conjunto finito de estados Q.
 */
class SetEstados {
private:
    set<Estado> conjuntoEstados_;
    int numeroEstados_;
public:
    /**
     * @brief Constructor por defecto.
     */
    SetEstados();
    /**
     * @brief Constructor por defecto.
     * @param conjuntoEstados
     * @param numeroEstados
     */
    SetEstados(set<Estado> conjuntoEstados, int numeroEstados);
    /**
     * @brief Constructor de copia.
     * @param cp
     */
    SetEstados(const SetEstados &cp);
    /**
     * @brief Destructor por defecto.
     */
    virtual ~SetEstados();
    /**
     * @brief Funcion que devuelve el conjunto de transiciones posibles desde el estado actual.
     * @param caracter
     * @param cabezaPila
     * @param id
     * @return
     */
    SetTransiciones analisisTransiciones(string caracter, string cabezaPila, string id);
    /**
     * @brief Funcion que devuleve el id_ del estado de arranque.
     * @return
     */
    string devolverInicio();
    /**
     * @brief Funcion que limpia el setEstado.
     */
    void clearSetEstados();
    /**
     * @brief Funcion que guarda un Estado dentro del set.
     * @param cp
     */
    void pushEstado(const Estado &cp);
    /**
     * @brief Funcion que guarda las transiciones en su estado correspondiente.
     * @param cadenas
     */
    void guardarEstadoTransicion(vector<vector<string>> cadenas);
    /**
     * @brief Funcion que devuelve la transicion creada para incluirla en el set.
     * @param indicie
     * @param cadenas
     * @return
     */
    Transicion crearTransicion(int indicie, vector<vector<string>> cadenas);
    /**
     * @brief  Funcion que guarda un conjunto de transiciones pero solo de un estado concreto.
     * @param id
     * @param Transiciones
     */
    void setTransicion(string id, SetTransiciones Transiciones);
    /**
     * @brief Getter conjuntoEstados_.
     * @return
     */
    const set<Estado> &getConjuntoEstados_() const;
    /**
     * @brief Setter conjuntoEstados_.
     * @param conjuntoEstados_
     */
    void setConjuntoEstados_(const set<Estado> &conjuntoEstados_);
    /**
     * @brief Getter numeroEstados_.
     * @return
     */
    int getNumeroEstados_() const;
    /**
     * @brief Setter numeroEstados_.
     * @param numeroEstados_
     */
    void setNumeroEstados_(int numeroEstados_);
    /**
     * @brief Sobrecarga operador =.
     * @param cp
     * @return
     */
    SetEstados &operator=(const SetEstados &cp);
    /**
     * @brief Sobrecarga operador ==.
     * @param cp
     * @return
     */
    bool operator==(const SetEstados &cp) const;
    /**
     * @brief Sobrecarga operador <<.
     * @param out
     * @param cp
     * @return
     */
    friend ostream &operator<<(ostream &out, const SetEstados &cp);
};


#endif //AP_SETNODOS_H
