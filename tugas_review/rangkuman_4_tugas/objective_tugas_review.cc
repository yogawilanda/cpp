// Tugas :
// 1.  Absensi (Bahasa C)
// Bahasa C++ :
// 1. Kalkukator
// todo: 2. Aplikasi Hitung Segitiga
// 3. Perulangan DO WHILE
// 4. Calculator Dengan FUNGSI
// todo: 5. Sorting Dari Kecil Ke Besar
// todo: 6. Array Aplikasi Penerbangan
// todo: 7. Stack And Queue Buat Antrian
// todo: 8. Kalkulator Dengan POINTER
// todo: 9. Struct Dengan Queue

#include <iostream>

using namespace std;


// OOP, supaya function bisa dipanggil dimanapun posisinya
int kalkulasi();
int doWhile();
int perhitunganSegitiga();
void kalkulatorDenganFungsi();
void tambah(int a, int b);
void kurang(int a, int b);
void bagi(int a, int b);
void kali(int a, int b);

char ulang;

int main()
{
    system("cls");
    int pilihanBesar;

    cout << "Tugas Algoritma Pemrograman\n Pengumpulan seluruh tugas\nAll In One\n";
    cout << "Nama: E A Yoga Wilanda\nNIM : 1201222013\nJurusan: Rekayasa Perangkat Lunak";
    cout << "\n\n\n\n";
    cout << "Daftar Rangkuman Aplikasi Berdasarkan Tugas\n";

    cout << "\n~~~~~~~~~ MENU ~~~~~~~~~~~\n";
    cout << "\nPilih menu yang tersedia menggunakan angka yang tertera\n";
    cout << "\n1. Kalkulator\n2. Aplikasi Hitung Segitiga\n3. Perulangan DO WHILE\n4. Calculator Dengan FUNGSI\n";
    cout << "5. Sorting Dari Kecil Ke Besar\n6. Array Aplikasi Penerbangan\n";
    cout << "7. Stack And Queue Buat Antrian\n8. Kalkulator Dengan POINTER\n9. Aplikasi Struct dan Queue\n";

    cin >> pilihanBesar;
    system("cls");

    switch (pilihanBesar)
    {
    case 1:
        kalkulasi();
        break;

    case 2:
        perhitunganSegitiga();
        break;
    case 3:
        doWhile();
        break;
    case 4:
        kalkulatorDenganFungsi();
        break;
    case 5:
        doWhile();
        break;

    default:
        break;
    }
    while (ulang == 1)
    {
        /* code */
    }
}

int doWhile()
{
    cout << "=========== Aplikasi Do While ===============";
    cout << endl;

    cout << "Contoh do while (lakukan-selama)\nKetik 1 jika ingin berada di dalam menu ini\n2 jika ingin keluar\n";
    int a;
    do
    {
        cin >> a;
        cout << "Anda masih berada di dalam menu do while\n";
        cout << "Ketik 1 lagi jika ingin mengulang\nSelama tidak angka 1, maka akan keluar dari menu ini\n";
    } while (a == 1);
    cout << "Ingin Mengulang?";
    cin >> ulang;
    (ulang == 'y') ? kalkulasi() : main();
    return 1;
}

int kalkulasi()
{
    int angka1;
    int angka2;

    char pilihan;

    string outJudul = "Kalkulator C++ Sederhana";
    string outJumlah = "1. Ketik + untuk Pertambahan";
    string outKurang = "2. Ketik - untuk Pengurangan";
    string outKali = "3. Ketik * untuk Perkalian";
    string outBagi = "4. Ketik / untuk Pembagian";
    string outPilihan = "----Masukan Pilihan Anda----";

    cout << outJudul << endl;
    cout << outJumlah << endl;
    cout << outKurang << endl;
    cout << outBagi << endl;
    cout << outKali << endl;

    cout << outPilihan << endl;

    cin >> pilihan;

    switch (pilihan)
    {
    case '+':
        cout << "Kalkulasi Penjumlahan (angka pertama) [spasi] (angka kedua)" << endl;
        cin >> angka1 >> angka2;
        cout << "Hasilnya " << angka1 + angka2;
        break;

    case '-':
        cout << "Kalkulasi Pengurangan (angka pertama) [spasi] (angka kedua)" << endl;
        cin >> angka1 >> angka2;
        cout << "Hasilnya " << angka1 - angka2;
        break;

    case '/':
        cout << "Kalkulasi Pembagian (angka pertama) [spasi] (angka kedua)" << endl;
        cin >> angka1 >> angka2;
        cout << "Hasilnya " << angka1 / angka2;
        break;

    case '*':
        cout << "Kalkulasi Perkalian (angka pertama) [spasi] (angka kedua)" << endl;
        cin >> angka1 >> angka2;
        cout << "Hasilnya " << angka1 * angka2;
        break;

    default:
        cout << "Anda tidak memberikan pilihan aritmatik :(" << endl;
        break;
    }

    cout << "Ingin Mengulang?";
    cin >> ulang;
    (ulang == 'y') ? kalkulasi() : main();
    return 1;
}

int perhitunganSegitiga()
{
    return 1;
};

//Scope Kalkulator Perhitungan Dengan Function
void tambah(int a, int b)
{
    cout << "Kalkulasi Penjumlahan (angka pertama) [spasi] (angka kedua)" << endl;
    cin >> a >> b;
    cout << "Hasilnya " << a + b;
}

void kurang(int a, int b)
{
    cout << "Kalkulasi Pengurangan (angka pertama) [spasi] (angka kedua)" << endl;
    cin >> a >> b;
    cout << "Hasilnya " << a - b;
}

void bagi(int a, int b)
{
    cout << "Kalkulasi Pembagian (angka pertama) [spasi] (angka kedua)" << endl;
    cin >> a >> b;
    cout << "Hasilnya " << a / b;
}

void kali(int a, int b)
{
    cout << "Kalkulasi Perkalian (angka pertama) [spasi] (angka kedua)" << endl;
    cin >> a >> b;
    cout << "Hasilnya " << a * b;
}

void kalkulatorDenganFungsi()
{
    int angka1;
    int angka2;

    char pilihan;
    string outJudul = "Kalkulator C++ Dengan Fungsi";
    string outJumlah = "1. Ketik + untuk Pertambahan";
    string outKurang = "2. Ketik - untuk Pengurangan";
    string outKali = "3. Ketik * untuk Perkalian";
    string outBagi = "4. Ketik / untuk Pembagian";
    string outPilihan = "----Masukan Pilihan Anda----";

    cout << outJudul << endl;
    cout << outJumlah << endl;
    cout << outKurang << endl;
    cout << outBagi << endl;
    cout << outKali << endl;

    cout << outPilihan << endl;

    cin >> pilihan;

    switch (pilihan)
    {
    case '+':
        tambah(angka1, angka2);
        break;

    case '-':
        kurang(angka1, angka2);
        break;

    case '/':
        bagi(angka1, angka2);
        break;

    case '*':
        kali(angka1, angka2);
        break;

    default:
        cout << "Anda tidak memberikan pilihan aritmatik :(" << endl;
        break;
    }
}