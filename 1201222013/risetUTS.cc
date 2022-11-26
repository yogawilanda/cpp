#include <iostream>
#include <cstdlib>

using namespace std;

// judul teks
void judul();

void registrasi(void);
void clearScreen(void);
void menuUtama(void);
void jadwalTiket(void);
void konfirmasi(void);
void pemesananTiket(void);

void kalkulasiPemesanan(void);

void jadwalSBYDomestik(void);
void jadwalJKTDomestik(void);
void jadwalBLDomestik(void);

void exit(void);

void pemesananGrdSBYCGK2(void);

// PackageFunction Domestik Surabaya
void pemesananLionSUBHLP1(void);
void pemesananGarudaSUBCGK2(void);
void pemesananCitySUBDPS3(void);

// PackageFunction Domestik Jakarta
void pemesananLionCGKHLP1(void);
void pemesananCityHLPSUB2(void);
void pemesananCityCGKDPS3(void);

// PackageFunction Domestik Bali
void pemesananLionDPSSUB1(void);
void pemesananCityDPSHLP2(void);
void pemesananCityDPSHLP3(void);

void strukPembelian(void);

void cta(void);

int pilihan, harga, jumlahBook;
int hargaJadwalSUBHLP = 40;
int hargaJadwalSUBCGK = 80;
int hargaJadwalSUBDPS = 120;

int hargaJadwalCGKHLP = 60;
int hargaJadwalHLPSUB = 90;
int hargaJadwalCGKSUB = 150;

int hargaJadwalBLJKT = 120;
int hargaJadwalBLJKT2 = 200;
int hargaJadwalBLJKT3 = 100;

string stringPilihan;
string jawabanStringPilihan = "Ya";
string jkt = "JAKARTA", sby = "SURABAYA", bl = "BALI";
string strip = " ======================= ", jadwalTitle = "JADWAL PENERBANGAN ASAL";



// Pemuat Aplikasi
int main()
{
    judul();
    menuUtama();
    clearScreen();
}

// Judul atau pengantar aplikasi saat dibuka
void judul()
{
    string dekorator = "\t\t\t===============================================================\n";
    string judulTeks = "\t\t\t=========  Aplikasi Pemesanan Maskapai Penerbangan  ===========\n";

    for (int i = 0; i < 3; ++i) { cout << dekorator; }

    cout << judulTeks;

    for (int i = 0; i < 3; ++i) { cout << dekorator; }

    cout << "\t\t\t\t\tKetik apapun untuk memulai";

    getchar(); clearScreen();
};

// Halaman yang menunjukan menu utama aplikasi saat dibuka
void menuUtama()
{

    cout << "Opsi Pilihan Yang tersedia" << endl;
    cout << "1. Registrasi User\n"
         << "2. Jadwal Destinasi Penerbangan\n"
         << "3. Pesan Tiket\n4. Menu Utama\n"
         << "0. Selesai \n"
         << "Pilihan anda: (Ketik Pilihan 0 - 3) : \n";

    do
    {
        cin >> pilihan;
        switch (pilihan)

        {
        case 1:
            clearScreen(); registrasi();
            break;

        case 2:

            clearScreen(); jadwalTiket();
            break;

        case 3:
            clearScreen(); pemesananTiket();
            break;
        case 4:
            clearScreen(); menuUtama();
            break;

        default:
            cout << "Pilihan tidak ditemukan, Pilih angka yang telah disediakan\n";
            clearScreen(); menuUtama();
            break;
        }

    } while (pilihan != 0);

    cout << "Keluar dari Aplikasi?\nKetik apapun untuk keluar : ";
}

// fungsi registrasi yang membutuhkan input dari user
// input : nama, nomor handphone, dan alamat email
void registrasi()
{
    string namaUser, email, nomorHP;

    cout << "============   Registrasi Akun Baru   =============" << endl;

    cout << "Nama anda : "; cin >> namaUser;
    cout << "E-mail Anda : "; cin >> email;
    cout << "Nomor HP Anda : "; cin >> nomorHP;
    
    clearScreen();

    cout << "============  Rekapitulasi Pendaftaran  ==============\n";
    cout << "\n\nNama: " + namaUser + " \nEmail: " + email + "\nNomor HP: " << nomorHP << endl;
    cout << "\n\nStatus: Pendaftaran sukses\nData anda tersimpan di kami"
         << "\n\nKembali ke menu utama? (Ya/Tidak)\n"; cin >> stringPilihan;

    clearScreen(); konfirmasi();
};

// konfirmasi yang digunakan untuk memastikan user telah mendaftar
void konfirmasi() { (stringPilihan == "Ya" || "ya") ? menuUtama() : registrasi(); };

