#include <iostream>
#include <stdlib.h>

using namespace std;

void reset(){
    system ("cls");
};

void judul(){

    cout << "------- SELAMAT DATANG DI PEMESANAN TIKET BANDARA JUANDA LITE -------"<<endl;
    cout << endl;
};

void header(){
    int pilih;

    cout << "1. Registrasi "      <<endl;
    cout << "2. List Maskapai "   <<endl;
    cout << "3. Pemesanan Tiket " <<endl;
    cout << "pilihan anda :";
    cin >> pilih;
    reset();
}

void regis(){
    string nama, kota;
    int umur, telp;
    char pil;

    cout << "MENU REGISTRASI" <<endl;
    cout << "Masukan Nama : ";
    cin >> nama;
    cout << "Masukan Usia Anda :";
    cin >> umur;
    cout << "Kota Asal :";
    cin >> kota;
    cout << "NO.Telp :";
    cin >> telp;
    cout << endl;

    cout << nama << endl;
    cout << umur <<endl;
    cout << kota <<endl;
    cout << telp <<endl;
    cout << endl;
    cout << "DATA ANDA TELAH TERDAFTAR";
    cout<< endl;
    cout<< endl;

   return header();



}

void List(){
    int ul, kode;



    cout << "LIST MASKAPAI PENERBANGAN"<< endl;
    cout << endl;
    cout << "1. Garuda Indonesia" <<endl;
    cout << "2. Batik Air"        <<endl;
    cout << "3. Lion Air"         <<endl;
    cout << "4. Citilink"         <<endl;
    cout << endl;
    cout << "PILIH MASKAPAI PENERBANGAN ANDA : ";
    cin >> ul;
    reset ();
    cout<< endl;

    switch (ul){

    case 1 : {
        cout << "==========JADWAL PENERBANGAN GARUDA INDONESIA=========="<< endl;
        cout << endl;
        cout << "Penerbangan        Tujuan      Tanggal       Jam Penerbangan "<<endl;
        cout << "  GA-0327          JAKARTA    23-11-2022        11:00:00     "<<endl;
        cout << "  GA-0317          JAKARTA    24-11-2022        19:40:00     "<<endl;
        cout << endl;
        cout << endl;
        cout << "MASUKKAN KODE PENERBANGAN :";
        cin >> kode;

        }

    if (kode == 0327){

         cout << "Penerbangan        Tujuan      Tanggal       Jam Penerbangan "<<endl;
         cout << "  GA-0327          JAKARTA    23-11-2022        11:00:00     "<<endl;

        }
    else if (kode == 0317){

            cout << "Penerbangan        Tujuan      Tanggal       Jam Penerbangan "<<endl;
            cout << "  GA-0317          JAKARTA    24-11-2022        19:40:00     "<<endl;
        }

    case 2 :{
        cout << "==========JADWAL PENERBANGAN BATIK AIR=========="<< endl;
        cout << endl;
        cout << "Penerbangan            Tujuan              Tanggal       Jam Penerbangan"<<endl;
        cout << "  ID-7518        HALIM PERDANA KUSUMA     23-11-2022         19:55:00   "<<endl;
        cout << "  ID-6593              JAKARTA            23-11-2022         18:10:00   "<<endl;
        cout << endl;
        cout << endl;
        cout << "MASUKAN KODE PENERBANGAN :";
        cin >> kode;
    }
    if (kode == 7518){

        cout << "Penerbangan            Tujuan              Tanggal       Jam Penerbangan"<<endl;
        cout << "  ID-7518        HALIM PERDANA KUSUMA     23-11-2022         19:55:00   "<<endl;

    }
    else if (kode == 6593){

        cout << "Penerbangan            Tujuan              Tanggal       Jam Penerbangan"<<endl;
        cout << "  ID-6593              JAKARTA            23-11-2022         18:10:00   "<<endl;
    }





    case 3 :{
        cout << "==========JADWAL PENERBANGAN LION AIR==========" << endl;
        cout << endl;
        cout << "Penerbangan          Tujuan          Tanggal          Jam Penerbangan"<<endl;
        cout << "  JT-6092            KUPANG         23-11-2022            16:40:00   "<<endl;
        cout << "  JT-0001            JAKARTA        25-11-2022            17:40:00   "<<endl;
        cout << "  JT-6007            JAKARTA        26-11-2022            18:30:00   "<<endl;
        cout << "  JT-0366           BALIKPAPAN      23-11-2022            18:15:00   "<<endl;
        cout << endl;
        cout << endl;
        cout << "MASUKAN KODE PENERBANGAN :";
        cin >> kode;
    }

    if (kode == 6092){

             cout << "Penerbangan          Tujuan          Tanggal          Jam Penerbangan"<<endl;
             cout << "  JT-6092            KUPANG         23-11-2022            16:40:00   "<<endl;

    }
    else if (kode == 0001){

             cout << "Penerbangan          Tujuan          Tanggal          Jam Penerbangan"<<endl;
             cout << "  JT-0581            JAKARTA        25-11-2022            17:40:00   "<<endl;
    }
    else if (kode == 6007){

            cout << "Penerbangan          Tujuan          Tanggal          Jam Penerbangan"<<endl;
            cout << "  JT-6007            JAKARTA        26-11-2022            18:30:00   "<<endl;
    }
    else if (kode == 0366){

            cout << "Penerbangan          Tujuan          Tanggal          Jam Penerbangan"<<endl;
            cout << "  JT-0366           BALIKPAPAN      23-11-2022            18:15:00   "<<endl;
    }



    case 4 :{
        cout << "==========JADWAL PENERBANGAN CITILINK==========" << endl;
        cout << endl;
        cout << "Penerbangan          Tujuan               Tanggal         Jam Penerbangan"<<endl;
        cout << "  QG-0710            JAKARTA             24-11-2022           18:00:00   "<<endl;
        cout << "  QG-0354         UJUNG PANDANG          23-11-2022           19:25:00   "<<endl;
        cout << "  QG-0175      HALIM PERDANA KUSUMA      23-11-2022           23:00:00   "<<endl;
        cout << "MASUKAN KODE PENERBANGAN :";
        cin >> kode;
        }
    if (kode == 0710){

         cout << "Penerbangan          Tujuan               Tanggal         Jam Penerbangan"<<endl;
         cout << "  QG-0719            JAKARTA             24-11-2022           18:00:00   "<<endl;
    }
    else if (kode == 0354){

         cout << "Penerbangan          Tujuan               Tanggal         Jam Penerbangan"<<endl;
         cout << "  QG-0354         UJUNG PANDANG          23-11-2022           19:25:00   "<<endl;
    }
    else if (kode == 0175){

         cout << "Penerbangan          Tujuan               Tanggal         Jam Penerbangan"<<endl;
         cout << "  QG-0179      HALIM PERDANA KUSUMA      23-11-2022           23:00:00   "<<endl;
    }


    else
    {
        cout << "MAAF LIST MASKAPAI TIDAK TERSEDIA"<< endl;
        cout << endl;
        return header();
        reset();
    }
    }



















};

int main() {



    judul ();
    header();
    regis ();
    List  ();


};