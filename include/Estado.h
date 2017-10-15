//
// Created by izm20 on 3/10/17.
//

#ifndef AP_NODO_H
#define AP_NODO_H

#include "SetTransiciones.h"

/**
 * @class Estado
 * @brief Representa un estado de un automata de pila.
 */
class Estado {
private:
    int idNumber_;
    string id_;
    SetTransiciones transiciones_;
    bool inicio_;
public:
    /**
     * @brief Constructor por defecto.
     */
    Estado();
    /**
     * @brief Constructor parametrizado.
     * @param idNumber
     * @param id
     * @param transiciones
     * @param inicio
     */
    Estado(int idNumber, string id, SetTransiciones transiciones, bool inicio);
    /**
     * @brief Constructor de copia.
     * @param cp
     */
    Estado(const Estado &cp);
    /**
     * @brief Destructor por defecto.
     */
    virtual ~Estado();
    /**
     * @brief Funcion que devuelve un conjunto de transiciones con un caracter y una cabeza de pila leidos.
     * @param caracter
     * @param cabezaPila
     * @return
     */
    SetTransiciones analisisTransiciones(string caracter, string cabezaPila);
    /**
     * @brief Getter idNumber_.
     * @return
     */
    int getIdNumber_() const;
    /**
     * @brief Setter idNumber_.
     * @param idNumber_
     */
    void setIdNumber_(int idNumber_);
    /**
     * @brief Getter id_.
     * @return
     */
    string getId_() const;
    /**
     * @brief Setter id_.
     * @param id_
     */
    void setId_(const string &id_);
    /**
     * @brief Getter transiciones_.
     * @return
     */
    const SetTransiciones getTransiciones_() const;
    /**
     * @brief Setter transiciones_.
     * @param transiciones_
     */
    void setTransiciones_(const SetTransiciones &transiciones_);
    /**
     * @brief Getter inicio_.
     * @return
     */
    bool isInicio_() const;
    /**
     * @brief Setter inicio_.
     * @param inicio_
     */
    void setInicio_(bool inicio_);
    /**
     * @brief Sobrecarga operador =.
     * @param cp
     * @return
     */
    Estado &operator=(const Estado &cp);
    /**
     * @brief Sobrecarga operador ==.
     * @param cp
     * @return
     */
    bool operator==(const Estado &cp) const;
    /**
     * @brief Sobrecarga operador !=.
     * @param cp
     * @return
     */
    bool operator!=(const Estado &cp) const;
    /**
     * @brief Sobrecarga operador <.
     * @param cp
     * @return
     */
    bool operator<(const Estado &cp) const;
    /**
     * @brief Sobrecarga operador <<.
     * @param out
     * @param cp
     * @return
     */
    friend ostream &operator<<(ostream &out, const Estado &cp);
};


#endif //AP_NODO_H
