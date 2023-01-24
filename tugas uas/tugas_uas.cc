#include <cstdlib>
#include <iostream>

using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

void printAll(Node *temp)
{
    while (temp != NULL)
    {
        cout << temp->data;
        temp = temp->next;
    }
}

void initializeNode()
{

    int no1, no2, no3;
    /* Initialize nodes */
    struct Node *head;
    struct Node *one = NULL;
    struct Node *two = NULL;
    struct Node *three = NULL;

    /* Allocate memory */
    one = (Node *)malloc(sizeof(Node));
    two = (Node *)malloc(sizeof(Node));
    three = (Node *)malloc(sizeof(Node));

    cin >> no1;
    cin >> no2;
    cin >> no3;

    /* Assign data values */
    one->data = no1;
    two->data = no2;
    three->data = no3;

    /* Connect nodes */
    one->next = two;
    two->next = three;
    three->next = NULL;

    /* Save address of first node in head */
    head = one;
    cout << "initialized List: ";
    printAll(head);
}

int main()
{
    int pINT;
    cout << "========================================\n";
    cout << "\t\tToko ATK\t\t\n";
    cout << "========================================\n";
    cout << "Daftar Barang\n";
    cout << "1. Daftar Nama\n"
         << "2. Tambah Barang\n"
         << "3. Hapus Barang\n"
         << "4. Cari Barang\n"
         << "5. Transaksi\n"
         << "6. Keluar\n";

    cin >> pINT;

    switch (pINT)
    {
    case 1:
        cout << "================= Daftar Barang ===================\n"
             << "Masukkan Daftar Barang yang diinginkan";
            initializeNode();
             

        break;
    case 2:
        cout << "================= Tambah Barang ===================\n";
        break;
    case 3:
        cout << "================= Hapus Barang ===================\n";
        break;
    case 4:
        cout << "================= Cari Barang ===================\n";
        break;
    case 5:
        cout << "================= Transaksi ===================\n";
        break;
    case 6:
        cout << "Tekan enter 2 kali untuk keluar\n";
        break;

    default:
        break;
    }
};
