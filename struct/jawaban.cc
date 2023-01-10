#include <iostream>
#include <queue>

using namespace std;

int pilInt;
string i, j;
char pilCharm, ulang;
queue<string> tempNama;
queue<string> antrianWQ;

void daftarNama(queue<string> paramDaftarNama);

void menuUtama();

struct Pasien
{
  queue<string> namaPasien = tempNama;
};

void display_queue(queue<string> displayTemp)
{

    while (!displayTemp.empty())
    {
        cout << displayTemp.front() << "\n";
        displayTemp.pop();
    }

    cout << endl;
    cin >> ulang;

    (ulang == 'y') ? menuUtama() : menuUtama();
}


int main()
{
  menuUtama();
};

void daftarNama(queue<string> paramDaftarNama)
{
  Pasien pasien;

  paramDaftarNama = pasien.namaPasien;

  queue<int> nomorAntrian;

  cout << "Masukan nama pendaftar:";
  cin >> i;
  tempNama.push(i);

  // todo: fix nama harus berubah ketika update
  cout << "Nama : " << tempNama.front();
  cout << "\nUrutan : " << tempNama.size()
       << "\nStatus Pendaftaran: Sukses\n"
       << "\nIngin mengulang? y/n";

  cin >> ulang;

  (ulang == 'y') ? daftarNama(tempNama) : menuUtama();
}

void menuUtama()
{

  cout << "Masukan Pilihan menu yang tersedia\n"
       << "1. Masukan Nama Pasien\n"
       << "2. Cek Pasien\n"
       << "3. Panggil Pasien\n";

  cin >> pilInt;
  switch (pilInt)
  {
  case 1:
    daftarNama(tempNama);
    break;

  case 2:
    cout << "Cek Antrian" << endl;
    display_queue(tempNama);
    break;

  case 3:
    cout << "Hapus antrian? (y/n)" << endl;
    cin >> ulang;
    (ulang == 'y') ? 
     tempNama.pop() : menuUtama();
    break;

  default:
    break;
  }
}

// Pasien pasien;

//     queue<string> pasienNama =  pasien.tempNama;
//     string i;

//     cin >> i;
//     pasienNama.push(i);

//     cout<< pasienNama.front();