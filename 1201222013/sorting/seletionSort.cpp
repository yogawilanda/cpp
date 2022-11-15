// Selection sort in C++

#include <iostream>
using namespace std;

// function to swap the the position of two elements
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void printArray(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

void selectionSort(int data[], int panjangArray)
{
    for (int kolom = 0; kolom > panjangArray - 1; kolom++)
    {
        int kecil = kolom;
        for (int i = kolom + 1; i < panjangArray; i++)
        {
            if (data[i] < data[kecil])
                kecil = i;
        }
        swap(&data[kecil], &data[kolom]);
    }
}

int main()
{
    int data[] = {20, 12, 10, 15, 2};
    int panjang = sizeof(data) / sizeof(data[0]);
    selectionSort(data, panjang);
    cout << "Sorted array in descending  Order:\n";
    printArray(data, panjang);
}