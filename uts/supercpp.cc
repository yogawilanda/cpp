#include <iostream>

using namespace std;

// this is variable outside function which is callable to every function and class
string swithcaseString = "This is switch case example, pick a single character to pick a resolve";
int optionint, passwordint, resultint, num1, num2, num3, num4;
string uname, pwd;



// todo: find this function usage
// cin.get();
// cout.getloc();

void coutWithDirectValue() {

    cout << "Input pertama menggunakan cout";

}

void coutWithValueDefinedFromVariable() {
    // this variable inside function example and can only be accessed through
    string text = "Input pertama menggunakan cout";

    cout << text << endl;
    

}


// to display array, use for loops.
void arrayExample() {
    int nums[4] = {1, 2, 3, 4};


    for (int i = 0; i < 4; i++)
    {
        for(int i = 0; i < 11; i++)
        {
            cout << "hi this is "[i];
        }
        cout << nums[i] << endl;
    }
    
}

void arrayNestedExample() {
    int nums[4] = {1, 2, 3, 4};


    for (int i = 0; i < 4; i++)
    {
        for(int i = 0; i < 11; i++)
        {
            cout << "hi this is "[i];
        }
        cout << nums[i] << endl;
    }
    
}


void calculator() {
    char calcOpt;
    int num1, num2, num3, num4, num5, result;
    string greetingCalc = "~~~~~ Calculator Online With C++ Compiled App ~~~~";
    string optionsHelper = "Use +, -, /, * to calculate the aritmathic function";

    cout << greetingCalc << endl << optionsHelper << endl;

    cout << "At first, input your aritmathic function, ie: type + " << endl;

    cin >> calcOpt;

    cout << "you picked " << calcOpt << endl;

    switch (calcOpt)
    {
    case '+':
        cout << "Now, Input your first and second number divided by spacebar" << endl;
        cin >> num1 >> num2;
        cout << "first number is : " << num1 << endl; 
        cout << "second number is : " << num2 << endl; 
        cout << "The result is " << num1 + num2 << endl;
        break;
    
    default:
        break;
    }
}

void login() {
    cout << "Welcome to login interface" << endl;

    cout << "Username : ";
    
    // create

    cin >> uname ;

    cout << "Your Usename is : " << uname;

    cout << "Username : ";

    cin >> pwd;
    
    cout << "Authenticathing..." << endl;

}


void ifse() {
    string option;
    char charOption;

    cout << "Welcome super app, choose your demands" << endl << endl;

    cin >> option;


    if (option == "calculator")
    {
        calculator();
    }
    else if (option == "login")
    {
        login();
    }
    else
    {
        cout << "You didn't choose a right option ;)";
    }
    
}

void switchcaseExample() {
    char option;


    cout << swithcaseString  << endl;
    cin >> option;
    
    switch (option)
    {
    case 'a':
        cout << "you picked a" << endl;

        break;

    case 'b':
        cout << "you picked b" << endl;

        break;

    case 'c':
        cout << "you picked c" << endl;

        break;

    case 'd':
        cout << "you picked d" << endl;

        break;

    case 'e':
        cout << "you picked e" << endl;
        break;
    
    default:
        string nothing = "you picked nothing";
        cout << nothing << endl;
        break;
    }
}

int main() {
    // Output model 1
    // coutWithDirectValue();

    // Output model 2
    // coutWithValueDefinedFromVariable();

    // Output model 3 : Calling direct from the main function.
    // cout << "Input ini berasal dari main function langsung" << endl;

    // switch case example
    // switchcaseExample();

    // calculator case
    // calculator();

    // if else with user type defined
    // ifse();

    // checking array
    arrayExample();

}