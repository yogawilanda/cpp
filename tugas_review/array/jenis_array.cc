#include <iostream>
using namespace std;

int array3Dimensi[3][3][4] = {
    {
        {111, 112, 113, 114},
        {121, 122, 123, 124},
        {131, 132, 133, 134},
    },
    {
        {211, 212, 213, 214},
        {221, 222, 223, 224},
        {231, 232, 233, 234},
    },
    {
        {311, 312, 313, 314},
        {321, 322, 323, 324},
        {331, 332, 333, 334},
    },

};

int array2Dimensi[3][3] = {

    {111, 112, 113},
    {131, 132, 133},
    {121, 122, 123},
};

int array1Dimensi[3] = {1, 2, 3};

int forTabel, forMaskapai, forHarga;

int main()
{
    cout << endl
         << "==========================\n";
    cout << "hasil array 1 Dimensi\n";
    for (int array = 0; array < 3; array++)
    {
        cout << array1Dimensi[array] << " ";
    }
    cout << endl
         << "==========================\n";
    cout << "hasil array 2 Dimensi\n";
    cout << "Array 1\t  Array 2   Array 3\n";
    for (forTabel = 0; forTabel < 3; forTabel++)
    {

        for (forHarga = 0; forHarga < 3; forHarga++)
        {

            cout << array2Dimensi[forTabel][forMaskapai] << "       ";
        }

        cout << endl;
    }

    cout << endl;
    cout << endl
         << "==========================\n";

    cout << endl;
    cout << endl
         << "==========================\n";
    cout << "hasil array 3 Dimensi\n";
    cout << "\t\tArray 1\t  Array 2   Array 3   Array 4\n";
    for (forTabel = 0; forTabel < 3; forTabel++)
    {
        cout << "Dimensi " << forTabel[array1Dimensi] << "\t";

        for (forHarga = 0; forHarga < 4; forHarga++)
        {

            cout << array3Dimensi[forTabel][forMaskapai][forHarga] << "       ";
        }

        cout << endl;
        // }

        cout << endl;
    }
    cout << endl;
    cout << endl
         << "==========================\n";

}