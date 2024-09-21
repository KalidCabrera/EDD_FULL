#include <iostream>

using namespace std;

int main() {
    const int TAMANO = 5; // Definimos el tamaño del arreglo como constante
    int numeros[TAMANO]; // Declaración de un arreglo de enteros de tamaño TAMANO

    // Ingreso de datos
    cout << "Ingrese " << TAMANO << " números enteros:" << endl;
    for (int i = 0; i < TAMANO; i++) {
        cout << "Número " << (i + 1) << ": ";
        cin >> numeros[i]; // Almacenamos cada número en el arreglo
    }

    // Mostrar los números ingresados
    cout << "Los números ingresados son:" << endl;
    for (int i = 0; i < TAMANO; i++) {
        cout << numeros[i] << " "; // Imprimimos cada número del arreglo
    }
    cout << endl;

    return 0; // Fin del programa
}
