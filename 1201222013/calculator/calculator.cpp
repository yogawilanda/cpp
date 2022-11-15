#include <iostream>

using namespace std;

void kalkulasi() {
    int angka1;
    int angka2;
    char pilihan;

    cin >> pilihan;

    switch (pilihan)
    {
    case '+':
        cout << "Kalkulasi Penjumlahan (angka pertama) [spasi] (angka kedua)"<< endl; 
        cin >> angka1 >> angka2;
        cout << "Hasilnya "<< angka1 + angka2;
        break;
    
    case '-':
        cout << "Kalkulasi Pengurangan (angka pertama) [spasi] (angka kedua)"<< endl; 
        cin >> angka1 >> angka2;
        cout << "Hasilnya "<< angka1 - angka2;
        break;
    
    case '/':
        cout << "Kalkulasi Pembagian (angka pertama) [spasi] (angka kedua)"<< endl; 
        cin >> angka1 >> angka2;
        cout << "Hasilnya "<< angka1 / angka2;
        break;
    
    case '*':
        cout << "Kalkulasi Perkalian (angka pertama) [spasi] (angka kedua)"<< endl; 
        cin >> angka1 >> angka2;
        cout << "Hasilnya "<< angka1 * angka2;
        break;
    
    default:
        cout<< "Anda tidak memberikan pilihan aritmatik :(" << endl;
        break;
    }

}

int main() {
    string outJudul = "Kalkulator C++ Sederhana";
    string outJumlah = "1. Ketik + untuk Pertambahan";
    string outKurang = "2. Ketik - untuk Pengurangan";
    string outKali = "3. Ketik * untuk Perkalian";
    string outBagi = "4. Ketik / untuk Pembagian";
    string outPilihan = "----Masukan Pilihan Anda----";

    cout <<  outJudul << endl;
    cout << outJumlah  << endl;
    cout << outKurang  << endl;
    cout << outBagi << endl;
    cout << outKali << endl;
    
    cout << outPilihan << endl;
    kalkulasi();

    return 0;
   
}