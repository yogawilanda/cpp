#include <iostream>

using namespace std;

struct Database{
string nama, jenis, tanggalLahir;
int  nim;

Database *Next;
};

Database *head, *tail, *cur;

void postSingleList(string nama, string jurusan, string tanggalLahir, int NIM)
{
    head = new Database;
    head->nama = nama;
    head->jenis = jurusan;
    head->tanggalLahir = tanggalLahir;
    head->nim = NIM;
    head->Next = NULL;
    tail = head;

};

void readList()
{
    cur = head;
    while (cur != NULL)
    {
        cout << "Nama User: " << cur->nama << endl;
        cout << "Jurusan: " << cur->jenis << endl;
        cout << "Tanggal Lahir: " << cur->tanggalLahir << endl;
        cout << "NIM: " << cur->nim << endl << endl;
        cur = cur->Next;
    }
}


int main() {

    string nama, jurusan;
    string  tanggalLahir;
    int NIM;

    cin >> nama; 
    cin >> jurusan;
    cin >> tanggalLahir;
    cin >> NIM;
    
    postSingleList(nama, jurusan, tanggalLahir, NIM);

    readList();
}   