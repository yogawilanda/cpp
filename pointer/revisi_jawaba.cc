#include <iostream>

using namespace std;




int penjumlah(int* angka1, int* angka2, int *hasil)
{
   return *hasil = *angka1 +  *angka2;
};

int pengurang(int* angka1, int* angka2, int *hasil)
{
    return *hasil = *angka1 - *angka2;
};

void pembagi(int* angka1, int* angka2, int *hasil)
{
    *hasil = *angka1 +  *angka2;
};

void pengali(int* angka1, int* angka2, int *hasil)
{
    *hasil = *angka1 +  *angka2;
};



int main() 
{
int* pointer, angka1, angka2, hasil;
char kalkulator;
int input;
string judul = "Kalkulator menggunakan pointers";
string pilihan = "1. Penjumlahan\n2. Pengurangan\n3. Perkalian\n4. Pembagian";

cout << judul << endl << pilihan;

cin >> kalkulator;



cin >> angka1 >> kalkulator >> angka2;

hasil = angka1 + kalkulator + angka2;

switch (kalkulator)
{
case '+':
    penjumlah(&angka1, &angka2, &hasil);
    break;
case '-':
    pengurang(&angka1, &angka2, &hasil);
    // pengurang(pilInt, pilInt);
    break;
case '*':
    pengali(&angka1, &angka2, &hasil);
    // pembagi(pilInt, pilInt);
    break;
case '/':
    pembagi(&angka1, &angka2, &hasil);
    // perkalian(pilInt, pilInt);
    break;

default:
    break;
}

cout << endl << hasil << " hehe";
}