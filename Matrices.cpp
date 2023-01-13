// ConsoleApplication35.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;
int main()
{
    int matriz[3][3] = { {1,2,3},
                         {4,5,6},
                         {7,8,9} };
    int suma;
    for (int i = 0; i < 3; i++) {
        suma = 0;
        for (int j = 0; j < 3; j++) {
            std::cout << matriz[i][j] << " ";
        }
        cout << endl;

    }
    cout << "suma de filas" << endl;
    for (int i = 0; i < 3; i++) {
        suma = 0;
        for (int j = 0; j < 3; j++) {
            suma += matriz[i][j];
        }
        std::cout << "filas  " << i << ": " << suma << endl;
    }
    cout << endl;
    cout << "suma de columnas " << endl;
    for (int i = 0; i < 3; i++) {
        suma = 0;
        for (int j = 0; j < 3; j++) {
            suma += matriz[j][i];
        }
        std::cout << "columnas  " << i << ": " << suma << endl;
    }
    cout << "\ndiagonal principal " << endl;
    for (int i = 0; i < 3; i++) {
        suma = 0;
        for (int j = 0; j < 3; j++) {
            if (i == j)cout << matriz[i][j] << " ";
        }

    }
    cout << endl;
    cout << "diagonal secudaria " << endl;
    for (int i = 0; i < 3; i++) {
        suma = 0;
        for (int j = 0; j < 3; j++) {
            if (i + j == sizeof(matriz) / sizeof(matriz[0]) - 1)cout << matriz[i][j] << " ";
        }

    }
    return 0;
}

