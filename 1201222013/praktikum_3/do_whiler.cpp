#include <iostream>

using namespace std;

int main() {
    int s, x;

    string nama;

    string ulang = "Mengulang kembali?";

    char pilih;

    pilih = 'n';

    do
    {
        cout << "Sebutkan nama anda "<< endl;
        cin >> nama ;
        cout << "Selamat datang " << nama << endl;
        
        cout << "ulang?";
        cin >> pilih;

    } while (pilih != 'n');
    
       return 0;
}

