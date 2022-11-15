#include <iostream>

using namespace std;

int main()
{

    int OP = 10, OP2 = 5, hasil, operasi;

    cout << "1. Operasi Penjumlahan" << endl;
    cout << "2. Operasi Pengurangan" << endl;
    cout << "3. Operasi Perkalian" << endl;
    cout << "4. Operasi Pembagian" << endl;                                    
    cout << "Pilih Nomor Operasi";                                    
    cin >> operasi;
    switch (operasi)
    {
    case 1:
        hasil = OP + OP2;
        cout << "Hasil Operasi Penjumlahan" << hasil << endl;
        break;

    case 2:
        hasil = OP - OP2;
        cout << "Hasil Operasi Pengurangan" << hasil << endl;
        break;

    case 3:
        hasil = OP * OP2;
        cout << "Hasil Operasi Perkalian" << hasil << endl;
        break;
        
    case 4:
        hasil = OP / OP2;
        cout << "Hasil Operasi Pembagian" << hasil << endl;
        break;

    default:
        cout << "Operasi Tidak Ditemukan" << endl;

        break;
    }

    return 0;
}
