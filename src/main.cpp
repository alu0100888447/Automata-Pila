#include "../include/AP.h"

int main(int argc, char const *argv[]) {
    string cadena;
    AP Automata;
    if(argc == 2)
        Automata.leerFichero(argv[1]);
    else {
        cout << "* Introduzca el nombre del fichero con al AP: ";
        cin >> cadena;
        Automata.leerFichero(cadena);
    }
    int a = 0;
    do {
        cadena.clear();
        //cout << "\x1B[2J\x1B[H";
        cout << "0.- Salir" << endl;
        cout << "1.- Analizar Cadena" << endl;
        cout << "-> ";
        cin >> a;
        if(a == 1) {
            //cout << "\x1B[2J\x1B[H";
            cout << "* Introduzca la cadena a analizar: ";
            cin >> cadena;
            cout << endl;
            if(Automata.preAnalisis(cadena)) {
                if (Automata.recorrido()) {
                    cout << "\n\t\t\033[1;32m| La cadena introducida es aceptada por el automata. |\033[0m\n" << endl;
                }
                else {
                    cout << "\n\t\t\033[1;31m| La cadena introducida no es aceptada por el automata. |\033[0m\n" << endl;
                }
            }
            else
                cout << "\n\t\t\033[1;31m[!La cadena introducida contiene caracteres no reconocibles por el automata.]\033[0m\n" << endl;
        }
    } while (a != 0);
    return 0;
}