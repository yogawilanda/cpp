#include <iostream> 

using namespace std;


int main() {

    int baris;

    cout << "Masukan Jumlah Kolom: " ;

    cin >> baris ;

    for(int i = 1; i <= baris; i++) {
        for (int j = 1; j <= i; ++j)
        {
            cout << i << " " ;
        }
        cout << "\n";
        
    }
}
