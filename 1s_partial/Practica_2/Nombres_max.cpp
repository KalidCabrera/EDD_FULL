#include <iostream>
#include <string>

using namespace std;

int main() {
    const int MAX_NOMBRES = 5; // Máximo número de nombres
    string nombres[MAX_NOMBRES]; // Arreglo para almacenar los nombres
    int cantidad; // Variable para almacenar la cantidad de nombres ingresados

    // Solicitar la cantidad de nombres
    cout << "¿Cuántos nombres desea ingresar (máximo " << MAX_NOMBRES << ")? ";
    cin >> cantidad;

    // Verificar que la cantidad no exceda el máximo permitido
    if (cantidad > MAX_NOMBRES) {
        cout << "Error: El número máximo de nombres es " << MAX_NOMBRES << endl;
        return 1; // Terminar el programa con error
    }

    // Solicitar los nombres
    for (int i = 0; i < cantidad; i++) {
        cout << "Ingrese el nombre " << (i + 1) << ": ";
        cin >> nombres[i];
    }

    // Mostrar los nombres ingresados
    cout << "\n--- Nombres Ingresados ---" << endl;
    for (int i = 0; i < cantidad; i++) {
        cout << "Nombre " << (i + 1) << ": " << nombres[i] << endl;
    }

    return 0; // Fin del programa
}
