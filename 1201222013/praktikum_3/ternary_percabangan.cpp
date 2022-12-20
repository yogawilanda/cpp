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

        cout<<"JENIS PENYAKIT MATA"<<endl<<"     Mataku attiiiit :("<<endl<<"     Kelilipan bambu runcing"<<endl<<"     Terkena debu di senja hari"<<endl;
        cin>>jenis;
        if (jenis == 1)
        {
            cout<<"Ututututu kacian :<";
        } else if (jenis == 2)
        {
            cout<<"abis perang dek?";
        }
        
        else {
            cout<<"mungkin anda perlu menghubungi mantan :)"<<endl;
        }
        
        break;
    
    case 2:

    cout<<"JENIS PENYAKIT JANTUNG"<<endl<<"     JANTUNG KOLONEL "<<endl<<"     JANTUNG NOT RESPONDING"<<endl<<"     JANTUNG NICE TRY"<<endl;
        cin>>jenis;
        (jenis) ?  (1 ? "Anda Sehat" : "Tidak") : (2 ? "halo" : "u");

        cout<<jenis;

        
        break; 
        
    default:
        cout<<"Anda tidak memilih apapun!!!"<<endl;

        break;
    }
}
