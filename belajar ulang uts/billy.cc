// #include <iostream>
// using namespace std;

// int main()
// {
//     int awal, akhir,n,mod,jumlah_modulus;
//     cout << "=== PROGRAM BILANGAN PRIMA ===" << endl;
//     cout << "Masukkan Bilangan Awal : "  ;
//     cin >> awal ;
//     cout << "Masukkan Bilangan Akhir : " ;
//     cin >> akhir ;
//     cout << "Bilangan Prima antara " << awal << " - " << akhir << " adalah :" ;

//     do{
//         n=1;
//         jumlah_modulus=0;
//         do{
//             mod = awal%n;
//             if(mod == 0)
//                 jumlah_modulus++;
//             else
//                 jumlah_modulus=jumlah_modulus;
//         }while(n <= awal);
//         if(jumlah_modulus == 2)
//             cout << awal ;
//         else
//             cout << "" ;
//     } while (awal <= akhir);
//     return 0;

// }

#include <iostream>
using namespace std;

int main(){
	int bil;
	cout<<"Menampilkan Deret Bilangan Prima 1-100";
	cout<<endl;

	for(int i=1;i<=100;i++){
		bil=0;
		for(int j=1;j<=i;j++){
			if(i%j==0){
				bil=bil+1;
			}
		}
		if (bil==2)
		cout<<i<<" ";
	}
}