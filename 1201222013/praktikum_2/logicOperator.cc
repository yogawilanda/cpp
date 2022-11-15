// Praktikum percabangan.
// Een Ahmadan Yoga Wilanda

#include <iostream>

using namespace std;


// Pelajaran Operator Logic If Else 
int main() {
    int total, nominal, bonusPulsa, bonusSms;

    cout << "Isi Pulsa: RP.";
    cin >> nominal;

    if (nominal >= 100000) {
        bonusPulsa = 10000;
        bonusSms = 160;
    } else if (nominal >= 50000) {
        bonusPulsa = 5000;
        bonusSms = 100;
    } else if (nominal >= 25000) {
        bonusPulsa = 0;
        bonusSms = 60;
    } else  {
        bonusPulsa = 0;
        bonusSms = 0;
    } 

    total = nominal + bonusPulsa;
    cout << "Pulsa: " << total << endl;
    cout << "Bonus SMS: " << bonusSms << endl;
    cout << "Bonus Pulsa: " << bonusPulsa << endl;
    
    return 0;
}

// Pelajaran 3
// int main() {
//     int Total, Potongan, Bayar;

//     cout << "Total Pembelian : Rp. ";
//     cin >> Total;

//     if (Total>=50000) {
//         Potongan = 0.2*Total;
//     } else {
//         Potongan = 0.05*Total;
//     }

//     cout << "Besar Potongan: Rp. " << Potongan << endl;
//     Bayar = Total - Potongan;
//     cout << "Jumlah yang harus dibayarkan: RP. " << Bayar << endl;

//     return 0;
// }

// percabangan: pelajaran 2 
// int main() {
//     int usia;

//     cin >> usia;

//     if (usia < 17)
//     cout << "Anda tidak boleh menonton bioskop" << endl;

//     return 0;

// }

// pelajaran 1 
// int main() {
//     int m, n;
// 
//     cout << "Masukkan Nilai m = ";
//     cin >> m;
//     cout << "Masukkan Nilai n = ";
//     cin >> n;
//     cout << "m = n --> " << (m==n) <<endl;
//     cout << "m != n --> " << (m!=n) <<endl;
//     cout << "m > n --> " << (m>n) <<endl;
//     cout << "m < n --> " << (m<n) <<endl;
//     cout << "m >= n --> " << (m>=n) <<endl;
//     cout << "m <=  n --> " << (m<=n) <<endl;
//     return 0;
// }

