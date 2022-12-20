#include <queue>
#include <iostream>

using namespace std;
string inputHewan;

void contohQueue();

void queueWhile(queue<string> queueDefault)
{   
    while (!queueDefault.empty())
    {
        cout << queueDefault.front() << " di dalam while\n";
        queueDefault.pop();
    }
    queueDefault.push(inputHewan);
    cout << queueDefault.front()
         << " Diluar while \n";
}


int main() 
{
    cin >> inputHewan;
    contohQueue();

}

void contohQueue() {


    queue<string> jenisHewan;

    jenisHewan.push(inputHewan);
    // jenisHewan.push(inputHewan);
    // jenisHewan.push(inputHewan);

    queueWhile(jenisHewan);


    // contoh mengeluarkan seluruh hasil
    // queue yang telah disediakan sebelumnya
    // while (!jenisHewan.empty() == true)
    // {
    //     cout << jenisHewan.front() << "\n";

    //     queueWhile(jenisHewan);

    //     // untuk menghapus seluruh data yang sudah dibuat
    //     jenisHewan.pop();
    // };


    
}


