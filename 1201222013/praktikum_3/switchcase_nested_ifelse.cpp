#include <iostream>


using namespace std;

int main () {
    int penyakit, harga, jenis;

    string hitung = "Hitung Biaya Operasi ";

    cout<<hitung<<"Mata"<<endl;

    cout<<hitung<<"Jantung"<<endl;

    cout<<"Masukkan pilihan anda : ";

    cin>>penyakit;

    cout<<endl;




    switch (penyakit)
    {
    case 1:

        cout<<"JENIS PENYAKIT MATA"<<endl<<"     (1)Mataku attiiiit :("<<endl<<"     (2)Kelilipan bambu runcing"<<endl<<"     (3)Terkena debu di senja hari"<<endl;
        
        cout<<"Pilih Angka Sesuai Penyakit: "<<endl;
        cin>>jenis;
        if (jenis == 1)
        {
            cout<<"Ututututu kacian :<";
        } else if (jenis == 2)
        {
            cout<<"abis perang dek?";
        } else if (jenis == 3) {
            cout<<"Karena anda juga suka lagu indie maka gratis";
        }
        
        else {
            cout<<"mungkin anda perlu menghubungi mantan :)"<<endl;
        }
        
        break;
    
    case 2:

    cout<<"JENIS PENYAKIT JANTUNG"<<endl<<"     JANTUNG KOLONEL "<<endl<<"     JANTUNG NOT RESPONDING"<<endl<<"     JANTUNG NICE TRY"<<endl;
        cin>>jenis;
        if (jenis == 1)
        {
            cout<<"HUBUNGI 911"<<endl;
        } else if (jenis == 2)
        {
            cout<<"1999 DIAMOND MOBEL LEJEN"<<endl;
        }
        
        else {
            cout<<"mungkin anda perlu menghubungi mantan :)"<<endl;
        }
        
        break; 
        
    default:
        cout<<"Anda tidak memilih apapun!!!"<<endl;

        break;
    }
}
