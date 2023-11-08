#include <iostream>

using namespace std;

void menuUtama(int *pilInt);

void penjumlah(int *, int *);
void pengurang(int *, int *);
void pembagi(int *, int *);
void perkalian(int *, int *);

int main() 
{
int pointer;

menuUtama(&pointer);

}

void penjumlah(int *pointer1, int *pointer2)
{
int angka1, angka2;

*pointer1 = angka1, *pointer2 = angka2;

cout << "Penjumlahan Menggunakan Pointer";

cin >> angka1 >> angka2;

cout << angka1 + angka2 << endl;

}

void pengurang(int *pointer1, int *pointer2)
{
int angka1, angka2;

*pointer1 = angka1, *pointer2 = angka2;

cout << "Pengurangan Menggunakan Pointer";

cin >> angka1 >> angka2;

cout << angka1 - angka2 << endl;

}

void pembagi(int *pointer1, int *pointer2)
{
int angka1, angka2;

*pointer1 = angka1, *pointer2 = angka2;

cout << "Pembagian Menggunakan Pointer";

cin >> angka1 >> angka2;

cout << angka1 / angka2 << endl;

}

void perkalian(int *pointer1, int *pointer2)
{
int angka1, angka2;

*pointer1 = angka1;
*pointer2 = angka2;

cout << "Perkalian Menggunakan Pointer";

cin >> angka1 >> angka2;

cout << angka1 * angka2 << endl;

}



void menuUtama(int* pilInt) 
{
string judul = "Kalkulator menggunakan pointers";
string pilihan = "1. Penjumlahan\n2. Pengurangan\n3. Perkalian\n4. Pembagian";

int input;

cout << judul << endl << pilihan;

*pilInt = input ;

cin >> input;

switch (input)
{
case 1:
    penjumlah(pilInt, pilInt);
    break;
case 2:
    pengurang(pilInt, pilInt);
    break;
case 3:
    pembagi(pilInt, pilInt);
    break;
case 4:
    perkalian(pilInt, pilInt);
    break;

default:
    break;
}

}