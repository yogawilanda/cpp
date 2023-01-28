#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string fileName, msg;
    // Create and open fileName text file
    cin >> fileName;
    
    ofstream createFile;
    fileName += ".txt";
    cout << "file has been created successfully add some message inside\n";
    // Write to the file


    createFile.open(fileName.c_str(), ios::app);
    cin >> msg;
    createFile << msg;
    // Close the file
    createFile.close();
}