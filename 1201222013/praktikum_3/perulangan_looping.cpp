#include <iostream>

using namespace std;

// Buat perulangan.
void doWhile();

int main() {
    int x, s;

    int count;

    for (int i = 1; i < 11; i++)
    {
        cout<<"For Pertama"<<i<<endl;
        
    }
    cout<<endl;
    cout<<"----For Kedua----"<<endl;
    
    for (count = 0; count < 10; count++)
    {
        cout<<"For kedua"<<count*count<<endl;
        
    }

       
    return 0;
}
