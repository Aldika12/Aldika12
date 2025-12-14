#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    int data[11] = {12, 17, 10, 5, 15, 25, 11, 7, 25,16, 19};

    vector<int> myVector(data, data + 11);
    auto cetakVector = [](const vector<int> vec, const string& judul)
    {
        cout<<judul<<endl;
        for (int val : vec)
        {
            cout<<val<< " | ";
        }
        cout<<"\n====================================================\n\n";
    };
    cetakVector(myVector, "Isi vecor awal:");
    sort(myVector.begin(), myVector.end());
    cetakVector(myVector, "Isi vector setelah Sorting ASC: ");

    sort(myVector.begin(), myVector.end(), greater<int>());
    cetakVector(myVector, "Isi vector setelah Sorting DESC: ");
}