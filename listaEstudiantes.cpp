#include <iostream>
#include <string>

using namespace std;

class Estudiante {
    public:
        string nombre;
        float notaFinal;
        Estudiante* siguiente;

    Estudiante(string nom, float nota) {
        nombre = nom;
        notaFinal = nota;
        siguiente = nullptr;
    }

    void imprimir(){
        cout << "Nombre del Estudiante:" << nombre << " | Nota Final: " << notaFinal << endl;
    }
};