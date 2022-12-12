#include <iostream>

using namespace std;

void switchCase()
{
    char choice, choices;
    int choiceString;


    cin >> choice >> choiceString;

    switch (choice & choiceString)
    {
    case 'a' & 1:
        cout << "Anda memilih " << choice << choiceString;
        break;
    
    case 2:
        cout << "Anda memilih " << choice << choiceString;
        break;
    
    default:

        break;
    }

}


int main() {
    switchCase();
}