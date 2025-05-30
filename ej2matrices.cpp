/*
2: Transponer una matriz
Haz un programa que tome una matriz de 2x3, cree su transpuesta (3x2) y muestre ambas matrices.
*/

#include <iostream>
using namespace std;

int main() {

    int mat[2][3] = {
        {2, 4, 3},
        {4, 5, 6}
    };

    int matTranspuesta[3][2];

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            matTranspuesta[j][i] = mat[i][j];
        }
    }

    cout << "Matriz inicial 2x3" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Matriz transpuesta 3x2:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            cout << matTranspuesta[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}