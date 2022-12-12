// Tugas Array 3 Dimensi 6 Desember 2022

#include <iostream>

using namespace std;

string eco = "ekonomi",
       busy = "business",
       exe = "executive",
       grd = "Garuda Airline",
       lion = "Lion Air",
       cl = "City Link",
       jam1 = "12.00",
       jam2 = "13.00",
       jam3 = "15.00",
       jam4 = "17.00",
       home = "Menu Utama",
       pilihanMaskapai = "1. Garuda\n2. Lion\n3. Citylink\n",
       outPilihan = "Masukan nomor sesuai dengan pilihan\n";

string jenisMaskapai[] = {
    grd, lion, cl
};

string jamBerangkat[] = {
  jam1, jam2, jam3, jam4
};

int maskapai, kelas, jam, inputUser;

char inputUserChar;

int hargaTotal[3][3][4] = {
    {
        {111, 112, 113, 114},
        {121, 122, 123, 124},
        {131, 132, 133, 134},
    },
    {
        {211, 212, 213, 214},
        {221, 222, 223, 224},
        {231, 232, 233, 234},
    },
    {
        {311, 312, 313, 314},
        {321, 322, 323, 324},
        {331, 332, 333, 334},
    },

};


void testPrintArray(void);
void OutHalaman(void);
void inputPemesanan(void);
void JadwalPemesanan();
void menuUtama();
void PesanTiket();
void testPrintArraywithmin1(void);

int main()
{
    testPrintArraywithmin1();
    cout << "masukan jenis maskapai\n";
    cin >> inputUser;
    cout << jenisMaskapai[inputUser - 1] + "\n" + jamBerangkat[inputUser - 1];
};

void menuUtama()
{
    OutHalaman();

    cin >> inputUser;

    system("cls");

    switch (inputUser)
    {
    case 1:
        JadwalPemesanan();
        break;

    case 2:
        PesanTiket();
        break;

    case 0:
        main();
        break;

    default:
        break;
    }
}

int hargaGaruda[3][4] = {
    {150, 170, 120, 180},
    {200, 120, 210, 250},
    {750, 820, 120, 300},
};

int hargaCitilink[3][4] = {
    {150, 170, 120, 180},
    {200, 120, 210, 250},
    {750, 820, 120, 300},
};

int hargaLion[3][4] = {
    {150, 170, 120, 180},
    {200, 120, 210, 250},
    {750, 820, 120, 300},
};


void testPrintArraywithmin1()
{
    int i, j, k;

    // cin >> i >> j >> k;

    cout << "Price List Penerbangan Lengkapan" << endl;

    for ( i = 0; i < 3; i++)
    {
        // display out dari array maskapai
        cout << "Maskapai " << jenisMaskapai[i] << "\n";
        for ( j = 0; j < 3; j++)
        {
            for (k = 0; k < 4; k++)
            {
                
                cout << "[" << i + 1 << "][" << j + 1 << "][" << k + 1 << "] = " << hargaTotal[i][j][k] << "  ";
            }
            cout << endl;
        }
        cout << endl;
    }
    cout << endl;
}

void testPrintArraywithmincopy()
{
    int i, j, k;

    // cin >> i >> j >> k;

    cout << "Price List Penerbangan Lengkapan" << endl;

    for ( i = 0; i < 3; i++)
    {
        // display out dari array maskapai
        cout << "Maskapai " << jenisMaskapai[i] << "\n";
        for ( j = 0; j < 3; j++)
        {
            for (k = 0; k < 4; k++)
            {
                
                cout << "[" << i + 1 << "][" << j + 1 << "][" << k + 1 << "] = " << hargaTotal[i][j][k] << "  ";
            }
            cout << endl;
        }
        cout << endl;
    }
    cout << endl;
}

void inputPemesanan()
{
    cout << "Pilih Maskapai\n1. Garuda\n2. Citylink\n3. Lion\nMasukan maskapai\n";
    cin >> maskapai;

    cout << "Pilih Kelas Penerbangan\n1. Ekonomi\n2. Bisnis\n3. Eksekutif\nMasukan Kelas\n";
    cin >> kelas;

    cout << "Pilih Jam Penerbangan\n1. 12.00\n2. 13.00\n3. 15.00\n4. 17.00\nMasukan Pilihan Jam\n";
    cin >> jam;

    // cout << "Pilihan anda adalah" << maskapai << kelas << jam;

    cout << hargaTotal[maskapai][kelas][jam] << endl;
}

void OutHalaman()
{
    cout << "============= Selamat datang di penerbangan ArrayLine ============\n"
         << "\n\n\n=========== Menu Utama ================\n"
         << "1. Lihat Jadwal Penerbangan\n2. Pesan Tiket\n0. Menu Utama\n" + outPilihan;
}

void JadwalPemesanan()
{
    cout << "=========== 1. Jadwal Penerbangan ============\n"
         << pilihanMaskapai + outPilihan;
    cin >> inputUser;

    switch (inputUser)
    {
    case 1:
        main();
        break;

    default:
        cout << "Anda tidak memilih apapun, kami akan mengarahkan anda ke menu utama"
             << "\nTekan apapun untuk kembali ke menu utama\n";
    break;
    }
    getchar();
    menuUtama();
}

void PesanTiket()
{
    cout << "=========== 2. Jadwal Pemesanan Tiket Pesawat ============\n"
         //  Todo: Lakukan for cout for loops mulai disini
         << "1. Garuda\n2.City Link\n3. Lion Air\n0. Menu Utama\n" + outPilihan;

    inputPemesanan();
}
