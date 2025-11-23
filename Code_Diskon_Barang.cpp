#include <iostream>
#include <ctime>
using namespace std;

int main() {
    system ("cls");
    while (true) {
        double harga, diskon, harga_akhir;
        system("color 00");

        cout<<"=== Program Hitung Diskon Barang ==="<<endl;
        cout<<"Masukkan harga barang (RP): ";
        cin>> harga;
        
        cout<<"Masukkan diskon (%): ";
        cin>> diskon;

        cout<<"\nHarga diskon adalah (RP): " << harga * (diskon / 100) <<endl;
        cout<<"Harga akhir setelah diskon adalah (RP): " << harga - (harga * (diskon / 100))<<endl;
        cout<<endl;
    }
}