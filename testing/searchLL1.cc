
// Click on Run Code button to see the result

#include <iostream>
using namespace std;

// node structure
struct Node
{
    string data;
    int age;
    Node *next;
};

class LinkedList
{
private:
    Node *head;

public:
    LinkedList()
    {
        head = NULL;
    }

    // Add new element at the end of the list
    void push_back(string newElement, int newAge)
    {
        Node *newNode = new Node();
        newNode->data = newElement;
        newNode->data = newAge;
        newNode->next = NULL;
        if (head == NULL)
        {
            head = newNode;
        }
        else
        {
            Node *temp = head;
            while (temp->next != NULL)
                temp = temp->next;
            temp->next = newNode;
        }
    }

    // Search an element in the list
    void SearchElement(string searchValue)
    {
        Node *temp = head;
        int found = 0;
        int i = 0;
        int ageSearch = 0;

        if (temp != NULL)
        {
            while (temp != NULL)
            {
                i++;
                ageSearch++;
                if (temp->data == searchValue)
                {
                    found++;
                    break;
                }
                temp = temp->next;
            }
            if (found == 1)
            {
                cout << searchValue << " is found at index = " << i << ".\n";
                cout << searchValue << " his age is = " << ageSearch << ".\n";
            }
            else
            {
                cout << searchValue << " is not found in the list.\n";
            }
        }
        else
        {
            cout << "The list is empty.\n";
        }
    }

    // display the content of the list
    void PrintList()
    {
        Node *temp = head;
        if (temp != NULL)
        {
            cout << "The list contains: ";
            while (temp != NULL)
            {
                cout << temp->data << " " << temp->age;
                temp = temp->next;
            }
            cout << endl;
        }
        else
        {
            cout << "The list is empty.\n";
        }
    }
};

// test the code
int main()
{
    LinkedList MyList;
    string a;

    // Add three elements at the end of the list.
    MyList.push_back("Bambang", 20);
    MyList.push_back("Siti", 30);
    //   MyList.push_back(30);

    // traverse to display the content of the list.
    MyList.PrintList();

    cin >> a;

    // search for element in the list
    MyList.SearchElement(a);

    return 0;
}