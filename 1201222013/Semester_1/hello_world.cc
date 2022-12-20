#include <iostream>

using namespace std;

void menuUtama(void);
void materi1HelloWorld(void);
void materi2InputSederhana(void);
void clrScr(void);
void kembali(void);

int opsiInt, jumlah;
string opsiString;

int main()
{
 menuUtama();
}

void clrScr() {system("cls");}

void keluar() {system("exit");}

void kembali()
{
    cout << "Ingin kembali ke menu utama?\n";

    cin >> opsiInt ;
    clrScr();

    (opsiInt == 0) ? menuUtama() : keluar();
}

void menuUtama()
{
    cout << "Halo mama";


    cin >> opsiInt;

    switch (opsiInt)
    {
    case 1:
        clrScr();
        break;
    
    default:
        break;
    }
}

void materi1HelloWorld()
{
    cout << "Halo mama";
}