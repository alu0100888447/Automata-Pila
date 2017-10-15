//
// Created by izm20 on 3/10/17.
//

#ifndef AP_AP_H
#define AP_AP_H

#include "SetEstados.h"

/**
 * @class AP
 * @brief Representa un automata de pila con su 7-upla como atributos.
 */
class AP {
private:
    SetEstados conjuntoEstados_;
    set<string> alfabeto_;
    set<string> alfabetoPila_;
    stack<string> pilaAutomata_;
    string cadenaEntrada_;
public:
    /**
     * @brief Constructor por defecto.
     */
    AP();
    /**
     * @brief Constructor parametrizado.
     * @param conjuntoEstados
     * @param alfabeto
     * @param alfabetoPila
     * @param pilaAutomata
     * @param cadenaEntrada
     */
    AP(SetEstados conjuntoEstados, set<string> alfabeto, set<string> alfabetoPila, stack<string> pilaAutomata,
       string cadenaEntrada);
    /**
     * @brief Constructor de copia.
     * @param cp
     */
    AP(const AP &cp);
    /**
     * @brief Destructor por defecto.
     */
    virtual ~AP();
    /**
     * @brief Funcion encargada de leer el fichero de entrada.
     * @param nombreFichero
     */
    void leerFichero(string nombreFichero);
    /**
     * @brief Funcion que compara la cadenaEntrada_ con el alfabeto_.
     * @param cadena
     * @return
     */
    bool preAnalisis(string cadena);
    /**
     * @brief Funcion que realiza la traza de la cadenaEntrada_.
     * @return
     */
    bool analisis();
    /**
     * @brief Funcion que separa una string con varias palabras en un vector de string.
     * @param cadena
     * @return
     */
    vector<string> separarCadenas(string cadena);
    /**
     * @brief Funcion que guarda los estados leidos del fichero de entrada.
     * @param cadenas
     */
    void guardarEstados(vector<vector<string>> cadenas);
    /**
     * @brief Funcion que guarda el alfabeto que permite la cadenaEntrada_.
     * @param cadenas
     */
    void guardarAlfabeto(vector<string> cadenas);
    /**
     * @brief Funcion que guarda el alfabeto que permite la pilaAutomata_.
     * @param cadenas
     */
    void guardarAlfabetoPila(vector<string> cadenas);
    /**
     * @brief Funcion que guarda el estado inicial de la pilaAutomata_.
     * @param cadena
     */
    void guardarCabezaPila(string cadena);
    /**
     * @brief Funcion que guarda un conjunto de transiciones en un estado concreto.
     * @param id
     * @param Transiciones
     */
    void setTransicion(string id, SetTransiciones Transiciones);
    /**
     * @brief Funcion que devuelve el primer caracter de la cadenaEntrada_ en forma de string.
     * @return
     */
    string getCaracter();
    /**
     * @brief Getter conjuntoEstados_ no const.
     * @return
     */
    SetEstados &getConjuntoEstados();

    /**
     * @brief Getter pilaAutomata_ no const.
     * @return
     */
    stack<string> &getPilaAutomata();
    /**
     * @brief Getter conjuntoEstados_.
     * @return
     */
    const SetEstados getConjuntoEstados_() const;
    /**
     * @brief Setter conjuntoEstados_.
     * @param conjuntoEstados_
     */
    void setConjuntoEstados_(const SetEstados &conjuntoEstados_);
    /**
     * @brief Getter alfabeto_.
     * @return
     */
    const set<string> &getAlfabeto_() const;
    /**
     * @brief Setter alfabeto_.
     * @param alfabeto_
     */
    void setAlfabeto_(const set<string> &alfabeto_);
    /**
     * @brief Getter alfabetoPila_.
     * @return
     */
    const set<string> &getAlfabetoPila_() const;
    /**
     * @brief Setter alfabetoPila_.
     * @param alfabetoPila_
     */
    void setAlfabetoPila_(const set<string> &alfabetoPila_);
    /**
     * @brief Getter pilaAutomata_.
     * @return
     */
    const stack<string> &getPilaAutomata_() const;
    /**
     * @brief Setter pilaAutomata_.
     * @param pilaAutomata_
     */
    void setPilaAutomata_(const stack<string> &pilaAutomata_);
    /**
     * @brief Getter cadenaEntrada_.
     * @return
     */
    const string &getCadenaEntrada_() const;
    /**
     * @brief Setter cadenaEntrada_.
     * @param cadenaEntrada_
     */
    void setCadenaEntrada_(const string &cadenaEntrada_);
    /**
     * @brief Sobrecarga operador =.
     * @param cp
     * @return
     */
    AP &operator=(const AP &cp);
    /**
     * @brief Sobrecarga operador <<.
     * @param out
     * @param cp
     * @return
     */
    friend ostream &operator<<(ostream &out, const AP &cp);
};


#endif //AP_AP_H
