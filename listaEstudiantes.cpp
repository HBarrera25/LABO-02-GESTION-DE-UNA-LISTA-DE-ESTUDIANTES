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
    {
        public:
        listaEnlazada() {
            head = nullptr;
        }
        void agregarEstudiante(string nombre, float nota) {
        Estudiante* nuevo = new Estudiante(nombre, nota);

        if (head == nullptr) {
            head = nuevo;
        } else {
            Estudiante* temp = head;
            while (temp->siguiente != nullptr) {
                temp = temp->siguiente;
            }
            temp->siguiente = nuevo;
        }
    }

    // Imprimir lista
    void imprimirLista() {
        Estudiante* temp = head;
        cout << "\n--- Lista de Estudiantes ---\n";
        while (temp != nullptr) {
            temp->imprimir();
            temp = temp->siguiente;
        }
    }

    // Calcular promedio usando recursividad
    float calcularPromedioRecursivo() {
        int contador = 0;
        float suma = sumaNotasRecursiva(head, contador);

        if (contador == 0) {
            return 0;
        }
        return suma / contador;
    }
};
int main() {
    ListaEnlazada lista;

    lista.agregarEstudiante("Joaquin", 8.5);
    lista.agregarEstudiante("Matias", 7.8);
    lista.agregarEstudiante("El pepe", 9.2);

    lista.imprimirLista
