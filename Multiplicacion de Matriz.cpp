#include <iostream>
using namespace std;
// Christian Uriel Gonzalez Flores Matricula: 362423170
int main() {
    int n;
    
    cout << "MULTIPLICADOR DE MATRICES CUADRADAS NxN\n";
    cout << "Ingrese la dimension (N) de las matrices: ";
    cin >> n;
    
    // Validar entrada
    if(n <= 0) {
        cout << "Error: La dimension debe ser un numero positivo.";
        return 1;
    }
    
    // Crear las matrices
    int A[10][10], B[10][10], C[10][10] = {0}; // Tamaño máximo 10x10
    
    if(n > 10) {
        cout << "Error: El programa soporta matrices hasta 10x10.";
        return 1;
    }
    
    // Leer matriz A
    cout << "\nIngrese los elementos de la matriz A:\n";
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << "A[" << i+1 << "][" << j+1 << "]: ";
            cin >> A[i][j];
        }
    }
    
    // Leer matriz B
    cout << "\nIngrese los elementos de la matriz B:\n";
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << "B[" << i+1 << "][" << j+1 << "]: ";
            cin >> B[i][j];
        }
    }
    
    // Multiplicar matrices
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            C[i][j] = 0;
            for(int k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    
    // Mostrar resultado
    cout << "\nMatriz Resultante C = A x B:\n";
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << C[i][j] << "\t";
        }
        cout << "\n";
    }
    
    return 0;
}
