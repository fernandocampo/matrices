/*
Ejercicio 3: Suma de filas y columnas
Escribe un programa que calcule la suma de cada fila y cada columna de una matriz de 3x4, y muestre los resultados.
*/

#include <iostream>
using namespace std;

int main() {
    int mat[3][4] = {
        {2, 4, 3, 4},
        {4, 5, 6, 2},
        {1, 4, 3, 1}
    };

    // Suma de filas
    for (int i = 0; i < 3; i++) {
        int sumaFila = 0;  // reiniciar suma de cada fila
        for (int j = 0; j < 4; j++) {
            sumaFila += mat[i][j];
        }
        cout << "La suma de la fila " << i + 1 << " es " << sumaFila << endl;
    }

    // Suma de columnas
    for (int j = 0; j < 4; j++) {
        int sumaColumna = 0;  // reiniciar suma de cada columna
        for (int i = 0; i < 3; i++) {
            sumaColumna += mat[i][j];
        }
        cout << "La suma de la columna " << j + 1 << " es " << sumaColumna << endl;
    }

    return 0;
}
