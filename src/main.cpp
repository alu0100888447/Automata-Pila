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
    cadena.clear();
    do {
        cout << "0.- Salir" << endl;
        cout << "1.- Analizar Cadena" << endl;
        cout << "-> ";
        cin >> a;
        if(a == 1) {
            cout << "\x1B[2J\x1B[H";
            cout << "* Introduzca la cadena a analizar: ";
            cin >> cadena;
            if(Automata.preAnalisis(cadena))
                Automata.analisisCadena();
            else
                cout << "\n\t\t\033[1;31m[!La cadena introducida contiene caracteres no reconocibles por el automata.]\033[0m\n" << endl;
        }
    } while (a != 0);
    return 0;
}