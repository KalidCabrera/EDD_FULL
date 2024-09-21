#include <iostream>
#include <stdexcept>

using namespace std;

class Cola {
private:
    int* elementos;   // Puntero al array dinámico que almacena los elementos
    int capacidad;    // Capacidad máxima de la cola
    int frente;       // Índice del primer elemento
    int final;        // Índice del último elemento
    int cantidad;     // Cantidad actual de elementos en la cola

public:
    // Constructor
    Cola(int cap) : capacidad(cap), frente(0), final(0), cantidad(0) {
        elementos = new int[cap]; // Inicializa el array dinámico
    }

    // Destructor
    ~Cola() {
        delete[] elementos; // Libera la memoria del array
    }

    // Método para encolar un elemento
    void encolar(int valor) {
        if (cantidad >= capacidad) {
            throw overflow_error("No se puede encolar más elementos, capacidad alcanzada.");
        }
        elementos[final] = valor; // Agrega el valor al final
        final = (final + 1) % capacidad; // Mueve el índice final circularmente
        cantidad++; // Aumenta la cantidad de elementos
    }

    // Método para desencolar un elemento
    int desencolar() {
        if (cantidad <= 0) {
            throw underflow_error("No hay elementos en la cola para desencolar.");
        }
        int valor = elementos[frente]; // Obtiene el valor del frente
        frente = (frente + 1) % capacidad; // Mueve el índice frente circularmente
        cantidad--; // Disminuye la cantidad de elementos
        return valor; // Devuelve el valor desencolado
    }

    // Método para mostrar el contenido de la cola
    void mostrar() const {
        cout << "Elementos en la cola: ";
        for (int i = 0; i < cantidad; i++) {
            cout << elementos[(frente + i) % capacidad] << " "; // Imprime cada elemento
        }
        cout << endl;
    }
};

int main() {
    Cola cola(5); // Crea un objeto Cola con capacidad 5

    // Encolar elementos en la cola
    cola.encolar(10);
    cola.encolar(20);
    cola.encolar(30);

    // Mostrar elementos en la cola
    cola.mostrar();

    // Desencolar un elemento
    cout << "Elemento desencolado: " << cola.desencolar() << endl;

    // Mostrar elementos después de desencolar
    cola.mostrar();

    return 0; // Fin del programa
}