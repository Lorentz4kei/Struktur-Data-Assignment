# <h1 align="center"> Laporan Praktium Modul 3</h1>
<p align="center"> Aditya Sulistiawan <p>
<p align="center"> 2311102193 </p>
<p align="center"> IF-11-E </p>

## Dasar Teori 
### A. Single Linked List 
Linked list adalah strukur data linier berbentuk rantai simpul di mana setiap simpul menyimpan 2 item, 
yaitu nilai data dan pointer ke simpul elemen berikutnya. Berbeda dengan array, elemen linked list 
tidak ditempatkan dalam alamat memori yang berdekatan melainkan elemen ditautkan menggunakan pointer.
Simpul pertama dari linked list disebut sebagai head atau simpul kepala. Apabila linked list berisi elemen kosong,
maka nilai pointer dari head menunjuk ke NULL. Begitu juga untuk pointer berikutnya dari simpul terakhir atau simpul 
ekor akan menunjuk ke NULL. Ukuran elemen dari linked list dapat bertambah secara dinamis dan mudah untuk menyisipkan
dan menghapus elemen karena tidak seperti array, kita hanya perlu mengubah pointer elemen sebelumnya dan elemen berikutnya 
untuk menyisipkan atau menghapus elemen.


### B. Double Linked List 
Double Linked List Circular adalah linked list dengan menggunakan pointer, 
dimana setiap node memiliki 3 field, yaitu: - 1 field pointer yang menunjuk
pointer berikutnya (next), - 1 field menunjuk pointer sebelumnya (prev), 
serta sebuah field yang berisi data untuk node tersebut.




