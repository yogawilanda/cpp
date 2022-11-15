#include <iostream>

using namespace std;

int main() {
    int data;

    data = 0;
    while (data < 10)
    {
        cout << "masukkan nilai data: ";
        
        cin >> data;
    }
    
    data = 0;
    while (data < 0)
    {

        cout << data << endl;
        
        data++;
        
    }

    return 0;
}