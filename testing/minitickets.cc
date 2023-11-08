#include <iostream>

using namespace std;

int hargaJadwalSBYJKT = 40;
int hargaJadwalSUBCGK = 80;
int hargaJadwalSUBDPS = 120;

int hargaJadwalCGKHLP = 60;
int hargaJadwalHLPSUB = 90;
int hargaJadwalCGKSUB = 150;

int hargaJadwalBLJKT = 120;
int hargaJadwalBLJKT2 = 200;
int hargaJadwalBLJKT3 = 100;

int main()
{
    char opsiAwal;
    int jumlahBook;

    cout << "Pesan Tiket Online\n";

    cout << "A. Pesan Tiket Random\n";

    cin >> opsiAwal;

    switch (opsiAwal)

    {
    case 'A':
        cout << "Pesan Tiket Ringkas\nMasukkan Jumlah Book";

        cin >> jumlahBook;

        if (jumlahBook > 1)
        {
            int diskon = hargaJadwalBLJKT * 0.8;
            cout << "Harga  diskon totalnya" << jumlahBook * diskon;
        }
        else
        {
            cout << "Harga Normal totalnya" << hargaJadwalBLJKT * jumlahBook;
        };

    default:
        break;
    }
}