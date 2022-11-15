// Your First C++ Program

#include <iostream>
//


using namespace std;

// tugas 2 flowchart, tugas 2 console app c++

// tugas aplikasi untuk keliling & luas segitiga dan jajar genjang

// Rumus Keliling dan Luas Segitiga Sama Kaki = 1/2 * alas * tinggi 

// Rumus Keliling dan Luas Jajar Genjang = a x t



int main() {

    // sintetik
    int sisi, luas, keliling, alas, tinggi;

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