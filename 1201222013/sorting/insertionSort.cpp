#include <iostream>
using namespace std;

void printArray(int data[], int panjangArray)
{
    for (int i = 0; i < panjangArray; i++)
    {
        cout << data[i] << " ";
    }
    cout << endl;
}

void insertionSort(int data[], int panjangArray)
{
    for (int step = 1; step < panjangArray; step++)
    {
        int simpanan = data[step];
        int kolomYgDiCek = step - 1;

        while (simpanan > data[kolomYgDiCek] && kolomYgDiCek >= 0)
        {
            data[kolomYgDiCek + 1] = data[kolomYgDiCek];
            --kolomYgDiCek;
        }
        data[kolomYgDiCek + 1] = simpanan;
    }
}

int main()
{
    int data[] = {9, 5, 1, 4, 3};
    int panjang = sizeof(data) / sizeof(data[0]);
    insertionSort(data, panjang);
    cout << "Sorted array in ascending order:\n";
    printArray(data, panjang);
}