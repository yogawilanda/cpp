// Penugasan 10 Oktober 2022
// Pak Muzzaki
// Algoritma pemrograman

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

int main()
{
   // -- input -- //

   // Nim
   printf("NIM Anda: \n");
   int NIM;
   scanf("%d", &NIM);
   
   // Nama
   printf("Nama Anda: \n");
   char nama[20];
   scanf("%s", nama);
   
   // Alamat
   printf("Alamat Anda? \n");
   char alamat[20];
   scanf("%s", alamat);

   // Email
   printf("Masukan email anda: \n");
   char email[20];
   scanf("%s", email);
   
   // No. Telp
   printf("Masukan telepon anda: \n");
   char telephone[20];
   scanf("%s", telephone);
   
   // Gender(Boolean)
   printf("Jenis Kelamin: (1 = Laki,  0 = Perempuan) \n");
   float gender;
   scanf("%f", &gender);
     
   // IPK
   printf("Masukan nominal ipk: \n");
   float IPK;
   scanf("%f", &IPK);

   // --Output-- 

   printf("------- HASIL --------\n");

   // NIM
   printf("1. NIM:%d\n", NIM);

   // Nama
   printf("2. Nama:%s\n", nama);

   // Alamat
   printf("3. Alamat:%s\n", alamat);

   // Email
   printf("4. Email:%s\n", email);
   
   // Telephone
   printf("5. Telephone:%s\n", telephone);   
   
   // Gender
   (gender > 1) ? 
   printf("6.Gender: laki\n") : printf("Gender: perempuan\n");                                                                                                                  
   
   // IPK
   printf("7. IPK: %.2f\n", IPK);

   printf("--------- Terima Kasih -------------\n");


   return 0;
}