## Guided 1
### 1. Single Linked List
```C++
#include <iostream>
using namespace std;

/// PROGRAM SINGLE LINKED LIST NON-CIRCULAR
// Deklarasi Struct Node
struct Node
{
    // komponen/member
    int data;
    Node *next;
};
Node *head;
Node *tail;
// Inisialisasi Node
void init()
{
    head = NULL;
    tail = NULL;
}
// Pengecekan
bool isEmpty()
{
    if (head == NULL)
        return true;
    else
        return false;
}
// Tambah Depan
void insertDepan(int nilai)
{
    // Buat Node baru
    Node *baru = new Node;
    baru->data = nilai;
    baru->next = NULL;
    if (isEmpty() == true)
    {
        head = tail = baru;
        tail->next = NULL;
    }
    else
    {
        baru->next = head;
        head = baru;
    }
}
// Tambah Belakang
void insertBelakang(int nilai)
{
    // Buat Node baru
    Node *baru = new Node;
    baru->data = nilai;
    baru->next = NULL;
    if (isEmpty() == true)
    {
        head = tail = baru;
        tail->next = NULL;
    }
    else
    {
        tail->next = baru;
        tail = baru;
    }
}
// Hitung Jumlah List
int hitungList()
{
    Node *hitung;
    hitung = head;
    int jumlah = 0;
    while (hitung != NULL)
    {
        jumlah++;
        hitung = hitung->next;
    }
    return jumlah;
}
// Tambah Tengah
void insertTengah(int data, int posisi)
{
    if (posisi < 1 || posisi > hitungList())
    {
        cout << "Posisi diluar jangkauan" << endl;
    }
    else if (posisi == 1)
    {
        cout << "Posisi bukan posisi tengah" <<

            endl;
    }
    else
    {
        Node *baru, *bantu;
        baru = new Node();
        baru->data = data;
        // tranversing
        bantu = head;
        int nomor = 1;
        while (nomor < posisi - 1)
        {
            bantu = bantu->next;
            nomor++;
        }
        baru->next = bantu->next;
        bantu->next = baru;
    }
}
// Hapus Depan
void hapusDepan()
{
    Node *hapus;
    if (isEmpty() == false)
    {
        if (head->next != NULL)
        {
            hapus = head;
            head = head->next;
            delete hapus;
        }
        else
        {
            head = tail = NULL;
        }
    }
    else
    {
        cout << "List kosong!" << endl;
    }
}

// Hapus Belakang
void hapusBelakang()
{
    Node *hapus;
    Node *bantu;
    if (isEmpty() == false)
    {
        if (head != tail)
        {
            hapus = tail;
            bantu = head;
            while (bantu->next != tail)
            {
                bantu = bantu->next;
            }
            tail = bantu;
            tail->next = NULL;
            delete hapus;
        }
        else
        {
            head = tail = NULL;
        }
    }
    else
    {
        cout << "List kosong!" << endl;
    }
}
// Hapus Tengah
void hapusTengah(int posisi)
{
    Node *hapus, *bantu, *bantu2;
    if (posisi < 1 || posisi > hitungList())
    {
        cout << "Posisi di luar jangkauan" << endl;
    }
    else if (posisi == 1)
    {
        cout << "Posisi bukan posisi tengah" <<

            endl;
    }
    else
    {
        int nomor = 1;
        bantu = head;
        while (nomor <= posisi)
        {

            if (nomor == posisi - 1)
            {
                bantu2 = bantu;
            }
            if (nomor == posisi)
            {
                hapus = bantu;
            }
            bantu = bantu->next;
            nomor++;
        }
        bantu2->next = bantu;
        delete hapus;
    }
}
// Ubah Depan
void ubahDepan(int data)
{
    if (isEmpty() == false)
    {
        head->data = data;
    }
    else
    {
        cout << "List masih kosong!" << endl;
    }
}
// Ubah Tengah
void ubahTengah(int data, int posisi)
{
    Node *bantu;
    if (isEmpty() == false)
    {
        if (posisi < 1 || posisi > hitungList())
        {
            cout << "Posisi di luar jangkauan" <<

                endl;
        }
        else if (posisi == 1)
        {
            cout << "Posisi bukan posisi tengah" <<

                endl;
        }
        else
        {
            bantu = head;
            int nomor = 1;

            while (nomor < posisi)
            {
                bantu = bantu->next;
                nomor++;
            }
            bantu->data = data;
        }
    }
    else
    {
        cout << "List masih kosong!" << endl;
    }
}
// Ubah Belakang
void ubahBelakang(int data)
{
    if (isEmpty() == false)
    {
        tail->data = data;
    }
    else
    {
        cout << "List masih kosong!" << endl;
    }
}
// Hapus List
void clearList()
{
    Node *bantu, *hapus;
    bantu = head;
    while (bantu != NULL)
    {
        hapus = bantu;
        bantu = bantu->next;
        delete hapus;
    }
    head = tail = NULL;
    cout << "List berhasil terhapus!" << endl;
}
// Tampilkan List
void tampil()
{
    Node *bantu;
    bantu = head;
    if (isEmpty() == false)
    {

        while (bantu != NULL)
        {
            cout << bantu->data << ends;
            bantu = bantu->next;
        }
        cout << endl;
    }
    else
    {
        cout << "List masih kosong!" << endl;
    }
}
int main()
{
    init();
    insertDepan(3);
    tampil();
    insertBelakang(5);
    tampil();
    insertDepan(2);
    tampil();
    insertDepan(1);
    tampil();
    hapusDepan();
    tampil();
    hapusBelakang();
    tampil();
    insertTengah(7, 2);
    tampil();
    hapusTengah(2);
    tampil();
    ubahDepan(1);
    tampil();
    ubahBelakang(8);
    tampil();
    ubahTengah(11, 2);
    tampil();
    return 0;
}
```
### Screenshot
![guided 1](https://github.com/Lorentz4kei/Struktur-Data-Assignment/assets/161665225/a150dc6f-24d9-4a69-9a8e-e188882f7fa4)


### 2. Double Linked List
```C++
#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *prev;
    Node *next;
};
class DoublyLinkedList
{

public:
    Node *head;
    Node *tail;
    DoublyLinkedList()
    {
        head = nullptr;
        tail = nullptr;
    }
    void push(int data)
    {
        Node *newNode = new Node;
        newNode->data = data;
        newNode->prev = nullptr;
        newNode->next = head;
        if (head != nullptr)
        {
            head->prev = newNode;
        }
        else
        {
            tail = newNode;
        }
        head = newNode;
    }
    void pop()
    {
        if (head == nullptr)
        {
            return;
        }
        Node *temp = head;
        head = head->next;
        if (head != nullptr)
        {
            head->prev = nullptr;
        }
        else
        {
            tail = nullptr;
        }
        delete temp;
    }
    bool update(int oldData, int newData)
    {
        Node *current = head;
        while (current != nullptr)
        {
            if (current->data == oldData)
            {
                current->data = newData;
                return true;
            }
            current = current->next;
        }

        return false;
    }
    void deleteAll()
    {
        Node *current = head;
        while (current != nullptr)
        {
            Node *temp = current;
            current = current->next;
            delete temp;
        }
        head = nullptr;
        tail = nullptr;
    }
    void display()
    {
        Node *current = head;
        while (current != nullptr)
        {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
};
int main()
{
    DoublyLinkedList list;
    while (true)
    {
        cout << "1. Add data" << endl;
        cout << "2. Delete data" << endl;
        cout << "3. Update data" << endl;
        cout << "4. Clear data" << endl;
        cout << "5. Display data" << endl;
        cout << "6. Exit" << endl;
        int choice;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            int data;
            cout << "Enter data to add: ";
            cin >> data;
            list.push(data);
            break;
        }
        case 2:
        {
            list.pop();
            break;
        }
        case 3:
        {
            int oldData, newData;
            cout << "Enter old data: ";
            cin >> oldData;
            cout << "Enter new data: ";
            cin >> newData;
            bool updated = list.update(oldData,

                                       newData);

            if (!updated)
            {
                cout << "Data not found" << endl;
            }
            break;
        }
        case 4:
        {
            list.deleteAll();
            break;
        }
        case 5:
        {
            list.display();
            break;
        }
        case 6:
        {
            return 0;
        }
        default:
        {
            cout << "Invalid choice" << endl;
            break;
        }
        }
    }
    return 0;
}
```
### Screenshot: 
![guided 2](https://github.com/Lorentz4kei/Struktur-Data-Assignment/assets/161665225/bbe50909-35b0-45f6-a562-b4ef420fe628)


## Unguided 1
### 1. Buatlah program menu Single Linked List Non-Circular untuk
menyimpan Nama dan usia mahasiswa, dengan menggunakan inputan
dari user. Lakukan operasi berikut:

a. Masukkan data sesuai urutan berikut. (Gunakan insert depan,
belakang atau tengah). Data pertama yang dimasukkan adalah
nama dan usia anda.

![Cuplikan layar 2024-06-05 173958](https://github.com/Lorentz4kei/Struktur-Data-Assignment/assets/161665225/ca7da650-015b-489d-9f1e-967b5fc9e967)



b. Hapus data Akechi

c. Tambahkan data berikut diantara John dan Jane : Futaba 18

d. Tambahkan data berikut diawal : Igor 20

e. Ubah data Michael menjadi : Reyn 18

f. Tampilkan seluruh data

```C++
#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;
// Mendefinisikan struct Node dengan 3 field: nama, usia, dan pointer next
struct Node
{
    string nama;
    int usia;
    Node *next;
};

// Pointer head dan tail untuk menandai awal dan akhir dari linked list
Node *head = NULL;
Node *tail = NULL;

// Fungsi untuk memasukkan data di depan linked list
void insertDepan(string nama, int usia)
{
    // Membuat node baru
    Node *baru = new Node;
    baru->nama = nama;
    baru->usia = usia;

    // Menghubungkan node baru ke node selanjutnya (sebelumnya head)
    baru->next = head;

    // Memperbarui head untuk menunjuk ke node baru
    head = baru;

    // Jika tail masih kosong, maka tail juga menunjuk ke node baru
    if (tail == NULL)
    {
        tail = baru;
    }
}

// Fungsi untuk memasukkan data di belakang linked list
void insertBelakang(string nama, int usia)
{
    // Membuat node baru
    Node *baru = new Node;
    baru->nama = nama;
    baru->usia = usia;
    baru->next = NULL;

    // Jika tail masih kosong, maka node baru menjadi head dan tail
    if (tail == NULL)
    {
        head = baru;
        tail = baru;
    }
    else
    {
        // Menghubungkan node baru ke tail
        tail->next = baru;

        // Memperbarui tail untuk menunjuk ke node baru
        tail = baru;
    }
}

// Fungsi untuk memasukkan data di tengah linked list
void insertTengah(string nama, int usia, string target)
{
    // Membuat node baru
    Node *baru = new Node;
    baru->nama = nama;
    baru->usia = usia;

    // Mencari node dengan nama target
    Node *temp = head;
    while (temp != NULL && temp->nama != target)
    {
        temp = temp->next;
    }

    // Jika target tidak ditemukan, tampilkan pesan error
    if (temp == NULL)
    {
        cout << "Target tidak ditemukan!" << endl;
    }
    else
    {
        // Menghubungkan node baru setelah node target
        baru->next = temp->next;
        temp->next = baru;
    }
}

// Fungsi untuk menghapus data dari linked list
void hapusData(string nama)
{
    // Mencari node dengan nama yang ingin dihapus
    Node *temp = head;
    Node *prev = NULL;

    while (temp != NULL && temp->nama != nama)
    {
        prev = temp;
        temp = temp->next;
    }

    // Jika data tidak ditemukan, tampilkan pesan error
    if (temp == NULL)
    {
        cout << "Data tidak ditemukan!" << endl;
    }
    else if (prev == NULL)
    {
        // Jika data yang dihapus adalah head, maka head diubah ke node selanjutnya
        head = head->next;
        if (head == NULL)
        {
            // Jika linked list kosong setelah penghapusan, maka tail juga diubah menjadi NULL
            tail = NULL;
        }
    }
    else
    {
        // Menghubungkan node sebelumnya dengan node setelah node yang dihapus
        prev->next = temp->next;

        // Jika node yang dihapus adalah tail, maka tail diubah ke node sebelumnya
        if (temp == tail)
        {
            tail = prev;
        }
    }

    // Menghapus node yang sudah tidak terpakai
    delete temp;
}

void ubahData(string nama, string namaBaru, int usiaBaru)
{
    // Mencari node dengan nama yang ingin diubah
    Node *temp = head;
    while (temp != NULL && temp->nama != nama)
    {
        temp = temp->next;
    }

    // Jika data tidak ditemukan, tampilkan pesan error
    if (temp == NULL)
    {
        cout << "Data tidak ditemukan!" << endl;
    }
    else
    {
        // Mengubah nama dan usia pada node yang ditemukan
        temp->nama = namaBaru;
        temp->usia = usiaBaru;
    }
}

// Fungsi untuk menampilkan seluruh data dalam linked list
void tampilData()
{
    // Node temp untuk iterasi
    Node *temp = head;

    // Menampilkan data dari setiap node
    while (temp != NULL)
    {
        cout << temp->nama << " " << temp->usia << endl;
        temp = temp->next;
    }
}

// Fungsi main untuk menjalankan program
int main()
{
    // Masukkan data diri
    string namaAnda;
    int usiaAnda;
    cout << "Masukkan nama Anda: ";
    cin >> namaAnda;
    cout << "Masukkan usia Anda: ";
    cin >> usiaAnda;

    // Masukkan data diri ke linked list di depan
    insertDepan(namaAnda, usiaAnda);
    // Masukkan data lainnya
    string nama, namaTarget;
    int usia;

    while (true)
    {
        cout << "1. Insert Depan" << endl;
        cout << "2. Insert Belakang" << endl;
        cout << "3. Insert Tengah" << endl;
        cout << "4. Hapus Data" << endl;
        cout << "5. Tampilkan Data" << endl;
        cout << "6. Ubah data" << endl;
        cout << "7. Keluar " << endl;

        int pilihan;
        cout << "Pilih operasi: ";
        cin >> pilihan;

        switch (pilihan)
        {
        case 1:
            cout << "Masukkan nama: ";
            cin >> nama;
            cout << "Masukkan usia: ";
            cin >> usia;
            insertDepan(nama, usia); // Penjelasan ada di fungsi insertDepan
            break;
        case 2:
            cout << "Masukkan nama: ";
            cin >> nama;
            cout << "Masukkan usia: ";
            cin >> usia;
            insertBelakang(nama, usia); // Penjelasan ada di fungsi insertBelakang
            break;
        case 3:
            cout << "Masukkan nama: ";
            cin >> nama;
            cout << "Masukkan usia: ";
            cin >> usia;
            cout << "Masukkan nama target: ";
            cin >> namaTarget;
            insertTengah(nama, usia, namaTarget); // Penjelasan ada di fungsi insertTengah
            break;
        case 4:
            cout << "Masukkan nama yang ingin dihapus: ";
            cin >> nama;
            hapusData(nama); // Penjelasan ada di fungsi hapusData
            break;
        case 5:
            tampilData(); // Penjelasan ada di fungsi tampilData
            break;
        case 6:
            cout << "Masukkan nama: ";
            cin >> nama;
            cout << "Masukkan usia: ";
            cin >> usia;
            ubahData("Michael", "Reyn", 18);
            break;
        case 7:
            cout << "Keluar dari program." << endl;
            exit(0); // Keluar dari program
        default:
            cout << "Pilihan tidak valid!" << endl;
        }
    }

    return 0;
}
```
### Screenshot
#### Output.
![output](https://github.com/Lorentz4kei/Struktur-Data-Assignment/assets/161665225/a55bda2f-214a-4b81-a031-64b645b2409e)

#### Case 1.
![case 1](https://github.com/Lorentz4kei/Struktur-Data-Assignment/assets/161665225/7297cc48-5f42-4773-9571-618fc45ed026)

#### Case 2.
![case 2](https://github.com/Lorentz4kei/Struktur-Data-Assignment/assets/161665225/c9559be3-49c4-49ef-8066-92dec153a124)

#### Case 3.
![case 3](https://github.com/Lorentz4kei/Struktur-Data-Assignment/assets/161665225/0613a507-401c-4af7-963d-12155aa57948)

#### Case 4.
![case 4](https://github.com/Lorentz4kei/Struktur-Data-Assignment/assets/161665225/fb5b9cce-5970-41a3-85aa-ef99edef4b74)

### 2. Unguided 2

![image unguided 2](https://github.com/Lorentz4kei/Struktur-Data-Assignment/assets/161665225/47ebac35-26ab-43c0-b57f-f6a97ae58661)


![image](https://github.com/Lorentz4kei/Struktur-Data-Assignment/assets/161665225/c43c7ad2-30e7-47bc-8213-74d1f0d9ce2f)



Case:
1. Tambahkan produk Azarine dengan harga 65000 diantara
Somethinc dan Skintific
2. Hapus produk wardah
3. Update produk Hanasui menjadi Cleora dengan harga 55.000
4. Tampilkan menu seperti dibawah ini

![image list](https://github.com/Lorentz4kei/Struktur-Data-Assignment/assets/161665225/3bebd847-119d-4673-b6ce-bc27b8d12a54)

Pada menu 7, tampilan akhirnya akan menjadi seperti dibawah ini :
   
![image list 2](https://github.com/Lorentz4kei/Struktur-Data-Assignment/assets/161665225/98babf57-3f31-4368-a88a-c018b79c6ff5)

```C++
#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

// Struktur Node untuk menyimpan data produk dan harga
struct Node {
  string nama_produk;
  int harga;
  Node *prev, *next;

  // Menginisialisasi node baru dengan nama produk dan harga
  Node(string nama_produk, int harga) {
    this->nama_produk = nama_produk;
    this->harga = harga;
    prev = next = nullptr;
  }
};

// Kelas DoubleLinkedList untuk mengelola data
class DoubleLinkedList {
  private:
    Node *head, *tail;

  public:
    // Menginisialisasi DoubleLinkedList kosong
    DoubleLinkedList() {
      head = tail = nullptr;
    }

  // Menambahkan data baru di akhir linked list
  void addData(string nama_produk, int harga) {
    // Membuat node baru dengan nama produk dan harga
    Node *newNode = new Node(nama_produk, harga);

    // Jika linked list kosong, jadikan node baru sebagai head dan tail
    if (head == nullptr) {
      head = tail = newNode;
    } else {
      // Menambahkan node baru di akhir linked list
      tail->next = newNode;
      newNode->prev = tail;
      tail = newNode;
    }
  }

  // Menambahkan data baru di urutan tertentu
  void addDataAtIndex(int index, string nama_produk, int harga) {
    // Memastikan index valid
    if (index < 0 || index > size()) {
      cout << "Indeks tidak valid!" << endl;
      return;
    }

    // Membuat node baru dengan nama produk dan harga
    Node *newNode = new Node(nama_produk, harga);

    // Jika index 0, tambahkan node baru di awal linked list
    if (index == 0) {
      addData(nama_produk, harga);
      return;
    }

    // Menemukan node di posisi index - 1
    Node *curr = head;
    for (int i = 0; i < index - 1; i++) {
      curr = curr->next;
    }

    // Jika index di akhir linked list, tambahkan node baru di akhir
    if (curr == tail) {
      addData(nama_produk, harga);
      return;
    }

    // Menambahkan node baru di antara dua node
    newNode->next = curr->next;
    curr->next->prev = newNode;
    newNode->prev = curr;
    curr->next = newNode;
  }

  // Menghapus data di akhir linked list
  void deleteData() {
    // Jika linked list kosong, tampilkan pesan error
    if (head == nullptr) {
      cout << "Data kosong!" << endl;
      return;
    }

    // Jika hanya ada satu node, hapus node tersebut
    if (head == tail) {
      head = tail = nullptr;
    } else {
      // Menghilangkan node terakhir dari linked list
      tail = tail->prev;
      tail->next = nullptr;
    }
  }

  // Menghapus data di urutan tertentu
  void deleteDataAtIndex(int index) {
    // Memastikan index valid
    if (index < 0 || index >= size()) {
      cout << "Indeks tidak valid!" << endl;
      return;
    }

    // Jika index 0, hapus node di awal linked list
    if (index == 0) {
      head = head->next;
      if (head != nullptr) {
        head->prev = nullptr;
      } else {
        tail = nullptr;
      }
      return;
    }

    // Menemukan node di posisi index
    Node *curr = head;
    for (int i = 0; i < index; i++) {
      curr = curr->next;
    }

    // Jika node di akhir linked list, hapus node terakhir
    if (curr == tail) {
      deleteData();
      return;
    }

    // Menghapus node di antara dua node
    curr->prev->next = curr->next;
    curr->next->prev = curr->prev;
  }
  // Mengupdate data di urutan tertentu
  void updateDataAtIndex(int index, string nama_produk, int harga) {
    // Memastikan index valid
    if (index < 0 || index >= size()) {
      cout << "Indeks tidak valid!" << endl;
      return;
    }

    // Menemukan node di posisi index
    Node *curr = head;
    for (int i = 0; i < index; i++) {
      curr = curr->next;
    }

    // Mengupdate nama produk dan harga node tersebut
    curr->nama_produk = nama_produk;
    curr->harga = harga;
  }

  // Menampilkan seluruh data di linked list
  void displayData() {
    // Jika linked list kosong, tampilkan pesan error
    if (head == nullptr) {
      cout << "Data kosong!" << endl;
      return;
    }

    // Menampilkan data dari setiap node
    Node *curr = head;
    while (curr != nullptr) {
      cout << curr->nama_produk << " " << curr->harga << endl;
      curr = curr->next;
    }
  }

  // Menghitung jumlah node di linked list
  int size() {
    int count = 0;
    Node *curr = head;
    while (curr != nullptr) {
      count++;
      curr = curr->next;
    }
    return count;
  }
};

int main() {
  DoubleLinkedList toko;

  // Data awal
  toko.addData("Originote", 60000);
  toko.addData("Somethinc", 150000);
  toko.addData("Skintific", 100000);
  toko.addData("Wardah", 50000);
  toko.addData("Hanasui", 30000);

  int pilihan;

  do {
    cout << "\nToko Skincare Purwokerto" << endl;
    cout << "1. Tambah Data" << endl;
    cout << "2. Hapus Data" << endl;
    cout << "3. Update Data" << endl;
    cout << "4. Tambah Data Urutan Tertentu" << endl;
    cout << "5. Hapus Data Urutan Tertentu" << endl;
    cout << "6. Hapus Seluruh Data" << endl;
    cout << "7. Tampilkan Data" << endl;
    cout << "8. Exit" << endl;
    cout << "Pilihan Anda: ";
    cin >> pilihan;

    switch (pilihan) {
      case 1: {
        string nama_produk;
        int harga;
        cout << "Masukkan nama produk: ";
        cin.ignore(); // Menghapus newline sebelumnya
        getline(cin, nama_produk);
        cout << "Masukkan harga: ";
        cin >> harga;
        toko.addData(nama_produk, harga);
        break;
      }
      case 2: {
        toko.deleteData();
        break;
      }
      case 3: {
        int index;
        string nama_produk;
        int harga;
        cout << "Masukkan indeks data: ";
        cin >> index;
        cout << "Masukkan nama produk baru: ";
        cin.ignore();
        getline(cin, nama_produk);
        cout << "Masukkan harga baru: ";
        cin >> harga;
        toko.updateDataAtIndex(index, nama_produk, harga);
        break;
      }
      case 4: {
        int index;
        string nama_produk;
        int harga;
        cout << "Masukkan indeks penambahan: ";
        cin >> index;
        cout << "Masukkan nama produk baru: ";
        cin.ignore();
        getline(cin, nama_produk);
        cout << "Masukkan harga baru: ";
        cin >> harga;
        toko.addDataAtIndex(index, nama_produk, harga);
        break;
      }
      case 5: {
        int index;
        cout << "Masukkan indeks penghapusan: ";
        cin >> index;
        toko.deleteDataAtIndex(index);
        break;
      }
      case 6: {
        while (toko.size() > 0) {
          toko.deleteData();
        }
        break;
      }
      case 7: {
        toko.displayData();
        break;
        }
      case 8: {
        cout << "Terima kasih telah menggunakan program!" << endl;
        break;
      }
      default: {
        cout << "Pilihan tidak valid!" << endl;
      }
    }
  } while (pilihan != 8);

  return 0;
}
```

### Screenshot
#### Gambar Full List 

![unguided 2 output](https://github.com/Lorentz4kei/Struktur-Data-Assignment/assets/161665225/fd457fc3-e8b8-4afb-859f-ff57d6cdf239)

#### Case 1. 
![unguided 2 case 1](https://github.com/Lorentz4kei/Struktur-Data-Assignment/assets/161665225/ac5b6527-ffbc-458a-a9d0-014b548e7ef5)

#### Case 2.
![unguided 2 case 2](https://github.com/Lorentz4kei/Struktur-Data-Assignment/assets/161665225/b8c32726-a25b-4bab-9232-27c21458598b)

#### Case 3.
![unguided 2 case 3](https://github.com/Lorentz4kei/Struktur-Data-Assignment/assets/161665225/c479b66c-ddc0-46ba-8c62-fb66eea9e78f)

#### Case 4.
![unguided 2 case 4](https://github.com/Lorentz4kei/Struktur-Data-Assignment/assets/161665225/dc40cc25-c771-487e-9b4f-2c4f1f08d7f2)


## Kesimpulan
<div style = "text-align: justify">
  Single dan double linked list dan ganda adalah dua jenis struktur data yang berbeda dalam cara elemen ditautkan. Daftar tertaut tunggal, seperti namanya, hanya memiliki referensi ke elemen berikutnya dalam daftar, sedangkan double linked list memiliki referensi ke elemen sebelumnya dan elemen berikutnya. Hal ini membuat double linked list menjadi keuntungan untuk beberapa operasi, seperti menghapus dan menambahkan elemen ke awal atau akhir daftar, karena daftar tersebut memungkinkan akses mudah ke elemen sebelumnya tanpa harus menelusuri elemen lain.
 
 Secara umum, pilihan antara daftar tertaut tunggal dan ganda bergantung pada kebutuhan spesifik aplikasi. double linked list mungkin lebih cocok untuk aplikasi yang memerlukan operasi yang sering menggunakan elemen sebelumnya, sedangkan daftar tertaut tunggal mungkin lebih cocok untuk aplikasi yang hanya memerlukan akses ke elemen berikutnya (seperti implementasi tumpukan atau antrian)..</div>


## Daftar Pustaka
[1]. Wijayaningrum, V.N., Putriwijaya, N.N.: An improved crow search algorithm for data clustering. EMITTER Int. J. Eng. Technol. 8(1) (2020).

[2]. Das, P., Naskar, S.K., Narayan, P.S.: Fast converging cuckoo search algorithm to de-sign symmetric FIR filters. Int. J. Comput. Appl. 43(6) (2021)

[3]. https://www.trivusi.web.id/2022/07/struktur-data-linked-list.html