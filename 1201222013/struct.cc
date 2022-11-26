#include <iostream> 

using namespace std;


// structure /struct
struct Vehicle 
{
    string Brands;
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

    Vehicle myVehicle1;
    myVehicle1.Brands = "volvo";
    myVehicle1.Type = "Exvo";
    myVehicle1.x = 4;


    cout << myVehicle1.Brands << " " << myVehicle1.Type << endl << myVehicle1.x;

    // function(4);

    cout << "pemanggilan function " << function(10) ;

    return 1;
    
}