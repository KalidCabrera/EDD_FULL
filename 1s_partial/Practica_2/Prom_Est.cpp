#include <iostream>
#include <string>

using namespace std;

int main() {
    // Declaración de variables
    int edad; // Tipo entero para la edad
    char inicial; // Tipo carácter para la inicial del nombre
    float promedio; // Tipo real para el promedio de calificaciones
    bool esEstudiante; // Tipo booleano para indicar si es estudiante

    // Solicitar información al usuario
    cout << "Ingrese su edad: ";
    cin >> edad;

    cout << "Ingrese la inicial de su nombre: ";
    cin >> inicial;

    cout << "Ingrese su promedio de calificaciones: ";
    cin >> promedio;

    cout << "¿Es usted estudiante? (1 para sí, 0 para no): ";
    cin >> esEstudiante;

    // Mostrar la información ingresada
    cout << "\n--- Información del Estudiante ---" << endl;
    cout << "Edad: " << edad << " años" << endl;
    cout << "Inicial del nombre: " << inicial << endl;
    cout << "Promedio de calificaciones: " << promedio << endl;
    cout << "Es estudiante: " << (esEstudiante ? "Sí" : "No") << endl;

    return 0; // Fin del programa
}