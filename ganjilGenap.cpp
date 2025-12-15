#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
   int n;

   cout<<"Masukan bilangan: ";
   cin>>n;

   if (n % 2 == 0) {
    cout<<"angka ini adalah genap"<<endl;
   } 
   else {
    cout<<"angka ini adalah ganjil"<<endl;
   }

   if (n>10) {
    cout<<"Bilangan ini di atas 10";
   }
   else (n<=10); {
    cout<<"Bilangan ini di bawah ";
   }

}