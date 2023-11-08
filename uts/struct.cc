#include <iostream> 

using namespace std;


// structure /struct
struct Buah 
{
    string nama;
    string Type;
    int x;
};

int function(int x) {
    switch (x)
    {
    case 5:
        break;
    
    default:
        break;
    }
    return 3 + x;
};


int main() {

    Buah myVehicle1;
    myVehicle1.nama = "volvo";
    myVehicle1.Type = "Exvo";
    myVehicle1.x = 4;


    cout << myVehicle1.nama << " " << myVehicle1.Type << endl << myVehicle1.x;

    // function(4);

    cout << "pemanggilan function " << function(10) ;

    return 1;
    
}