#include <iostream>

using namespace std;

struct JenisMaskapai
{
    int nomorPesawat;
    string namaPesawat;
};

int main()
{
    JenisMaskapai jenisMaskapai;
    string a = jenisMaskapai.namaPesawat;
    int b = jenisMaskapai.nomorPesawat;


    cout << "Masukan Jenis Maskapai: \n";
    cin >> a;

    cout << endl;

    cout << "Masukan Nomor Maskapai: \n";
    cin >> b;
    cout << endl;

    cout << "hasilnya adalah: \n";
    cout << jenisMaskapai.namaPesawat
         << endl
         << jenisMaskapai.nomorPesawat;
};