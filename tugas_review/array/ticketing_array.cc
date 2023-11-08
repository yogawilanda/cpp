#include <cstdlib>
#include <iostream>

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

void pemesananViaKodeArray(void);

void displayHarga(void);

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
string promoTeks = "INFORMASI:\nTiket Promo dari ";
string promoTeksAkhiran = " dengan pembelian untuk 2 orang diskon 5%,\n3 = 10%\n10+ diskon 50%\n";

string eco = "ekonomi",
       busy = "business",
       exe = "executive",
       grd = "Garuda Airline",
       lion = "Lion Air",
       cl = "City Link",
       jam1 = "12.00",
       jam2 = "13.00",
       jam3 = "15.00",
       jam4 = "17.00",
       home = "Menu Utama",
       pilihanMaskapai = "1. Garuda\n2. Lion\n3. Citylink\n",
       outPilihan = "Masukan nomor sesuai dengan pilihan\n";

string jenisMaskapai[] = {
    grd, lion, cl};

string kelasMaskapai[] = {
    busy,
    exe,
    eco,
};
int maskapai, kelas, jam;

string jamBerangkat[] = {
    jam1, jam2, jam3, jam4};
int forTabel, forMaskapai, forHarga;
int hargaTotal[3][3][4] = {
    {
        {111, 112, 113, 114},
        {121, 122, 123, 124},
        {131, 132, 133, 134},
    },
    {
        {211, 212, 213, 214},
        {221, 222, 223, 224},
        {231, 232, 233, 234},
    },
    {
        {311, 312, 313, 314},
        {321, 322, 323, 324},
        {331, 332, 333, 334},
    },

};

// todo: on work
void inputPemesanan()
{

    displayHarga();

    cout << "\n\nPilih Maskapai\n1. Garuda\n2. Citylink\n3. Lion\nMasukan maskapai\n";
    cin >> maskapai;

    cout << "Pilih Kelas Penerbangan\n1. Ekonomi\n2. Bisnis\n3. Eksekutif\nMasukan Kelas\n";
    cin >> kelas;

    cout << "Pilih Jam Penerbangan\n1. 12.00\n2. 13.00\n3. 15.00\n4. 17.00\nMasukan Pilihan Jam\n";
    cin >> jam;

    // cout << "Pilihan anda adalah" << maskapai << kelas << jam;

    cout << jenisMaskapai[maskapai - 1] << " " 
         << kelasMaskapai[kelas - 1] << " " 
         << jamBerangkat[jam - 1] << " " 
         << hargaTotal[maskapai - 1][kelas - 1][jam - 1] << endl;
}

// Pemuat Aplikasi
int main()
{
    judul();
    menuUtama();
    // clearScreen();
}

// Output Halaman Penampil data berdasarkan array
void displayHarga()
{

    // Judul keterangan awal
    cout << "Jadwal Penerbangan Pada Hari Ini (13 Desember 2022)" << "\n\n";

    // loop print tabel maskapai
    for (forTabel = 0; forTabel < 3; forTabel++)
    {
        // display jenis maskapai
        cout << "\tMaskapai " << jenisMaskapai[forTabel] << "\n\n";

        for (forMaskapai = 0; forMaskapai < 3; forMaskapai++)
        {
            // display kelas maskapai
            cout << kelasMaskapai[forMaskapai] << "         \t\t";

            for (forHarga = 0; forHarga < 4; forHarga++)
            {

                cout << hargaTotal[forTabel][forMaskapai][forHarga] << "       ";
            }

            cout << endl;
        }

        cout << endl ;
    }

    // align row kosong untuk merapikan
    cout << "\t\t\t      " ;

    // printing output Jam Penerbangan
    for (int forJam = 0; forJam < 4; forJam++)
    {
        cout << "  " << jamBerangkat[forJam] << "   ";
    }

    cout << endl;
    cin >> pilihan;



    switch (pilihan)
    {
    case 0:
        clearScreen();
        menuUtama();
        break;
    
    default:
        break;
    }
}

