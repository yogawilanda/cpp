#include <iostream> 
#include <queue>
#include <stack>

// soal nomor 2 itu nomor 4
// soal nomor 2 yang benar adalah memanggil antrian yang awal

using namespace std;

char ulang;
int pilInt;
char pilChar;
string daftarNama, pilString;
queue<string> tempNama;
queue<string> antrianWQ;
queue<int> noAntrianWQ;

void inputManualQueue(void);
void display_queue(queue<string> st);
void qeueApp(void);
void clrScr(void);
void totalAntrian(void);

int main()
{
    qeueApp();
}

void totalAntrian()
{
    cout << "Total antrian yang ada : \n"
         << tempNama.size()
         << endl
         << "Ingin kembali ke menu utama? y/n";

    cin >> ulang;
    clrScr();

    (ulang == 'y') ? qeueApp() : totalAntrian();
}

void clrScr() { system("cls"); }

void display_queue(queue<string> displayTemp)
{

    while (!displayTemp.empty())
    {
        cout << displayTemp.front() << "\n";
        displayTemp.pop();
    }

    cout << endl;
}

void inputManualQueue()
{
    string i, j;

    queue<int> nomorAntrian;

    cout << "Masukan nama pendaftar:";
    cin >> i;
    tempNama.push(i);

    for (int antrian = 0; antrian < 5; antrian++)
    {
        nomorAntrian.push(antrian);
        // nomorAntrian.pop();
    }

    // todo: fix nama harus berubah ketika update
    cout << "Nama : " << tempNama.back();
    cout << "\nUrutan : " << tempNama.size()
         << "\nStatus Pendaftaran: Sukses\n"
         << "\nIngin mengulang? y/n";

    cin >> ulang;

    (ulang == 'y') ? inputManualQueue() : qeueApp();
}

void qeueApp()
{
    antrianWQ.push(daftarNama);

    cout << "Pelayanan Cek Kanker RS Sehat Itu Imajinasi\n"
         << "1. Daftar Antrian\n"
         << "2. Panggil Antrian\n"
         << "3. Cek Jumlah Antrian\n"
         << "4. Cek Seluruh Jumlah Antrian\n"
         << "Pilih menu sesuai nomor yang telah ditentukan\n";

    cin >> pilInt;

    switch (pilInt)
    {

    case 1:
        cout << "Daftar Antrian\n";
        inputManualQueue();

        break;
    case 2:
        cout << "Cek Antrian\n";
        cout <<  tempNama.front() << endl;

        cout << "Ingin menghapus data?\n";
        
        cin >> ulang;

        (ulang == 'y') ? tempNama.pop() : qeueApp();
        
        break;

    case 3:
        cout << "Jumlah Antrian\n";
        totalAntrian();
        break;
    case 4:
        cout << "Cek Antrian\n";
        display_queue(tempNama);
        break;

    default:
        break;
    }
}