// Untuk menghapus output yang sudah tidak diperlukan
void clearScreen() { system("CLS"); };

void exit() { exit();};

// Alur Pemesanan Tiket
void pemesananTiket()
{
    string destinasi;

    string jenisPenerbangan = "1. Domestik \n2. Internasional",
           jenisPenerbanganEnd = "\nPemesanan Tiket\nMasukan Penerbangan yang ingin dituju\n";

    char opt;

    int asal, tujuan, jumlahSeatYangDipesan, pilihanMaskapai;

    cout << jenisPenerbangan << jenisPenerbanganEnd; cin >> destinasi;

    if (destinasi == "Domestik" || destinasi == "1")
    {
    penerbanganDomestik:
        clearScreen();
        cout << "=========== Penerbangan Domestik ==============\n"
             << "Jadwal dan Maskapai yang tersedia di domestik adalah \n"
             << "1. Surabaya\n2. Jakarta\n3. Bali\n4. Menu Utama\n"
             << "Pilih tujuan sesuai angka yang tersedia\n";
        cin >> asal;

        switch (asal)

        {
        case 1:
            clearScreen();
            jadwalSBYDomestik();
            cout << "\nPilih Maskapai sesuai angka yang tersedia (Angka)\n";
            cin >> pilihanMaskapai;

            // masukan kode maskapai yang tersedia
            switch (pilihanMaskapai)
            {
            case 1:
                pemesananLionSUBHLP1();
                break;

            case 2:
                pemesananGarudaSUBCGK2();
                break;

            case 3:
                pemesananCitySUBDPS3();
                break;
            case 4:
                menuUtama();
                break;

            default:

                break;
            }

            break;

        case 2:
            clearScreen();
            jadwalJKTDomestik();

            cout << "\nPilih Maskapai sesuai angka yang tersedia (Angka)\n";
            cin >> pilihanMaskapai;

            switch (pilihanMaskapai)
            {
            case 1:
                pemesananLionCGKHLP1();
                break;

            case 2:
                pemesananCityHLPSUB2();
                break;

            case 3:
                pemesananCityCGKDPS3();
                break;
            case 4:
                menuUtama();
                break;

            default:

                break;
            }

            break;

        case 3:
            clearScreen();
            jadwalBLDomestik();

            cout << "\nPilih Maskapai sesuai angka yang tersedia (Angka)\n";
            cin >> pilihanMaskapai;

            switch (pilihanMaskapai)
            {
            case 1:
                pemesananLionDPSSUB1();
                break;

            case 2:
                pemesananCityDPSHLP2();
                break;

            case 3:
                pemesananCityDPSHLP3();
                break;

            case 4:
                menuUtama();
                break;

            default:

                break;
            }

        default:
            cout << "Pilihan anda tidak ditemukan :( coba hal lain";
            menuUtama();
            break;
        }
    }
    else if (destinasi == "Internasional" || destinasi == "2")
    {
        clearScreen();
        cout << "Fitur Internasional Masih Dalam Pengembangan\n\n";
        cout << "Pilihan anda tidak ditemukan\n\tCoba Lagi?\n(y/n)\n";

        cin >> opt;

        switch (opt)
        {
        case 'y':
            pemesananTiket();
            break;

        default:
            menuUtama();
            break;
        }
    }
    else
    {
 
        cout << "Pilihan anda tidak ditemukan\n\tCoba Lagi?\n(y/n)\n";

        cin >> opt;

        switch (opt)
        {
        case 'y':
            pemesananTiket();
            break;

        default:
            main();
            break;
        }
    }
};

// Fungsi untuk menampilkan jadwal penerbangan yang tersedia.
void jadwalTiket()
{
    cout << '\n';
    jadwalSBYDomestik();
    cout << '\n';
    jadwalJKTDomestik();
    cout << '\n';
    jadwalBLDomestik();
    cout << '\n';

    cta();
};

string promoTeks = "INFORMASI:\nTiket Promo dari ";
string promoTeksAkhiran = " dengan pembelian untuk 2 orang diskon 5%,\n3 = 10%\n10+ diskon 50%\n";

void cta()
{
    char ctaOpt;

    pesanTiket:
    cout << "Ingin pesan tiket sekarang? \n (Y/N)\n";
    cin >> ctaOpt;

    switch (ctaOpt)
    {
    case 'Y':
        clearScreen();
        pemesananTiket();
        break;

    case 'N':
        clearScreen();
        menuUtama();
        break;

    default:
        cout << "Anda tidak memilih apapun\n";
        goto pesanTiket;
        break;
    }
};

