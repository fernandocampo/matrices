/*
Ejercicio 1: Suma de diagonal
Crea un programa que tenga una matriz cuadrada de 3x3, calcule la suma de la diagonal principal.Ejercicio 
*/

#include <iostream>
using namespace std;

int main() {
    int mat[3][3] = {
        {2, 4, 3},
        {4, 5, 6},
        {1, 3, 5}
    };

    int sumaDiagonal = 0;

    for (int i = 0; i < 3; i++) {
        sumaDiagonal += mat[i][i];
    }

    cout << "Suma de la diagonal ppal es " << sumaDiagonal << endl;

    return 0;
}
