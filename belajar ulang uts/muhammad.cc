#include <iostream>

using namespace std;

void judul(void);
void header(void);
void regis(void);
void List(void);
void Keluar(void);

void judul()
{

    cout << "------- SELAMAT DATANG DI PEMESANAN TIKET BANDARA JUANDA LITE -------" << endl;
    cout << endl;
};

void kembali()
{
    int kembali;
    cout << "1. List Maskapai " << endl;
    cout << "2. Keluar " << endl;
    cout << "pilihan anda :";
    cin >> kembali;

    if (kembali == 1)
    {
        List();
    }
    else if (kembali == 2)
    {
        Keluar();
    }
}

void header()
{
    int pilih;

    cout << "1. Registrasi " << endl;
    cout << "2. List Maskapai " << endl;
    cout << "3. Keluar " << endl;
    cout << "pilihan anda :";
    cin >> pilih;
    cout << endl;
    cout << endl;
    cout << endl;
};

void regis()
{
    string nama, kota;
    int umur, telp;
    char pil, y;

    cout << "MENU REGISTRASI" << endl;
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
    cout << umur << endl;
    cout << kota << endl;
    cout << telp << endl;
    cout << endl;
    cout << "DATA ANDA TELAH TERDAFTAR" << endl;
    cout << "KETIK Y UNTUK KEMBALI KE MENU AWAL :";
    cin >> y;
    if (y == 1)
    {
        kembali();
    }
    cout << endl;
    cout << endl;
};

