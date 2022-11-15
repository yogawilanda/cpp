#include <iostream>
#include <string>

using namespace std;

int main() {
   // sintetik
    float sisi, luas, keliling, alas, tinggi;

    // perhitungan 

    cout<<"Perhitungan Segitiga Sama Kaki (Luas dan keliling)"<<endl;
    cout<<endl;
    
    cout<<"masukan alas : ";
    cin>>alas;
    cout<<"hasil alas adalah : " << alas << endl;

    cout<<"masukan tinggi : ";
    cin>>tinggi;

    cout<<"hasil tinggi adalah : " << tinggi << endl;
    cout<<"masukan sisi : ";
    cin>>sisi;

    cout<<"hasil sisi adalah : " << sisi << endl;

    // perhitungan 
    luas = alas * tinggi / 2;
    keliling = alas * 2 + tinggi;

    cout<<"Maka, keliling Segitiganya adalah : " << keliling << endl;

    cout<<"Maka, luas Segitiganya adalah : "<< luas << endl;

    
    return 0;


}