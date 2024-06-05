# <h1 align="center"> Laporan Praktium Modul 7 Queue </h1>
<p align="center"> Bhara Yudha Pamungkas <p>
<p align="center"> 2311102186 </p>

## Dasar Teori
<p align ="justify"> 
Algoritma adalah struktur data yang mengikuti prinsip FIFO. Data memasuki Algoritma di satu ujung dan meninggalkan Algoritma di ujung yang lain. Artinya item pertama yang ditambahkan ke Algoritma juga merupakan item pertama yang dihapus [1].

Algoritme Algoritma umumnya digunakan dalam berbagai aplikasi dan teknologi untuk mengatur Algoritma dan memproses data secara berurutan.Dalam konteks aplikasi pemesanan obat keliling Aruba Farma di Depok, penerapan algoritma Algoritma meningkatkan efisiensi dan kualitas layanan dengan memastikan bahwa pasien menerima obat sesuai urutan Algoritma [1} .

Urutan algoritma memungkinkan pengelolaan sistem pemesanan yang lebih baik sehingga pasien mengetahui ketersediaan obat dan nomor pemesanannya tanpa harus ke apotek terlebih dahulu.Hal ini mengurangi waktu tunggu pasien dan meningkatkan pengalaman layanan di apotek [1]..

</p>


## Guided

```C++
#include <iostream>
using namespace std;

const int maksimalQueue = 5; // Maksimal antrian
int front = 0;               // Penanda antrian
int back = 0;                // Penanda
    string queueTeller[5];       // Fungsi pengecekan

bool isFull()
{ // Pengecekan antrian penuh atau tidak
    if (back == maksimalQueue)
    {
        return true; // =1
    }
    else
    {
        return false;
    }
}
bool isEmpty()
{ // Antriannya kosong atau tidak
    if (back == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void enqueueAntrian(string data)
{ // Fungsi menambahkan antrian
    if (isFull())
    {
        cout << "Antrian penuh" << endl;
    }
    else
    {
        if (isEmpty())
        { // Kondisi ketika queue kosong
            queueTeller[0] = data;
            front++;
            back++;
        }
        else
        { // Antrianya ada isi
            queueTeller[back] = data;
            back++;
        }
    }
}
void dequeueAntrian()
{ // Fungsi mengurangi antrian
    if (isEmpty())
    {
        cout << "Antrian kosong" << endl;
    }
    else
    {
        for (int i = 0; i < back; i++)
        {
            queueTeller[i] = queueTeller[i + 1];
        }
        back--;
    }
}
int countQueue()
{ // Fungsi menghitung banyak antrian
    return back;
}
void clearQueue()
{ // Fungsi menghapus semua antrian
    if (isEmpty())
    {
        cout << "Antrian kosong" << endl;
    }
    else
    {
        for (int i = 0; i < back; i++)
        {
            queueTeller[i] = "";
        }
        back = 0;
        front = 0;
    }
}
void viewQueue()
{ // Fungsi melihat antrian
    cout << "Data antrian teller:" << endl;
    for (int i = 0; i < maksimalQueue; i++)
    {
        if (queueTeller[i] != "")
        {
            cout << i + 1 << ". " << queueTeller[i] <<

                endl;
        }
        else
        {
            cout << i + 1 << ". (kosong)" << endl;
        }
    }
}
int main()
{
    enqueueAntrian("Andi");
    enqueueAntrian("Maya");
    viewQueue();
    cout << "Jumlah antrian = " << countQueue() << endl;
    dequeueAntrian();
    viewQueue();
    cout << "Jumlah antrian = " << countQueue() << endl;
    clearQueue();
    viewQueue();
    cout << "Jumlah antrian = " << countQueue() << endl;
    return 0;
}
```


