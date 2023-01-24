#include <iostream>
#include <cstdlib>

using namespace std;

struct Node
{
    int value;
    struct Node *next;
};


void menuUtama();
void printAll(Node *);
void insertFirst(Node **ptrHead, int isi);
void insertFirst(Node *);
void insetLast(Node *);
void opsi4();

int nomor1, nomor2, nomor3;

int main()
{
    /* Initialize nodes */
    struct Node *head;
    struct Node *one = NULL;
    struct Node *two = NULL;
    struct Node *three = NULL;

    /* Allocate memory */
    one = (Node *)malloc(sizeof(Node));
    two = (Node *)malloc(sizeof(Node));
    three = (Node *)malloc(sizeof(Node));

    cin >> nomor1;
    cin >> nomor2;
    cin >> nomor3;

    /* Assign data values */
    one->value = nomor1;
    two->value = nomor2;
    three->value = nomor3;


    /* Connect nodes */
    one->next = two;
    two->next = three;
    three->next = NULL;

    /* Save address of first node in head */
    head = one;
    cout << "initialized List: ";
    printAll(head);

    
    return 0;
}

void printAll(Node* temp)
{
    while (temp != NULL)
    {
        cout << temp->value;
        temp = temp->next;
    }
}


// double pointer untuk menunjuk pointernya, bukan valuenya
void insertFirst(Node** ptrHead, int isi)
{
    Node *newNode = (Node *)malloc(sizeof(Node));

    newNode->value = isi;

    newNode->next = *ptrHead;

    *ptrHead = newNode;
}
void insetLast(Node *temp, int isi)
{
}
void opsi4()
{
}

