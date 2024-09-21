#include <iostream>
#include <stdexcept>

using namespace std;

class ArrayManager {
private:
    int* array;       // Puntero al array dinámico
    int capacidad;    // Capacidad del array
    int cantidad;     // Cantidad de elementos actuales

public:
    // Constructor
    ArrayManager(int cap) : capacidad(cap), cantidad(0) {
        array = new int[cap]; // Inicializa el array dinámico
    }

    // Destructor
    ~ArrayManager() {
        delete[] array; // Libera la memoria del array
    }

    // Método para agregar un elemento
    void agregar(int valor) {
        if (cantidad >= capacidad) {
            throw overflow_error("No se puede agregar más elementos, capacidad alcanzada.");
        }
        array[cantidad++] = valor; // Agrega el valor y aumenta la cantidad
    }

    // Método para eliminar un elemento en una posición específica
    void eliminar(int posicion) {
        if (posicion < 0 || posicion >= cantidad) {
            throw out_of_range("Posición inválida.");
        }
        for (int i = posicion; i < cantidad - 1; i++) {
            array[i] = array[i + 1]; // Desplaza los elementos
        }
        cantidad--; // Reduce la cantidad de elementos
    }

    // Método para mostrar todos los elementos
    void mostrar() const {
        cout << "Elementos en el array: ";
        for (int i = 0; i < cantidad; i++) {
            cout << array[i] << " "; // Imprime cada elemento
        }
        cout << endl;
    }
};

int main() {
    ArrayManager manager(5); // Crea un objeto ArrayManager con capacidad 5

    // Agregar elementos al array
    manager.agregar(10);
    manager.agregar(20);
    manager.agregar(30);

    // Mostrar elementos
    manager.mostrar();

    // Eliminar un elemento
    manager.eliminar(1); // Elimina el elemento en la posición 1

    // Mostrar elementos después de eliminar
    manager.mostrar();

    return 0; // Fin del programa
}