// Jadwal Domestik Surabaya
void jadwalSBYDomestik()
{
    cout << strip + jadwalTitle + " " + sby << strip << "\n";
    cout << "\t\n1. Lion Air\t\tSUB-CGK\t\t" << 50 - 5 << " Menit\t07.05 - 07.50\t\t$ 40"
         << "\n2. Garuda\t\tSUB-DPS\t\t" << 45 - 5 << " Menit\t07.10 - 07.50\t\t$ 80"
         << "\n3. City Link\t\tSUB-HLP\t\t" << 45 - 5 << " Menit\t08.10 - 08.50\t\t$ 120\n";
};

void jadwalJKTDomestik()
{   
    cout << strip + jadwalTitle + " " + jkt << strip << "\n";
    cout << "\t\n1. Lion Air\t\tCGK-HLP\t\t" << 50 - 5 << " Menit\t07.05 - 07.50\t\t$ 120"
         << "\n2. Batik Air\t\tHLP-SUB\t\t" << 45 - 5 << " Menit\t07.10 - 07.50\t\t$ 200"
         << "\n3. City Link\t\tHLP-SUB\t\t" << 45 - 5 << " Menit\t08.10 - 08.50\t\t$ 100\n";
};

void jadwalBLDomestik()

{   
    cout << strip + jadwalTitle + " " + bl << strip << "\n";
    cout << "\t\n1. Lion Air\t\tHLM-SUB\t\t" << 50 - 5 << " Menit\t"
         << "07.05 - 07.50\t\t"
         << "$ 120"
         << "\n2. Garuda\t\tHLM-SUB\t\t" << 45 - 5 << " Menit\t"
         << "07.10 - 07.50\t\t"
         << "$ 200"
         << "\n3. City Link\t\tHLM-SUB\t\t" << 45 - 5 << " Menit\t"
         << "08.10 - 08.50\t\t"
         << "$ 100";
    cout << '\n';
};

// Kalkulasi Diskon untuk pengguna
void kalkulasiPemesanan()
{

    cout << "Masukan jumlah penumpang yang ingin memesan\n(angka 1 - tidak terbatas, 0 untuk kembali ke menu utama)\n";
    cin >> jumlahBook;

    if (jumlahBook == 2)
    {
        int diskon2Orang = harga * 0.95;
        int hargaNormal = jumlahBook * harga;
        int totalDiskon = jumlahBook * diskon2Orang;
        cout << "Harga Normal: " << hargaNormal << "\n";
        cout << "Harga Promo: " << totalDiskon << "\n";
        cout << "Anda Hemat : " << hargaNormal - totalDiskon << "\n";
    }
    else if (jumlahBook == 1)
    {
        int diskon3Orang = harga * 1;
        int hargaNormal = jumlahBook * harga;
        int totalDiskon = jumlahBook * diskon3Orang;
        cout << "Harga Normal: " << hargaNormal << "\n";
        cout << "Harga Promo: " << totalDiskon << "\n";
        cout << "Anda Hemat : " << hargaNormal - totalDiskon << "\n";
    }
    else if (jumlahBook < 4)
    {
        int diskon3Orang = harga * 0.9;
        int hargaNormal = jumlahBook * harga;
        int totalDiskon = jumlahBook * diskon3Orang;
        cout << "Harga Normal: " << hargaNormal << "\n";
        cout << "Harga Promo: " << totalDiskon << "\n";
        cout << "Anda Hemat : " << hargaNormal - totalDiskon << "\n";
    }
    else if (jumlahBook >= 10)
    {
        int diskon10orang = harga * 0.5;
        int hargaNormal = jumlahBook * harga;
        int totalDiskon = jumlahBook * diskon10orang;
        cout << "Harga Normal: " << hargaNormal << "\n";
        cout << "Harga Promo: " << totalDiskon << "\n";
        cout << "Anda Hemat : " << hargaNormal - totalDiskon << "\n";
    }
    else if (jumlahBook == 0)
    {
        clearScreen();
        menuUtama();
    }
    else

    {
        cout << "Harga Normal totalnya: " << hargaJadwalSUBHLP * jumlahBook;
    };

    cout << "Status : Pemesanan sukses\nApakah anda ingin mencetak struk pembelian? y/n :\n";

    cin >> stringPilihan;

    clearScreen();

    (stringPilihan == "y") ? strukPembelian() : menuUtama();
}

// Pemesanan Bagian Domestik Surabaya.
void pemesananLionSUBHLP1()
{
    harga = hargaJadwalSUBHLP;
    cout << "\t\n1. Lion Air\t\tSUB-HLP\t\t" << 50 - 5 << " Menit\t"
         << "07.05 - 07.50\t\t"
         << "$ 40\n";
    cout << promoTeks << "Surabaya - Jakarta via Bandara Halim Perdana Kusuma"
         << promoTeksAkhiran;

    kalkulasiPemesanan();
};

