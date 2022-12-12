#include <iostream>

using namespace std;

int object(int x);

int arrayPassable(int pArr[5]);

int arrayDeclaredAndDefined[2] = {1, 2};

int arrayGrowable[] = {(int)2, 3} ;

int arrayGrowable2D[3][2] = {
    {2, 3},
    {1, 4},
    {6, 8},
};

int arrayGrowable3D[2][3][2] = {
    {
        {2, 3},
        {1, 4},
        {6, 8},
    },
    {
        {2, 3},
        {1, 4},
        {6, 8},
    },
};

int main()
{
    int pArrs[5] = {0, 1, 2, 3, 4};

    cout << "before" << endl;

    arrayPassable(pArrs);

    cout << "Masukan nilai baru : " << endl;
    cin >> pArrs[4];

    cout << "after" << endl;

    arrayPassable(pArrs);

    return 0;
}

int object(int x)
{
    cout << "ini adalah bentuk x : " << x << endl;

    return 0;
}

int arrayPassable(int pArr[5])
{
    for (int i = 0; i < 5; i++)
    {
        cout << pArr[i] << "\n";
    }

    return 0;
}