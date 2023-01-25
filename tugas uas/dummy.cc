#include <iostream>
#include <sstream>

using namespace std;

struct Database
{
    string nama, jurusan, tanggalLahir;
    int nim;

    Database *Next;
};

struct NoDatabase
{
    int nimDB;
    Database *NextDB;
};


Database *head, *tail, *cur, *newNode, *del;
NoDatabase *headNDB, *tailNDB;



void postSingleList(string nama, string jurusan, string tanggalLahir, int NIM)
{
    headNDB = new NoDatabase;
    head->nama = nama;
    head->jurusan = jurusan;
    head->tanggalLahir = tanggalLahir;
    headNDB->nimDB = NIM;
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

void deleteNodeTail()
{
    del = tail;
    cur = head;
    while (cur->Next != tail)
    {
        cur = cur->Next;
    }
    tail = cur;
    tail->Next = NULL;

    delete del;
}

void readList()
{
    cur = head;

    if (cur == NULL)
    {
        cout << "Database masih kosong\n";
    }
    
    if (cur != NULL)
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

void searchAndUpdate() {
    cur = head;

    if (cur == NULL)
    {
        cout << "User is not found or not yet created";
    };

    while (cur != NULL)
    {
        cin >> cur->nama;
        cout << "Nama User: " << cur->nama << endl;
            cout << "Jurusan: " << cur->jurusan << endl;
            cout << "Tanggal Lahir: " << cur->tanggalLahir << endl;
            cout << "NIM: " << cur->nim << endl
                 << endl;
            cur = cur->Next;
            cur->Next = NULL;
    }

}

int main()
{

    string nama, jurusan;
    string tanggalLahir;
    int NIM;

   

    int pINT;
    char isdone, isinsertLast;

    cout << "========================================\n";
    cout << "\t";
    readList();
    cout << "========================================\n\n";
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

        system("cls");
        cout << "================= Tambah Mahasiswa ===================\n"
             << "Masukan Nama : \n";
        cin >> nama;
        // cout << "Jurusan : \n";
        // cin >> jurusan;
        // cout << "Tanggal Lahir : \n";
        // cin >> tanggalLahir;
        // cout << "NIM : \n";
        // cin >> NIM;

        cout << "Ingin memasukan pada antrian awal? (y/n)";
        cin >> isinsertLast;

        switch (isinsertLast)
        {
        case 'y':
            addNodeFirst(nama, "jurusan", "tanggalLahir", 121412012);
            // addNodeFirst("yoga", "rpl", "06061996", 12104141);
            main();
            break;
        case 'n':
            addNodeLast(nama, jurusan, tanggalLahir, NIM);
            break;
            main();

        default:
            break;
        }

        break;

    case 3:
        cout << "================= Hapus Barang ===================\n";
        deleteNodeHead();
        main();
        break;

    case 4:
        cout << "================= Cari & Perbarui Barang ===================\n";
        searchAndUpdate();
        // cout << cur->nama << endl;
        // cout << cur->jurusan << endl;
        // cout << cur->tanggalLahir << endl;
        // cout << cur->nim  + "\n";
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