### Screenshot Output
![guided 1](https://github.com/Lorentz4kei/Struktur-Data-Assignment/assets/161665225/20fae807-463a-4b42-9121-d1cef97690df)



## Unguided

### 1. Ubahlah penerapan konsep queue pada bagian guided dari array menjadi linked list.
```C++
#include <iostream>
using namespace std;

struct Node {
  string data;
  Node* next;
};

Node* front = nullptr;
Node* back = nullptr;

bool isFull() {
  return false; // Linked list tidak memiliki batasan maksimum
}

bool isEmpty() {
  return front == nullptr;
}

void enqueueAntrian(string data) {
  Node* newNode = new Node;
  newNode->data = data;
  newNode->next = nullptr;

  if (isEmpty()) {
    front = newNode;
    back = newNode;
  } else {
    back->next = newNode;
    back = newNode;
  }
}

void dequeueAntrian() {
  if (isEmpty()) {
    cout << "Antrian kosong" << endl;
    return;
  }

  Node* temp = front;
  front = front->next;
  delete temp;

  if (front == nullptr) {
    back = nullptr;
  }
}

int countQueue() {
  int count = 0;
  Node* current = front;
  while (current != nullptr) {
    count++;
    current = current->next;
  }
  return count;
}

void clearQueue() {
  while (front != nullptr) {
    Node* temp = front;
    front = front->next;
    delete temp;
  }
  back = nullptr;
}

void viewQueue() {
  cout << "Data antrian teller:" << endl;
  Node* current = front;
  while (current != nullptr) {
    cout << current->data << " ";
    current = current->next;
  }
  cout << endl;
}

int main() {
  enqueueAntrian("Andi");
  enqueueAntrian("Maya");
  viewQueue();
  cout << "Jumlah antrian = " << countQueue() << endl;
  dequeueAntrian();
  viewQueue();
  cout << "Jumlah antrian = " << countQueue() << endl;
  clearQueue();
  viewQueue();
  cout << "Jumlah antrian = " << countQueue() << endl;
  return 0;
}
```

### Screenshot Output
![unguided 1](https://github.com/Lorentz4kei/Struktur-Data-Assignment/assets/161665225/8812f5b3-fb91-4502-b315-0cc8e483a722)


### Deskripsi Program
Program ini menunjukkan bagaimana daftar tertaut dapat digunakan untuk mengelola antrean secara efisien tanpa batasan ukuran maksimum. Fungsi yang diterapkan memudahkan manajemen antrian, seperti menambah, menghapus, menghitung, menghapus dan menampilkan isi antrian. Program ini berguna untuk memahami dasar-dasar operasi antrian dan manipulasi data menggunakan daftar tertaut. dari.


### 2. Dari nomor 1 buatlah konsep antri dengan atribut Nama mahasiswa dan NIM Mahasiswa
```C++
#include <iostream>
#include <string>

using namespace std;

struct Node
{
    string namaMahasiswa;
    string nim;
    Node *next;
};

Node *front = nullptr;
Node *back = nullptr;

bool isFull()
{
    return false; // Linked list tidak memiliki batasan maksimum
}

bool isEmpty()
{
    return front == nullptr;
}

void enqueueAntrian(string nama, string nim)
{
    Node *newNode = new Node;
    newNode->namaMahasiswa = nama;
    newNode->nim = nim;
    newNode->next = nullptr;

    if (isEmpty())
    {
        front = newNode;
        back = newNode;
    }
    else
    {
        back->next = newNode;
        back = newNode;
    }
}

void dequeueAntrian()
{
    if (isEmpty())
    {
        cout << "Antrian kosong" << endl;
        return;
    }

    Node *temp = front;
    front = front->next;
    delete temp;

    if (front == nullptr)
    {
        back = nullptr;
    }
}

int countQueue()
{
    int count = 0;
    Node *current = front;
    while (current != nullptr)
    {
        count++;
        current = current->next;
    }
    return count;
}

void clearQueue()
{
    while (front != nullptr)
    {
        Node *temp = front;
        front = front->next;
        delete temp;
    }
    back = nullptr;
}

void viewQueue()
{
    cout << "Data antrian mahasiswa:" << endl;
    Node *current = front;
    while (current != nullptr)
    {
        cout << "Nama: " << current->namaMahasiswa << ", NIM: " << current->nim << endl;
        current = current->next;
    }
}

int main()
{
    enqueueAntrian("Andi", "2311102193");
    enqueueAntrian("Budi", "2311102194");
    viewQueue();
    dequeueAntrian();
    viewQueue();
    return 0;
}
```
### Screenshot Output
![unguided 2 b](https://github.com/Lorentz4kei/Struktur-Data-Assignment/assets/161665225/57e1bd7f-2ff9-4775-bdb7-2997eeddd1cc)

### Deskripsi Program
Program ini menunjukkan cara pengelolaan antrian siswa menggunakan linked list dengan menggunakan operasi dasar seperti menambah elemen (antrian), menghilangkan elemen (antrian), menghitung elemen, mengosongkan antrian, dan menampilkan isi antrian. Daftar tertaut memungkinkan fleksibilitas urutan ini dengan tidak membatasi jumlah maksimum elemen dan efisiensi penambahan dan penghapusan elemen.


## Kesimpulan 
Antrian adalah struktur data yang digunakan untuk menyimpan sekelompok elemen berdasarkan FIFO (First In, First Out), mirip dengan antrian harian, dimana elemen pertama yang dimasukkan ke dalam antrian juga merupakan elemen pertama yang dikeluarkan.Dengan memahami konsep dasar C++ dan penggunaan antrian, pemrogram dapat membuat kode yang lebih efisien dan mudah dipahami saat bekerja dengan struktur data baris dalam perangkat lunak. dari.


## Daftar Pustaka

[1]. Agam Rizky, PENERAPAN ALGORITMA QUEUE PADA APLIKASI PEMESANAN OBAT BERBASIS MOBILE PADA APOTEK ARUBA FARMA DEPOK, Volume 1, No. 5, LOGIC : Jurnal Ilmu Komputer dan Pendidikan, Agustus 2023.