void List()
{
    int ul, kode;
    char terima, tuls;

    cout << "LIST MASKAPAI PENERBANGAN" << endl;
    cout << endl;
    cout << "1. Garuda Indonesia" << endl;
    cout << "2. Batik Air" << endl;
    cout << "3. Lion Air" << endl;
    cout << "4. Citilink" << endl;
    cout << endl;
    cout << "PILIH MASKAPAI PENERBANGAN ANDA : ";
    cin >> ul;
    cout << endl;

    switch (ul)
    {

    case 1:
    {
        cout << "==========JADWAL PENERBANGAN GARUDA INDONESIA==========" << endl;
        cout << endl;
        cout << "Penerbangan        Tujuan      Tanggal       Jam Penerbangan " << endl;
        cout << "  GA-5578          JAKARTA    23-11-2022        11:00:00     " << endl;
        cout << "  GA-3477          JAKARTA    24-11-2022        19:40:00     " << endl;
        cout << endl;
        cout << endl;
        cout << "MASUKKAN KODE PENERBANGAN :";
        cin >> kode;
        cout << endl;
        cout << endl;
    }

        if (kode == 5578)
        {

            cout << "Penerbangan        Tujuan      Tanggal       Jam Penerbangan      Harga      " << endl;
            cout << "  GA-5578          JAKARTA    23-11-2022        11:00:00        1,500,000    " << endl;
            cout << endl;
            cout << "APAKAH ANDA AKAN MEMESAN TIKET INI (Y/N) :";
            cin >> terima;
            cout << endl;
            cout << endl;
            if (terima == 'y')
            {
                cout << "TERIMAKASIH SUDAH MEMESAN TIKET DI JUANDA LITE SEMOGA HARIMU SENIN TERUS";
            }
            else if (terima == 'n')
            {
                cout << "TERIMAKASIH SUDAH BERKUNJUNG";
                cout << endl;
                cout << "KETIK Y UNTUK KEMBALI :";
                cin >> tuls;
                cout << endl;
                cout << endl;
                if (tuls == 'y')
                {
                    List();
                }
            }

            else if (kode == 3477)
            {

                cout << "Penerbangan        Tujuan      Tanggal       Jam Penerbangan      Harga   " << endl;
                cout << "  GA-3477          JAKARTA    24-11-2022        19:40:00        1,600,000 " << endl;
                cout << endl;
                cout << "APAKAH ANDA AKAN MEMESAN TIKET INI (Y/N) :";
                cin >> terima;
                cout << endl;
                cout << endl;
                if (terima == 'y')
                {
                    cout << "TERIMAKASIH SUDAH MEMESAN TIKET DI JUANDA LITE SEMOGA HARIMU SENIN TERUS";
                }
                else if (terima == 'n')
                {
                    cout << "TERIMAKASIH SUDAH BERKUNJUNG";
                    cout << endl;
                    cout << "KETIK Y UNTUK KEMBALI :";
                    cin >> tuls;
                    cout << endl;
                    cout << endl;
                    if (tuls == 'y')
                    {
                        List();
                    }
                }
            }
            break;

        case 2:
        {
            cout << "==========JADWAL PENERBANGAN BATIK AIR==========" << endl;
            cout << endl;
            cout << "Penerbangan            Tujuan              Tanggal       Jam Penerbangan" << endl;
            cout << "  ID-7518        HALIM PERDANA KUSUMA     23-11-2022         19:55:00   " << endl;
            cout << "  ID-6593              JAKARTA            23-11-2022         18:10:00   " << endl;
            cout << endl;
            cout << endl;
            cout << "MASUKAN KODE PENERBANGAN :";
            cin >> kode;
            cout << endl;
            cout << endl;
        }
            if (kode == 7518)
            {

                cout << "Penerbangan            Tujuan              Tanggal       Jam Penerbangan     Harga  " << endl;
                cout << "  ID-7518        HALIM PERDANA KUSUMA     23-11-2022         19:55:00      1,000,000" << endl;
                cout << endl;
                cout << "APAKAH ANDA AKAN MEMESAN TIKET INI (Y/N) :";
                cin >> terima;
                cout << endl;
                cout << endl;
                if (terima == 'y')
                {
                    cout << "TERIMAKASIH SUDAH MEMESAN TIKET DI JUANDA LITE SEMOGA HARIMU SENIN TERUS";
                }
                else if (terima == 'n')
                {
                    cout << "TERIMAKASIH SUDAH BERKUNJUNG";
                    cout << endl;
                    cout << "KETIK Y UNTUK KEMBALI :";
                    cin >> tuls;
                    cout << endl;
                    cout << endl;
                    if (tuls == 'y')
                    {
                        List();
                    }
                }
                else if (kode == 6593)
                {

                    cout << "Penerbangan            Tujuan              Tanggal       Jam Penerbangan      Harga " << endl;
                    cout << "  ID-6593              JAKARTA            23-11-2022         18:10:00        800,000" << endl;
                    cout << endl;
                    cout << "APAKAH ANDA AKAN MEMESAN TIKET INI (Y/N) :";
                    cin >> terima;
                    cout << endl;
                    cout << endl;
                    if (terima == 'y')
                    {
                        cout << "TERIMAKASIH SUDAH MEMESAN TIKET DI JUANDA LITE SEMOGA HARIMU SENIN TERUS";
                    }
                    else if (terima == 'n')
                    {
                        cout << "TERIMAKASIH SUDAH BERKUNJUNG";
                        cout << endl;
                        cout << "KETIK Y UNTUK KEMBALI :";
                        cin >> tuls;
                        cout << endl;
                        cout << endl;
                        if (tuls == 'y')
                        {
                            List();
                        }
                    }

                    break;

                case 3:
                {
                    cout << "==========JADWAL PENERBANGAN LION AIR==========" << endl;
                    cout << endl;
                    cout << "Penerbangan          Tujuan          Tanggal          Jam Penerbangan" << endl;
                    cout << "  JT-6092            KUPANG         23-11-2022            16:40:00   " << endl;
                    cout << "  JT-0001            JAKARTA        25-11-2022            17:40:00   " << endl;
                    cout << "  JT-6007             ACEH          26-11-2022            18:30:00   " << endl;
                    cout << "  JT-0355           BALIKPAPAN      23-11-2022            18:15:00   " << endl;
                    cout << endl;
                    cout << endl;
                    cout << "MASUKAN KODE PENERBANGAN :";
                    cin >> kode;
                    cout << endl;
                    cout << endl;
                }

                    if (kode == 6092)
                    {

                        cout << "Penerbangan          Tujuan          Tanggal          Jam Penerbangan      harga      " << endl;
                        cout << "  JT-6092            KUPANG         23-11-2022            16:40:00       1,800,000    " << endl;
                        cout << endl;
                        cout << "APAKAH ANDA AKAN MEMESAN TIKET INI (Y/N) :";
                        cin >> terima;
                        cout << endl;
                        cout << endl;
                        if (terima == 'y')
                        {
                            cout << "TERIMAKASIH SUDAH MEMESAN TIKET DI JUANDA LITE SEMOGA HARIMU SENIN TERUS";
                        }
                        else if (terima == 'n')
                        {
                            cout << "TERIMAKASIH SUDAH BERKUNJUNG";
                            cout << endl;
                            cout << "KETIK Y UNTUK KEMBALI :";
                            cin >> tuls;
                            cout << endl;
                            cout << endl;
                            if (tuls == 'y')
                            {
                                List();
                            }
                        }
                        else if (kode == 0001)
                        {

                            cout << "Penerbangan          Tujuan          Tanggal          Jam Penerbangan     Harga     " << endl;
                            cout << "  JT-0581            JAKARTA        25-11-2022            17:40:00      1,000,000   " << endl;
                            cout << endl;
                            cout << "APAKAH ANDA AKAN MEMESAN TIKET INI (Y/N) :";
                            cin >> terima;
                            cout << endl;
                            cout << endl;
                            if (terima == 'y')
                            {
                                cout << "TERIMAKASIH SUDAH MEMESAN TIKET DI JUANDA LITE SEMOGA HARIMU SENIN TERUS";
                            }
                            else if (terima == 'n')
                            {
                                cout << "TERIMAKASIH SUDAH BERKUNJUNG";
                                cout << endl;
                                cout << "KETIK Y UNTUK KEMBALI :";
                                cin >> tuls;
                                cout << endl;
                                cout << endl;
                                if (tuls == 'y')
                                {
                                    List();
                                }
                            }
                            else if (kode == 6007)
                            {

                                cout << "Penerbangan          Tujuan          Tanggal          Jam Penerbangan      Harga " << endl;
                                cout << "  JT-6007             ACEH        26-11-2022            18:30:00          900,000" << endl;
                                cout << endl;
                                cout << "APAKAH ANDA AKAN MEMESAN TIKET INI (Y/N) :";
                                cin >> terima;
                                cout << endl;
                                cout << endl;
                                if (terima == 'y')
                                {
                                    cout << "TERIMAKASIH SUDAH MEMESAN TIKET DI JUANDA LITE SEMOGA HARIMU SENIN TERUS";
                                }
                                else if (terima == 'n')
                                {
                                    cout << "TERIMAKASIH SUDAH BERKUNJUNG";
                                    cout << endl;
                                    cout << "KETIK Y UNTUK KEMBALI :";
                                    cin >> tuls;
                                    cout << endl;
                                    cout << endl;
                                    if (tuls == 'y')
                                    {
                                        List();
                                    }
                                }
                                else if (kode == 0355)
                                {

                                    cout << "Penerbangan          Tujuan          Tanggal          Jam Penerbangan      Harga  " << endl;
                                    cout << "  JT-0355           BALIKPAPAN      23-11-2022            18:15:00       1,200,000" << endl;
                                    cout << endl;
                                    cout << "APAKAH ANDA AKAN MEMESAN TIKET INI (Y/N) :";
                                    cin >> terima;
                                    cout << endl;
                                    cout << endl;
                                    if (terima == 'y')
                                    {
                                        cout << "TERIMAKASIH SUDAH MEMESAN TIKET DI JUANDA LITE SEMOGA HARIMU SENIN TERUS";
                                    }
                                    else if (terima == 'n')
                                    {
                                        cout << "TERIMAKASIH SUDAH BERKUNJUNG";
                                        cout << endl;
                                        cout << "KETIK Y UNTUK KEMBALI :";
                                        cin >> tuls;
                                        cout << endl;
                                        cout << endl;
                                        if (tuls == 'y')
                                        {
                                            List();
                                        }
                                    }

                                    break;

                                case 4:
                                {
                                    cout << "==========JADWAL PENERBANGAN CITILINK==========" << endl;
                                    cout << endl;
                                    cout << "Penerbangan          Tujuan               Tanggal         Jam Penerbangan" << endl;
                                    cout << "  QG-0710            JAKARTA             24-11-2022           18:00:00   " << endl;
                                    cout << "  QG-0354         UJUNG PANDANG          23-11-2022           19:25:00   " << endl;
                                    cout << "  QG-0175      HALIM PERDANA KUSUMA      23-11-2022           23:00:00   " << endl;
                                    cout << endl;
                                    cout << endl;
                                    cout << "MASUKAN KODE PENERBANGAN :";
                                    cin >> kode;
                                    cout << endl;
                                    cout << endl;
                                }
                                    if (kode == 0710)
                                    {

                                        cout << "Penerbangan          Tujuan               Tanggal         Jam Penerbangan     Harga  " << endl;
                                        cout << "  QG-0719            JAKARTA             24-11-2022           18:00:00      1,000,000" << endl;
                                        cout << endl;
                                        cout << "APAKAH ANDA AKAN MEMESAN TIKET INI (Y/N) :";
                                        cin >> terima;
                                        cout << endl;
                                        cout << endl;
                                        if (terima == 'y')
                                        {
                                            cout << "TERIMAKASIH SUDAH MEMESAN TIKET DI JUANDA LITE SEMOGA HARIMU SENIN TERUS";
                                        }
                                        else if (terima == 'n')
                                        {
                                            cout << "TERIMAKASIH SUDAH BERKUNJUNG";
                                            cout << endl;
                                            cout << "KETIK Y UNTUK KEMBALI :";
                                            cin >> tuls;
                                            cout << endl;
                                            cout << endl;
                                            if (tuls == 'y')
                                            {
                                                List();
                                            }
                                        }
                                        else if (kode == 0354)
                                        {

                                            cout << "Penerbangan          Tujuan               Tanggal         Jam Penerbangan      Harga     " << endl;
                                            cout << "  QG-0354         UJUNG PANDANG          23-11-2022           19:25:00       1,900,000   " << endl;
                                            cout << endl;
                                            cout << "APAKAH ANDA AKAN MEMESAN TIKET INI (Y/N) :";
                                            cin >> terima;
                                            cout << endl;
                                            cout << endl;
                                            if (terima == 'y')
                                            {
                                                cout << "TERIMAKASIH SUDAH MEMESAN TIKET DI JUANDA LITE SEMOGA HARIMU SENIN TERUS";
                                            }
                                            else if (terima == 'n')
                                            {
                                                cout << "TERIMAKASIH SUDAH BERKUNJUNG";
                                                cout << endl;
                                                cout << "KETIK Y UNTUK KEMBALI :";
                                                cin >> tuls;
                                                cout << endl;
                                                cout << endl;
                                                if (tuls == 'y')
                                                {
                                                    List();
                                                }
                                            }
                                            else if (kode == 0175)
                                            {

                                                cout << "Penerbangan          Tujuan               Tanggal         Jam Penerbangan    Harga        " << endl;
                                                cout << "  QG-0179      HALIM PERDANA KUSUMA      23-11-2022           23:00:00     1,000,000      " << endl;
                                                cout << endl;
                                                cout << "APAKAH ANDA AKAN MEMESAN TIKET INI (Y/N) :";
                                                cin >> terima;
                                                cout << endl;
                                                cout << endl;
                                                if (terima == 'y')
                                                {
                                                    cout << "TERIMAKASIH SUDAH MEMESAN TIKET DI JUANDA LITE SEMOGA HARIMU SENIN TERUS";
                                                }
                                                else if (terima == 'n')
                                                {
                                                    cout << "TERIMAKASIH SUDAH BERKUNJUNG";
                                                    cout << endl;
                                                    cout << "KETIK Y UNTUK KEMBALI :";
                                                    cin >> tuls;
                                                    cout << endl;
                                                    cout << endl;
                                                    if (tuls == 'y')
                                                    {
                                                        List();
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
};

void Keluar()
{

    cout << "ANDA TELAH KELUAR";
};

int main()
{

    judul();
    header();
    regis();
    kembali();
};