#include <iostream>

using namespace std;

// structure /struct
struct Buah
{
    string nama;
    string rasa;
    int jumlah;
};

int main()
{

    Buah buah;
    Buah buah2;
    buah.nama = "Anggur";
    buah.rasa = "Dondong";
    buah.jumlah = 4;

    cout << "\n\nHasil struct yang telah di deklarasi: \n\n";
    cout << "Nama Buah: " << buah.nama << endl
         << "Rasa Buah: " << buah.rasa << endl
         << "Total Buah: " << buah.jumlah;

    cout << "\n\nTambahkan Buah\nNama Buah:\n";
    cin >> buah2.nama;
    cout << "Rasa Buah:\n";
    cin >> buah2.rasa;
    cout << "Jumlah Buah Yang Dimiliki:\n";
    cin >> buah2.jumlah;
    cout << "\n\nHasil Struct dari Inputan: \n\n";
    cout << "Nama Buah: " << buah2.nama << endl
         << "Rasa Buah: " << buah2.rasa << endl
         << "Total Buah: " << buah2.jumlah;
    return 1;
}