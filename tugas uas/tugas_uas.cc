#include <iostream>

using namespace std;

struct node{
    int data;
    struct node *next;
};

int main()
{
    int pINT;
    cout << "========================================\n";
    cout << "\t\tToko ATK\t\t\n";
    cout << "========================================\n";
    cout << "Daftar Barang\n";
    cout << "1. Daftar Nama\n"
         << "2. Tambah Barang\n"
         << "3. Hapus Barang\n"
         << "4. Cari Barang\n"
         << "5. Transaksi\n"
         << "6. Keluar\n";

    cin >> pINT;

    switch (pINT)
    {
    case 1:
        cout << "================= Daftar Barang ===================\n";
        break;
    case 2:
        cout << "================= Tambah Barang ===================\n";
        break;
    case 3:
        cout << "================= Hapus Barang ===================\n";
        break;
    case 4:
        cout << "================= Cari Barang ===================\n";
        break;
    case 5:
        cout << "================= Transaksi ===================\n";
        break;
    case 6:
        cout << "Tekan enter 2 kali untuk keluar\n";
        break;

    default:
        break;
    }
};