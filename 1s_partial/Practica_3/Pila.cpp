#include <iostream>
#include <stdexcept>

using namespace std;

class Pila {
private:
    int* elementos;   // Puntero al array dinámico que almacena los elementos
    int capacidad;    // Capacidad máxima de la pila
    int cantidad;     // Cantidad actual de elementos en la pila

public:
    // Constructor
    Pila(int cap) : capacidad(cap), cantidad(0) {
        elementos = new int[cap]; // Inicializa el array dinámico
    }

    // Destructor
    ~Pila() {
        delete[] elementos; // Libera la memoria del array
    }

    // Método para apilar un elemento
    void apilar(int valor) {
        if (cantidad >= capacidad) {
            throw overflow_error("No se puede apilar más elementos, capacidad alcanzada.");
        }
        elementos[cantidad++] = valor; // Agrega el valor y aumenta la cantidad
    }

    // Método para desapilar un elemento
    int desapilar() {
        if (cantidad <= 0) {
            throw underflow_error("No hay elementos en la pila para desapilar.");
        }
        return elementos[--cantidad]; // Disminuye la cantidad y devuelve el elemento desapilado
    }

    // Método para mostrar el contenido de la pila
    void mostrar() const {
        cout << "Elementos en la pila: ";
        for (int i = 0; i < cantidad; i++) {
            cout << elementos[i] << " "; // Imprime cada elemento
        }
        cout << endl;
    }
};

int main() {
    Pila pila(5); // Crea un objeto Pila con capacidad 5

    // Apilar elementos en la pila
    pila.apilar(10);
    pila.apilar(20);
    pila.apilar(30);

    // Mostrar elementos en la pila
    pila.mostrar();

    // Desapilar un elemento
    cout << "Elemento desapilado: " << pila.desapilar() << endl;

    // Mostrar elementos después de desapilar
    pila.mostrar();

    return 0; // Fin del programa
}