void pemesananGarudaSUBCGK2()
{
    harga = hargaJadwalSUBCGK;
    cout << "\n2. Garuda\t\tSUB-CGK\t\t" << 45 - 5 << " Menit\t07.10 - 07.50\t\t$ 80\n";

    cout << promoTeks
         << "Surabaya - Jakarta via Bandara Soekarno Hatta"
         << promoTeksAkhiran;

    kalkulasiPemesanan();
};

void pemesananCitySUBDPS3()
{
    harga = hargaJadwalSUBDPS;
    cout << "\n3. City Link\t\tSUB-DPS\t\t45 - 5 Menit\t08.10 - 08.50\t\t$ 120\n";

    cout << promoTeks
         << "Surabaya - Bali via Bandara Ngurah Rai"
         << promoTeksAkhiran;

    kalkulasiPemesanan();
};

// Pemesanan Bagian Domestik Jakarta
void pemesananLionCGKHLP1()
{
    harga = hargaJadwalCGKHLP;
    cout << "\t\n1. Lion Air\t\tCGK-HLP\t\t" << 50 - 5 << " Menit\t"
         << "07.05 - 07.50\t\t"
         << "$ 60\n";
    cout << promoTeks
         << "Jakarta - Jakarta via Bandara Soekarno Hatta"
         << promoTeksAkhiran;

    kalkulasiPemesanan();
};

void pemesananCityHLPSUB2()
{
    harga = hargaJadwalHLPSUB;
    cout << "\n2. Lion\t\tHLP-SUB\t\t" << 45 - 5 << " Menit\t07.10 - 07.50\t\t$ 90\n";

    cout << promoTeks
         << "Jakarta - Surabaya via Bandara Halim Perdana Kusuma"
         << promoTeksAkhiran;

    kalkulasiPemesanan();
};

void pemesananCityCGKDPS3()
{
    harga = hargaJadwalCGKSUB;
    cout << "\n3. City Link\t\tSUB-DPS\t\t45 - 5 Menit\t08.10 - 08.50\t\t$ 150\n";

    cout << promoTeks
         << "Jakarta - Bali via Bandara Soekarno Hatta"
         << promoTeksAkhiran;

    kalkulasiPemesanan();
};

// Todo: Pemesanan Global Internasional
// -------- //

// Pemesanan Bagian Domestik Bali
void pemesananLionDPSSUB1()
{
    harga = hargaJadwalBLJKT;
    cout << "\t\n1. Lion Air\t\tCGK-HLP\t\t" << 50 - 5 << " Menit\t"
         << "07.05 - 07.50\t\t" << "$ 120\n";
    cout << promoTeks
         << "Bali - Surabaya via Bandara Ngurah Rai"
         << promoTeksAkhiran;

    kalkulasiPemesanan();
};

void pemesananCityDPSHLP2()
{
    harga = hargaJadwalBLJKT2;
    cout << "\n2. Batik Air\t\tHLP-SUB\t\t" << 45 - 5 << " Menit\t07.10 - 07.50\t\t$ 200\n";

    cout << promoTeks
         << "Bali - Jakarta via Bandara Ngurah Rai"
         << promoTeksAkhiran;

    kalkulasiPemesanan();
};

void pemesananCityDPSHLP3()
{
    harga = hargaJadwalBLJKT3;
    cout << "\n3. City Link\t\tSUB-DPS\t\t45 - 5 Menit\t08.10 - 08.50\t\t$ 100\n";

    cout << promoTeks
         << "Bali - Jakarta via Bandara Ngurah Rai"
         << promoTeksAkhiran;

    kalkulasiPemesanan();
};

// Sticker Struk Pembelian
void strukPembelian()
{

    string a = "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
    string b = "++++++++++++++++++++++++++ Kode Pembelian : 0013SUBCGK +++\n";
    cout << "+++++++++++++++++++ STRUK PEMBELIAN ++++++++++++++++++++++\n";
    cout << "++++++++ Catat Atau Tunjukan foto ini ke bandara +++++++++\n";
    cout << a << a << a << a;
    cout << "++++++++++++++++++++++++++ Kode Pembelian : 0013SUBCGK +++\n";
    cout << a << "Apakah anda ingin kembali ke main menu? y/n :\n";

    cin >> stringPilihan;

    clearScreen();

    (stringPilihan == "y") ? menuUtama() : pemesananTiket();
};