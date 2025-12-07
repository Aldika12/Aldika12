#include <iostream>
using namespace std;

int main() {
    // Warna Hijau
    cout << "\033[32m";

    // Identitas
    cout << "Nama : Aldika Fahreza\n";
    cout << "NIM : 25104410085\n";
    cout << "Prodi : Teknik Informatika 5B\n";
    cout << "Tugas Praktikum 4\n\n";

    cout << "---- Program Perkalian Matriks 4x4 ----\n";

    // Matriks A
    int A[4][4] = {
        {1, 2, 0, 0},
        {0, 0, 2, 1},
        {2, 1, 0, 0},
        {0, 2, 0, 1}
    };

    // Matriks B
    int B[4][4] = {
        {1, 1, 1, 1},
        {1, 1, 1, 1},
        {2, 2, 2, 2},
        {2, 2, 2, 2}
    };

    int C[4][4];

    // Perkalian Matriks C = A x B
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            C[i][j] = 0;
            for(int k = 0; k < 4; k++){
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Cetak Matriks A
    cout << "Matriks A:\n";
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    // Cetak Matriks B
    cout << "Matriks B:\n";
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            cout << B[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    cout << "==============================================\n";
    cout << "Matriks Hasil Perkalian (A x B):\n";

    // Cetak Matriks C
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\nPress any key to close this window . . .\n";

    return 0;
}
