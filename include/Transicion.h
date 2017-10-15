//
// Created by izm20 on 3/10/17.
//

#ifndef AP_TRANSICION_H
#define AP_TRANSICION_H

#include <iostream>
#include <string>
#include <sstream>
#include <set>
#include <iterator>
#include <vector>
#include <cstdio>
#include <stack>
#include <fstream>

using namespace std;

/**
 * @class Transicion
 * @brief Representa una transicion de un estado de un automata de pila.
 */
class Transicion {
private:
    int idNumber_;
    string estadoSiguiente_;
    string entrada_;
    string cabezaPila_;
    vector<string> meterPila_;
public:
    /**
     * @brief Constructor por defecto.
     */
    Transicion();
    /**
     * @brief Constructor parametrizado.
     * @param idNumber
     * @param estadoSiguiente
     * @param entrada
     * @param cabezaPila
     * @param meterPila
     */
    Transicion(int idNumber, string estadoSiguiente, string entrada, string cabezaPila, vector<string> meterPila);
    /**
     * @brief Constructor de copia.
     * @param cp
     */
    Transicion(const Transicion &cp);
    /**
     * @brief Destructor por defecto.
     */
    virtual ~Transicion();
    /**
     * @brief Funcion que limpia el objeto.
     */
    void clearTransicion();
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
     * @brief Getter estadoSiguiente_.
     * @return
     */
    const string &getEstadoSiguiente_() const;
    /**
     * @brief Setter estadoSiguiente_.
     * @param estadoSiguiente_
     */
    void setEstadoSiguiente_(const string &estadoSiguiente_);
    /**
     * @brief Getter entrada_.
     * @return
     */
    const string &getEntrada_() const;
    /**
     * @brief Setter entrada_.
     * @param entrada_
     */
    void setEntrada_(const string &entrada_);
    /**
     * @brief Getter cabezaPila_.
     * @return
     */
    const string &getCabezaPila_() const;
    /**
     * @brief Setter cabezaPila_.
     * @param cabezaPila_
     */
    void setCabezaPila_(const string &cabezaPila_);
    /**
     * @brief Getter meterPila_.
     * @return
     */
    const vector<string> &getMeterPila_() const;
    /**
     * @brief Setter meterPila_.
     * @param meterPila_
     */
    void setMeterPila_(const vector<string> &meterPila_);
    /**
     * @brief Sobrecarga operador =.
     * @param cp
     * @return
     */
    Transicion &operator=(const Transicion &cp);
    /**
     * @brief Sobrecarga operador ==.
     * @param cp
     * @return
     */
    bool operator==(const Transicion &cp) const;
    /**
     * @brief Sobrecarga operador !=.
     * @param cp
     * @return
     */
    bool operator!=(const Transicion &cp) const;
    /**
     * @brief Sobrecarga operador <.
     * @param cp
     * @return
     */
    bool operator<(const Transicion &cp) const;
    /**
     * @brief Sobrecarga operador <<.
     * @param out
     * @param cp
     * @return
     */
    friend ostream &operator<<(ostream &out, const Transicion &cp);
};


#endif //AP_TRANSICION_H