// Judul atau pengantar aplikasi saat dibuka
void judul()
{
    string dekorator = "\t\t\t===============================================================\n";
    string judulTeks = "\t\t\t=========  Aplikasi Pemesanan Maskapai Penerbangan  ===========\n";

    for (int i = 0; i < 3; ++i)
    {

        cout << dekorator;
    }

    cout << judulTeks;

    for (int i = 0; i < 3; ++i)
    {
        cout << dekorator;
    }

    cout << "\t\t\t\t\tKetik apapun untuk memulai";

    getchar();
    clearScreen();
};

// Halaman yang menunjukan menu utama aplikasi saat dibuka
void menuUtama()
{
    cout << "Opsi Pilihan Yang tersedia" << endl;
        cout << "1. Registrasi User\n"
             << "2. Jadwal Destinasi Penerbangan\n"
             << "3. Pesan Tiket\n4. Display Harga berdasarkan kelas dan jam penerbangan\n"
             << "5. Menu Utama\n"
             << "0. Selesai \n"
             << "Pilihan anda: (Ketik Pilihan 0 - 3) : \n";

    cin >> pilihan;

    do
    {
        
        switch (pilihan)

        {
        case 1:
            clearScreen();
            registrasi();
            break;

        case 2:

            clearScreen();
            jadwalTiket();
            break;

        case 3:
            clearScreen();
            pemesananTiket();

            break;
        case 4:
            clearScreen();
            displayHarga();
            cout << endl << endl << "Ketik 0 untuk kembali ke menu utama"<< endl;
            break;

        case 5:
            clearScreen();
            menuUtama();
            break;

        case 0:
            clearScreen();
            cout << "Terima kasih telah menggunakan aplikasi kami...";
            // menuUtama();
            break;

        default:
            clearScreen();
            cout << "Pilihan tidak ditemukan, Pilih angka yang telah disediakan\n";
            menuUtama();
            break;
        }

    } while (pilihan != 0);

    cout << "\nKetik apapun untuk keluar";
    getchar();
}

// fungsi registrasi yang membutuhkan input dari user
// input : nama, nomor handphone, dan alamat email
void registrasi()
{
    string namaUser, email, nomorHP;

    cout << "============   Registrasi Akun Baru   =============" << endl;

    cout << "Nama anda : ";
    cin >> namaUser;
    cout << "E-mail Anda : ";
    cin >> email;
    cout << "Nomor HP Anda : ";
    cin >> nomorHP;

    clearScreen();

    cout << "============  Rekapitulasi Pendaftaran  ==============\n";
    cout << "\n\nNama: " + namaUser + " \nEmail: " + email + "\nNomor HP: " << nomorHP << endl;
    cout << "\n\nStatus: Pendaftaran sukses\nData anda tersimpan di kami"
         << "\n\nKembali ke menu utama? (Ya/Tidak)\n";
    cin >> stringPilihan;

    clearScreen();
    konfirmasi();
};

// konfirmasi yang digunakan untuk memastikan user telah mendaftar
void konfirmasi() { (stringPilihan == "Ya" || "ya") ? menuUtama() : registrasi(); };

// Untuk menghapus output yang sudah tidak diperlukan
void clearScreen() { system("CLS"); };

void exit() { exit(); };

// Alur Pemesanan Tiket
void pemesananTiket()
{
    string destinasi, maskapai;

    string jenisPenerbangan = "1. Domestik \n2. Internasional\n3. Pesan Via Kode",
           jenisPenerbanganEnd = "\nPemesanan Tiket\nMasukan Penerbangan yang ingin dituju\n";

    char opt;

    int asal, tujuan, jumlahSeatYangDipesan, pilihanMaskapai;
    int a1, a2, a3;

    cout << jenisPenerbangan << jenisPenerbanganEnd;
    cin >> destinasi;

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
                menuUtama();

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
                menuUtama();

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
    else if (destinasi == "Array" || destinasi == "3")
    {
        clearScreen();
        inputPemesanan();
        cout << "Pemesanan berdasarkan kode penerbangan \n\n"
             << "Masukan maskapai, kelas, dan kode penerbangan\n\n";

        
        
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
        cout << "anda tidak memesan apapun\n";
        clearScreen();
        menuUtama();
    }
    else

    {
        cout << "anda tidak memesan apapun\n";
        clearScreen();
        menuUtama();
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
         << "07.05 - 07.50\t\t"
         << "$ 120\n";
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