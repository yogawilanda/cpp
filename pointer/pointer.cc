#include <iostream>

using namespace std;

void add_score(int *score)
{
    *score = *score + 5;

   printf("Score diubah di dalam fungsi: %d\n", *score);
    
}

int main ()
{
   int score = 0;

   printf("Score sebelum diubah: %d\n", score);
   cout << "output menggunakan cout: "<< &score << endl;

   add_score(&score);

   printf("Score sesudah diubah: %d\n", score);

   cout << &score << endl;
}