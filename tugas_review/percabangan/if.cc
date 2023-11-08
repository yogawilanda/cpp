#include <iostream>

using namespace std;

int main()
{
    string a;
    string b = "budi";

    // output
    cout << "Masukan id anda:\n";

    cin >> a;

    if (a == b)
    {
        cout << "Akses diterima";
    } else {
        cout << "Maaf, anda bukan pemilik akun ini";
    }
}