#include <iostream>
#include <string>

using namespace std;

class Estudiante {   
    public:
        string nombre;
        float notaFinal;
        Estudiante* siguiente;

    Estudiante(string nom, float nota) {  //Constructor
        nombre = nom;
        notaFinal = nota;
        siguiente = nullptr;
    }

    void imprimir(){
        cout << "Nombre del Estudiante:" << nombre << " | Nota Final: " << notaFinal << endl;
    }
};

class listaEnlazada {  // Lista enlazada de Estudiantes
    private:
        Estudiante* head;

        float sumaNotasRecursiva(Estudiante* actual, int& contador){
            if(actual == nullptr){
                return 0;
            }
            contador++;
            return actual->notaFinal + sumaNotasRecursiva(actual->siguiente, contador);
        
        }

};
    public:
        listaEnlazada() {
            head = nullptr;
        }