#include <iostream>

using namespace std;

int main() {
    int tamano; // Variable para almacenar el tamaño del arreglo
    cout << "Ingrese el número de elementos: ";
    cin >> tamano; // El usuario ingresa el tamaño del arreglo

    // Asignación dinámica de memoria para el arreglo
    int* numeros = new int[tamano]; // Crea un arreglo de enteros

    // Ingreso de datos
    cout << "Ingrese " << tamano << " números enteros:" << endl;
    for (int i = 0; i < tamano; i++) {
        cout << "Número " << (i + 1) << ": ";
        cin >> numeros[i]; // Almacena cada número en el arreglo
    }

    // Mostrar los números ingresados
    cout << "Los números ingresados son:" << endl;
    for (int i = 0; i < tamano; i++) {
        cout << numeros[i] << " "; // Imprime cada número del arreglo
    }
    cout << endl;

    // Liberar la memoria dinámica
    delete[] numeros; // Libera la memoria asignada al arreglo

    return 0; // Fin del programa
}
