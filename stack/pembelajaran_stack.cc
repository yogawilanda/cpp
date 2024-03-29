#include <iostream>

#include <stack>

// stack.pop = remove data
// stack.push = add data from above
// stack.top = return data from the upper data previously given
// stack.empty = check the data if it is empty or not

using namespace std;

string inputStack;
stack<string> contohVariabelStack;

void stackExample();

void stackWithInput();

int main()
{

    stackExample();
    return 0;
}

void stackExample()
{

    contohVariabelStack.push("Rahma");
    contohVariabelStack.push("Gita");
    contohVariabelStack.push("Fina");

    while (!contohVariabelStack.empty())
    {
        {
            cout << contohVariabelStack.top() << endl;
            contohVariabelStack.pop();
        }
    }
}