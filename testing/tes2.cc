#include <iostream>

using namespace std;

// Membuat struktur data barang

struct Barang
{

    string nama;

    int harga;
};

// Membuat elemen double linked list

struct Node
{

    Barang data;

    Node *prev, *next;
};

// Membuat kelas double linked list

class DoubleLinkedList
{

private:
    Node *head, *tail;

public:
    // Konstruktor

    DoubleLinkedList()
    {

        head = NULL;

        tail = NULL;
    }

    // Menambahkan elemen baru di awal double linked list

    void addFirst(Barang data)
    {

        // Membuat elemen baru

        Node *newNode = new Node;

        newNode->data = data;

        newNode->prev = NULL;

        newNode->next = NULL;

        // Menambahkan elemen baru ke double linked list

        if (head == NULL)
        {

            // Jika double linked list kosong, maka elemen baru menjadi head dan tail

            head = newNode;

            tail = newNode;
        }
        else
        {

            // Jika double linked list tidak kosong, maka elemen baru menjadi head dan head sebelumnya menjadi elemen selanjutnya dari elemen baru

            newNode->next = head;

            head->prev = newNode;

            head = newNode;
        }
    }

    // Menambahkan elemen baru di akhir double linked list

    void addLast(Barang data)
    {

        // Membuat elemen baru

        Node *newNode = new Node;

        newNode->data = data;

        newNode->prev = NULL;

        newNode->next = NULL;

        // Menambahkan elemen baru ke double linked list

        if (tail == NULL)
        {

            // Jika double linked list kosong, maka elemen baru menjadi head dan tail

            head = newNode;

            tail = newNode;
        }
        else
        {

            // Jika double linked list tidak kosong, maka elemen baru menjadi tail dan tail selanjutnya menjadi elemen sebelumnya dari elemen baru

            newNode->prev = tail;

            tail->next = newNode;

            tail = newNode;
        }
    }

    // Menghapus elemen di awal double linked list

    void removeFirst()
    {

        if (head == NULL)
        {

            // Jika double linked list kosong, tidak ada yang bisa dihapus

            cout << "Double linked list kosong" << endl;
        }
        else if (head == tail)
        {

            // Jika double linked list hanya memiliki satu elemen, hapus elemen tersebut dan buat head dan tail menjadi NULL

            Node *temp = head;

            head = NULL;

            tail = NULL;

            delete temp;
        }
    }
}