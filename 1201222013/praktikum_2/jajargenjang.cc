#include <iostream>
 

using namespace std;

int main(){

float alas,tinggi,abSide,bcSide,luas,keliling;
char reuse;

do
{
cout<<endl<<endl<<endl;
cout<<"----Menghitung Luas dan Keliling Jajar Genjang----"<<endl;

cout<<"Masukan Alas = ";
cin>>alas;

cout<<"Masukan Tinggi = ";
cin>>tinggi;

cout<<"Masukan ab side = ";
cin>>abSide;

cout<<"Input bc side = ";
cin>>bcSide;

// logic aritmatik perhitungan luas
luas=alas*tinggi;

cout<<endl<<endl<<endl;
cout<<"Hasil Perhitungan";
cout<<endl<<endl<<endl;

cout<<"luas ="<<luas<<endl;


keliling=2*(abSide+bcSide);

//rumus keliling jajar genjang akan di simpan pada variabe keliling 
cout<<"keliling ="<<keliling<<endl;

cout<<"\n\nIngin Mengulang Perhitungan kembali? [Y/T] : ";cin>>reuse;
}
while(reuse == 'y' || reuse == 'Y');
cout<<"\n";

return 0;
//return 0 merupukan body yang digunakan jika user telah menyelesaikan programnya 
}