#include <iostream>
using namespace std;

struct Node
{ // linked list Node
    string data;
    Node *next;
};

Node *newNode(string k)
{ // defining new node
    Node *temp = new Node;
    temp->data = k;
    temp->next = NULL;
    return temp;
}

// Used to add new node at the end of the list
Node *addNode(Node *head, string k)
{
    if (head == NULL)
    {
        head = newNode(k);
    }
    else
    {
        Node *temp = head;
        Node *node = newNode(k);
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = node;
    }

    return head;
}

// Used to create new linked list and return head
Node *createNewLL()
{
    int cont = 1;
    string data;
    Node *head = NULL;
    while (cont)
    {
        cout << "Enter the data of the Node" << endl;
        cin >> data;
        head = addNode(head, data);
        cout << "Do you want to continue?(0/1)" << endl;
        cin >> cont;
    }
    return head;
}

// Function for finding the node
int findNodeInLL(Node *head, string data)
{
    // Used to keep track of the Node Index
    int index = 0;
    Node *temp = head;
    // LinkedList traversal for finding the node
    while (temp != NULL)
    {
        if (temp->data == data)
        {
            // If element found return index
            cout << "User found. His ID Account: " << index << endl
            ;
            return index;
        }
        temp = temp->next;
        index++;
    }
    // If element not found
    //  return -1;
    cout << "User is not found, please find someone else\n";
}

// Driver Main
int main()
{
    Node *head = createNewLL();

    string data;
    cout << "Masukan Nama User." << endl;
    cin >> data;
    int index = findNodeInLL(head, data);

    if (index == findNodeInLL(head, data))
    {
        /* code */
    }

    cout << "\n" << data << "Status: " << index << endl;

    return 0;
}
