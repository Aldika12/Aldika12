#include <iostream>
#include <ctime>
using namespace std;

int main() {
    system ("cls");
    while (true) {
    double nilai;
    
    system("color 00");
    cout << "== Sistem Check Nilai KKM ==\n";
    cout << "Masukkan nilai: ";
    cin >> nilai;
    
    if (nilai >= 76 && nilai <= 100) {
        cout << "Selamat anda naik kelas" << endl;
        cout << "Selamat, Nilai anda dapat A\n" << endl;
    }
    if (nilai >= 101) {
        cout << "Nilai melebihi batas maksimal!!!" << endl;
        return 0;
    }
    else if (nilai <= 75 && nilai >= 61) {
        cout << "Selamat anda naik kelas" <<endl;
        cout << "Selamat, Nilai anda dapat B\n" << endl;
    }
    else if (nilai <= 60 && nilai >= 51) {
        cout << "Maaf anda harus mengerjakan remidi agar naik kelas" << endl;
        cout << "Selamat, Nilai anda dapat C\n" << endl;
    }
    else if (nilai <= 50 && nilai >= 41) {
        cout << "Maaf anda harus mengerjakan remidi agar naik kelas" << endl;
        cout << "Selamat, Nilai anda dapat D\n" << endl;
    }
    else if (nilai <= 40) {
        cout << "Maaf anda harus mengerjakan remidi agar naik kelas" <<endl;
        cout << "Selamat, Nilai anda dapat E\n" << endl;
    }
    
}
}