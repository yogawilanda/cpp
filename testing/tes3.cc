
// sebuah program untuk menggunakan struktur data linked list
#include <iostream>
#include <cstdlib>

using namespace std;

// linked list node
struct Node {
  int data;
  struct Node *next;
};

// memasukan data baru ke antrian yang ada di depan
void pushHead(struct Node **head, int new_data) {
  struct Node *new_node =
      (struct Node *)malloc(sizeof(struct Node)); // node baru
  new_node->data = new_data;                      // memasukan data
  new_node->next = (*head);                       // me-link ke head
  (*head) = new_node; // node baru dijadikan sebagai head
}

// menampilkan atau print data yang ada
void printList(struct Node *node) {
  while (node != NULL) {
    printf(" %d ", node->data);
    node = node->next;
  }
}

// perintah  untuk memasukan data ke urutan akhir
void pushTail(struct Node *head, int new_data) {
  struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
  Node *find = head;

  new_node->data = new_data;
  new_node->next = NULL;

  while (find->next != NULL) {
    find = find->next;
  }

  find->next = new_node;
}

// menemukan posisi dari data yang ingin diketahui
int findPosition(struct Node *head, int find_data) {
  Node *find = head;

  if (find->data > find_data) {
    return 0; // data tersebut lebih kecil dari head
  }

  // menentukan apabila data berada di node tertentu
  while (find->data != find_data) {
    if (find->next == NULL) {
      cout << "Data Tidak Ditemukan";
      return NULL;
    }
    find = find->next;
  }
  return 1; // data terdapat di dalam susunan linked list (duplikat)
}

// operasi sisip
void sisip(struct Node *head, int new_data) {

  int condition = findPosition(head, new_data);

  if (condition == 0) // data baru lebih kecil dari head
  {
    pushHead(&head, new_data);
  }

  else if (condition == 1) // terdapat data yang sama (duplikat)
  {
    cout << "terdapat data yang sama";
  }

  else // data baru, sisipkan di akhir
  {
    pushTail(head, new_data);
  }
}

// operasi hapus
void hapus(struct Node **head, int position) {
  // jika linked list kosong
  if (*head == NULL)
    return;

  // menyimpan head
  struct Node *temp = *head;

  // jika head atau data pertama dihapus
  if (position == 0) {
    *head = temp->next; // pindahkan head
    free(temp);         // bebaskan head
    return;
  }

  for (int i = 0; temp != NULL && i < position - 1; i++)
    temp = temp->next;

  // jika melebihi jumlah node yang ada, atau tidak ditemukan
  if (temp == NULL || temp->next == NULL)
    return;

  struct Node *next = temp->next->next;

  free(temp->next);  // Free memori
  temp->next = next; // menghapus dari linked list
}

// menu pilihan
void printMenu() {
  system("cls");
  cout << "\t\tProgram Single Linked List\n";
  cout << "1. Menyisipkan Data\n";
  cout << "2. Menampilkan Data\n";
  cout << "3. Menghapus Data\n";
  cout << "4. Keluar";
  cout << "Masukan Pilihan anda : ";
}

// program utama
int main() {
  bool aktif = true;
  int pilihan, data;
  char lanjut;

  // mulai dengan deklarasi node pertama atau awal
  Node *head = NULL;

  do {
    printMenu();

    cin >> pilihan;

    switch (pilihan) {
    case 1:
      cout << "\nMasukan data untuk disisipkan  : ";
      cin >> data;
      pushHead(&head, data);

      break;

    case 2:
      cout << "\nData dalam linked list :\n";
      printList(head);
      break;

    case 3:
      cout << "\nMasukan data untuk dihapus : ";
      cin >> data;
      pushTail(head, data);
      break;

    default:
      break;
    }

    cout << "\n\nlanjutkan? y/n\n";
    cin >> lanjut;

    if (lanjut == 'n') {
      aktif = false;
    }

  } while (aktif); // tampilkan menu untuk mengakses fungsi
}