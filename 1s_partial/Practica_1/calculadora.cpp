#include <iostream>

using namespace std;

// Función que suma dos números
double add(double a, double b) {
    return a + b; // Retorna la suma de a y b
}

// Función que resta el segundo número del primero
double subtract(double a, double b) {
    return a - b; // Retorna la resta de a menos b
}

// Función que multiplica dos números
double multiply(double a, double b) {
    return a * b; // Retorna el producto de a y b
}

// Función que divide el primer número entre el segundo
double divide(double a, double b) {
    if (b == 0) { // Verifica si el divisor es cero
        throw invalid_argument("Error: División por cero"); // Lanza excepción si es cero
    }
    return a / b; // Retorna el cociente de a entre b
}

int main() {
    double num1, num2; // Variables para almacenar los números
    char operation; // Variable para almacenar la operación

    cout << "Calculadora simple" << endl;
    cout << "Introduce dos números: ";
    cin >> num1 >> num2; // Solicita los números al usuario

    cout << "Introduce la operación (+, -, *, /): ";
    cin >> operation; // Solicita la operación al usuario

    try {
        double result; // Variable para almacenar el resultado
        // Estructura de control para determinar la operación
        switch (operation) {
            case '+':
                result = add(num1, num2); // Suma
                break;
            case '-':
                result = subtract(num1, num2); // Resta
                break;
            case '*':
                result = multiply(num1, num2); // Multiplicación
                break;
            case '/':
                result = divide(num1, num2); // División
                break;
            default:
                cout << "Operación no válida" << endl; // Maneja operaciones no válidas
                return 1; // Termina el programa
        }
        cout << "El resultado es: " << result << endl; // Muestra el resultado
    } catch (const exception& e) {
        cout << e.what() << endl; // Captura y muestra excepciones
    }

    return 0; // Finaliza el programa
}
