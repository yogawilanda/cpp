#include <Windows.h>
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

// Struct untuk membuat framework data linked list
struct Node
{
    int hargaStruct, kuotaStruct;
    string namaBuahStruct;
    Node *next;
};

Node *head, *cur, *tail, *nodebaru, *delNode;

int hargaInput, kuotaInput;
string namaInput;
char s;

void cari();
void loading();
void createData(string namaBuah, int kuotaCurINT, int hargaCurINT);
void deleteData(Node *temp);
void clr();
void showUser();
void kalkulasi();

int main()
{

    int x;
    char y;
    string z;

    string namaBuah;
    int pINT;
    clr();

    loading();
    clr();
    cout << "========================================\n";
    cout << "\tAplikasi Kasir Toko Buah\t\n";
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
        clr();
        cout << "================= Daftar Barang ===================\n";
        // todo: jika sempat tambah sorting
        showUser();

        cout << "Kembali ke menu utama? (y/n)\n";
        cin >> y;
        if (y == 'y')
        {
            return main();
        }

        if (y != 'y')
        {
            cout << "Response tidak ditemukan kembali ke menu utama\n";
            main();
        }

        break;

    case 2:

        while (y != 'y')
        {
            cout << "================= Tambah Barang ===================\n";
            cout << "Masukkan Daftar Barang yang diinginkan\n";
            cout << "Masukkan nama barang\n";
            cin >> namaInput;
            cout << "Masukkan harga barang";
            cin >> hargaInput;
            cout << "Masukkan kuota barang";
            cin >> kuotaInput;

            createData(namaInput, hargaInput, kuotaInput);
            cout << "Kembali ke menu utama? (y/n)\n";
            cin >> y;
        }

        main();

        break;
    case 3:
        cout << "================= Hapus Barang ===================\n";
        // todo: belum
        deleteData(cur);
        break;
    case 4:
        cout << "================= Cari Barang ===================\n";
        // todo: jika sempat tambah untuk update
        cari();
        cout << "Kembali ke menu utama? (y/n)\n";

        break;
    case 5:
        cout << "================= Transaksi ===================\n";
        // todo: belum
        kalkulasi();
        break;
    case 6:
        cout << "Tekan enter 2 kali untuk keluar\n";
        break;

    default:
        break;
    }
};

void loading()
{
    system("cls");
    printf("\e[?25l");

    // Set ASCII to print special character.
    // Code page 437
    SetConsoleCP(437);
    SetConsoleOutputCP(437);

    // untuk mengubah ascii code char sesuai codenya
    int bar1 = 177, bar2 = 219;

    cout << "\n\n\n\t\t\t\tLoading...";
    cout << "\n\n\n\t\t\t\t";

    for (int i = 0; i < 25; i++)
        cout << (char)bar1;

    cout << "\r";
    cout << "\t\t\t\t";
    for (int i = 0; i < 25; i++)
    {
        cout << (char)bar2;
        // atur durasi
        Sleep(10);
    }

    cout << "\n\t\t\t\t" << (char)1 << "!";
    // system("Pause");
}

// buat data/produknya
void createData(string namaBuah, int kuotaCurINT, int hargaCurINT)
{

    nodebaru = new Node;
    nodebaru->namaBuahStruct = namaBuah;
    nodebaru->hargaStruct = kuotaCurINT;
    nodebaru->kuotaStruct = hargaCurINT;
    nodebaru->next = head;
    head = nodebaru;
}

// hapus data yang ada
void deleteData(Node *temp)
{
}

// kalkulasi antar harga dan kuota dari node
void kalkulasi()
{
}

// cari data berdasarkan indexnya, lalu dapat mengupdate datanya sekaligus
void searchUpdate(Node *temp)
{
}
// tampilkan data dalam struk
void showUser()
// void showUser(Node *cur)
{
    cur = head;

    if (cur != NULL)
    {
        cout.widen(10);
        cout << "     Nama\t"
             << "Harga\t\t"
             << "Stok\t\t" << endl;
        while (cur != NULL)
        {
            cout.width(10);
            cout.widen(10);
            cout << cur->namaBuahStruct << "\t";
            // cout.width(3);
            cout << cur->hargaStruct << "\t\t";
            cout << cur->kuotaStruct << "\t"
                 << endl;
            cur = cur->next;
        }
    }

    // }
}

void clr()
{
    system("cls");
}

// function untuk mencari barang yang telah tersimpan di dalam data
// dicari mulai dari cur->head, lalu di perkondisikan apabila cur tidak
// null, maka lakukan transversal dengan metode while loop untuk
// cek data yang tersimpan satu per satu hingga data ditemukan.
// jika data ditemukan akan menampilkan datanya,
// jika tidak akan menampilkan error
void cari()
{
    // Node *cur;
    cur = head;
    string caridata;
    int ketemu = 0;
    if (cur != NULL)
    {
        cout << "\n Input Produk yang dicari\t: ";
        cin >> caridata;
        loading();
        clr();
        while (cur != NULL)
        {
            string a = cur->namaBuahStruct;
            if (caridata == a)
            {
                cout << "\n\n>>>  Data Yang Anda Cari Ditemukan  <<<" << endl;
                cout << "Nama\t: " << cur->namaBuahStruct << endl;
                cout << "Harga\t: " << cur->hargaStruct << endl;
                cout << "Kuota\t: " << cur->kuotaStruct << endl;
                cout << "===================================" << endl;
                cout << "\n\n";
                ketemu = 1;
            }

            // data akan hilang apabila node diubah
            cur = cur->next;
        }
        if (ketemu == 0)
        {
            cout << " Data tidak ditemukan\n\n";
        }
    }
    else
    {
        cout << " Belum ada nasabah!";
    }
    cout << "Kembali ke halaman utama?\n";
    cin >> s;

    (s == 'y') ? main() : main();
    getchar();
}
