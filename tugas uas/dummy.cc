#include <iostream>

using namespace std;

struct Database
{
    string nama, jurusan, tanggalLahir;
    int nim;

    Database *Next;
};

Database *head, *tail, *cur, *newNode, *del;

void postSingleList(string nama, string jurusan, string tanggalLahir, int NIM)
{
    head = new Database;
    head->nama = nama;
    head->jurusan = jurusan;
    head->tanggalLahir = tanggalLahir;
    head->nim = NIM;
    head->Next = NULL;
    tail = head;
};

void addNodeFirst(string nama, string jurusan, string tanggalLahir, int NIM)
{
    newNode = new Database;
    newNode->nama = nama;
    newNode->jurusan = jurusan;
    newNode->tanggalLahir = tanggalLahir;
    newNode->nim = NIM;
    newNode->Next = head;
    head = newNode;
}

void addNodeLast(string nama, string jurusan, string tanggalLahir, int NIM)
{
    newNode = new Database;
    newNode->nama = nama;
    newNode->jurusan = jurusan;
    newNode->tanggalLahir = tanggalLahir;
    newNode->nim = NIM;
    tail->Next = NULL;
    tail = newNode;
}

void deleteNodeHead()
{
    del = head;
    head = head->Next;
    delete del;
}

void readList()
{
    cur = head;

    if (cur == NULL)
    {
        cout << "Database masih kosong\n";
    }
    else
    {
        while (cur != NULL)
        {
            cout << "Nama User: " << cur->nama << endl;
            cout << "Jurusan: " << cur->jurusan << endl;
            cout << "Tanggal Lahir: " << cur->tanggalLahir << endl;
            cout << "NIM: " << cur->nim << endl
                 << endl;
            cur = cur->Next;
        }
    }
}

int main()
{

    string nama, jurusan;
    string tanggalLahir;
    int NIM;

    int pINT, isinsertLast;
    char isdone;
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
        readList();
        cout << "Kembali ke menu utama?\n";
        cin >> isdone;
        (isdone == 'y') ? main() : main();
        main();

        break;
    case 2:
        cout << "================= Tambah Barang ===================\n"
             << "Masukan Nama : \n";
        cin >> nama;
        cout << "Jurusan : \n";
        cin >> jurusan;
        cout << "Tanggal Lahir : \n";
        cin >> tanggalLahir;
        cout << "NIM : \n";
        cin >> NIM;

        cout << "Ingin memasukan pada antrian awal?";
        cin >> isinsertLast;

        (isinsertLast == 1) ? addNodeFirst(nama, jurusan, tanggalLahir, NIM) : addNodeLast(nama, jurusan, tanggalLahir, NIM);
        main();
        break;

    case 3:
        cout << "================= Hapus Barang ===================\n";
        deleteNodeHead();
        main();
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
}