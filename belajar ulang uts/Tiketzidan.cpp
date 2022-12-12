#include <iostream>
using namespace std;

int cek;
//pembersih layar
void clearscreen()
{
    system("cls");
}

//pengecekan pesanan
void order(string codepenerbangan)
{
    if (codepenerbangan == "L101")
    {
        cout << endl;
        cout << "Code Penerbangan   Asal    Tujuan  Keberangkatan" << endl;
        cout << "L101               SBY     JKT     21.00" << endl;
        cout << endl;
    }
    else if (codepenerbangan == "W102")
    {
        cout << endl;
        cout << "Code Penerbangan   Asal    Tujuan  Keberangkatan" << endl;
        cout << "W102               MLG     BGR     16.00" << endl;
        cout << endl;
    }
    else if (codepenerbangan == "Q103")
    {
        cout << endl;
        cout << "Code Penerbangan   Asal    Tujuan  Keberangkatan" << endl;
        cout << "Q103               BLI     BNDG    22.00" << endl;
        cout << endl;
    }
    else if (codepenerbangan == "L103")
    {
        cout << endl;
        cout << "Code Penerbangan   Asal    Tujuan  Keberangkatan" << endl;
        cout << "L103               SBY     YGY     17.00" << endl;
        cout << endl;
    }
    else if (codepenerbangan == "Y103")
    {
        cout << endl;
        cout << "Code Penerbangan   Asal    Tujuan  Keberangkatan" << endl;
        cout << "Y103               SDA     MLG     14.00" << endl;
        cout << endl;
    }
    else
    {
        cout << endl;
        cout << "***Tiket Tidak Tersedia***" << endl;
        cout << endl;
    }
}

//regis akun
void registrasi()
{
    string nama,asal,notelp,email;
    char ulangi = 'y';
    do 
    {
    cout << "Lakukan Registrasi Akun" << endl;
    cout << "Nama : "; cin >> nama;
    cout << "Address : "; cin >> asal;
    cout << "No. Telp : "; cin >> notelp;
    cout << "Email : "; cin >> email;
    cout << endl;
    clearscreen();
    cout << "Cek Ulang Akun Anda" << endl;
    cout << "Nama : " << nama << endl;
    cout << "Address : " << asal << endl;
    cout << "No. Telp : " << notelp << endl;
    cout << "Email : " << email << endl;
    cout << "Cek Ulang? (y/n) : ";
    cin >> ulangi;
    clearscreen();
    } while (ulangi != 'n');
    cout << "***Selamat Datang keluarga Java Airlines***" << endl;
}

//cek jadwal
void Jadwal()
{
    clearscreen();
    cout << endl;
    cout << "Penerbangan Yang Tersedia : " << endl;
    cout << "Code Penerbangan   Asal    Tujuan  Keberangkatan" << endl;
    cout << "L101               SBY     JKT     21.00" << endl;
    cout << "W102               MLG     BGR     16.00" << endl;
    cout << "Q103               BLI     BNDG    22.00" << endl;
    cout << "L103               SBY     YGY     17.00" << endl;
    cout << "Y103               SDA     MLG     14.00" << endl;
    cout << endl;
}

int checking(char booking,int ceknilai)
{
    if (booking == 'y' && ceknilai == 1)
    {
        return (cek = 1);
    }
}

//pesan
void pesantiket()
{
    int ceknilai;
    char booking,show,akhiri;
    string asal,tujuan;
    cout << endl;
    do {
    cout << "Pesan? y/n : ";cin >> akhiri;
    if (akhiri == 'n')
    {
            break;
            ceknilai = 1;
    }
    cout << "Show Jadwal Penerbangan? y/n : ";
    cin >> show;
    if (show == 'y')
    {
        Jadwal();
    }
    cout << "Lakukan Pesan Tiket" << endl;
    cout << "Asal   : "; cin >> asal;
    cout << "Tujuan : "; cin >> tujuan;
    clearscreen();
    if (asal == "Surabaya" && tujuan == "Jakarta")
    {
        cout << "Code Penerbangan   Asal    Tujuan  Keberangkatan" << endl;
        cout << "L101               SBY     JKT     21.00" << endl;
        cout << "Booking Now? y/n :"; cin >> booking;
        clearscreen();
    }
    else if (asal == "Malang" && tujuan == "Bogor")
    {
        cout << "Code Penerbangan   Asal    Tujuan  Keberangkatan" << endl;
        cout << "W102               MLG     BGR     16.00" << endl;
        cout << "Booking Now? y/n :"; cin >> booking;
        clearscreen();
    }
    else if (asal == "Bali" && tujuan == "Bandung")
    {
        cout << "Code Penerbangan   Asal    Tujuan  Keberangkatan" << endl;
        cout << "Q103               BLI     BNDG    22.00" << endl;
        cout << "Booking Now? y/n :"; cin >> booking;
        clearscreen();
    }
    else if (asal == "Surabaya" && tujuan == "Yogyakarta")
    {
        cout << "Code Penerbangan   Asal    Tujuan  Keberangkatan" << endl;
        cout << "L103               SBY     YGY     17.00" << endl;
        cout << "Booking Now? y/n :"; cin >> booking;
        clearscreen();
    }
    else if (asal == "Sidoarjo" && tujuan == "Malang")
    {
        cout << "Code Penerbangan   Asal    Tujuan  Keberangkatan" << endl;
        cout << "Y103               SDA     MLG     14.00" << endl;
        cout << "Booking Now? y/n :"; cin >> booking;
        clearscreen();
    } else 
    {
        cout << "Tidak Ditemukan Tiket Tersedia" << endl;
        booking = 'n';
    }
    } while (booking != 'y');
    ceknilai = 1;
    checking(booking,ceknilai);
    cout << "Terimakasih Telah Memesan Tiket Java Airlines" << endl;
}

//fungsi utama
int main()
{
    int akhiri = 1;
    int akun = 0;
    string codepenerbangan;
    int pesanan = 1;
    do 
    {
    cout << "Selamat Datang Di Java Airlines" << endl;
    cout << "1. Registrasi Akun" << endl;
    cout << "2. Pesan Tiket" << endl;
    cout << "3. Cek Jadwal Penerbangan" << endl;
    cout << "4. Cek Tiket Pesanan Yang Tersedia" << endl;
    cout << "5. Exit" << endl;
    int pilihan;
    cout << "Pilihan Anda : ";
    cin >> pilihan;
    if (pilihan == 1)
    {
        clearscreen();
        registrasi();
        akun = 1;
    }
    if (pilihan == 2 && akun == 1)
    {
        clearscreen();
        pesantiket();
    }
    if (pilihan == 2 && akun == 0 )
    {
        clearscreen();
        cout << "***Buat Akun Terlebih Dahulu***" << endl;
    }
    if (pilihan == 3)
    {
        clearscreen();
        Jadwal();
    }
    if (pilihan == 4 && cek == 0)
    {
        clearscreen();
        cout << "***Anda Belum Memesan Tiket***" << endl;
    }
    if (pilihan == 4 && cek > 0)
    {
        char ulangi;
        do {
            ulangi = 'y';
        cout << "Cek Pesanan Tiket Yang Tersedia" << endl;
        cout << "Code Penerbangan   : "; cin >> codepenerbangan;
        order(codepenerbangan);
        cout << "Ulangi? y/n :";
        cin >> ulangi;
        } while(ulangi != 'n');
    }
    if (pilihan == 5)
    {
        akhiri = 4;
    }
    } while (akhiri != 4);
    clearscreen();
    return 0;
}