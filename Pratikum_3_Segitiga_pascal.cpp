#include <iostream>
#include <ctime>
#include "testtt.h"
using namespace std;

int delay(int waktu) {
    clock_t tunggu;
    tunggu = clock() + (waktu) * CLOCKS_PER_SEC;
    while (clock() < tunggu);
}

int main() {
    system("cls");
    system("color 0A");
    int n;

    cout<<"===== Segitiga Pascal ====="<<endl;
    cout<<"Input First: ";
    cin>>n;
    
    for(int t=5; t>=1; t--){
        system("cls");
        cout<<"dalam hitungan... "<<t;
        delay(1);
    }

    if (n <= 3) {
        cout<<"\n";
        cout << "Nilai harus lebih dari 3" << endl;
        return 2;
    }
    cout<<endl;

    for(int i=0; i<n; i++){
        
        for(int j=0; j<n-i; j++){
            cout<<" ";
        }

        int angka_pinggir = 1;
        for(int k=0; k<=i; k++){
            cout<< angka_pinggir << " ";
            
            angka_pinggir = angka_pinggir * (i - k) / (k + 1);
        }
        cout<<endl;
    }
}
int NewFunction()
{

    return 0;
}
