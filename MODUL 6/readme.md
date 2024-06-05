# <h1 align="center"> Laporan Praktium Modul 6 Stack </h1>
<p align="center"> Aditya Sulistiawan <p>
<p align="center"> 2311102193 </p>

## Dasar Teori
<p align = "justify">
Stack adalah struktur data yang mengikuti prinsip LIFO. Artinya elemen terakhir yang dimasukkan adalah elemen pertama yang dicari.Stack dapat didefinisikan sebagai kumpulan item data yang disimpan secara berurutan, dengan item terakhir di atas.Stack dapat digunakan untuk banyak aplikasi, seperti mengevaluasi dan mengkonversi ekspresi matematika, dan juga dapat digunakan untuk mengimplementasikan algoritma seperti mengevaluasi ekspresi matematika dan mengkonversi dari notasi infiks ke postfix [1]..
 

## Guided 
```C++
#include <iostream>
using namespace std;
string arrayBuku[5];
int maksimal = 5, top = 0;
bool isFull()
{
    return (top == maksimal);
}
bool isEmpty()
{
    return (top == 0);
}
void pushArrayBuku(string data)
{
    if (isFull())
    {
        cout << "Data telah penuh" << endl;
    }
    else
    {
        arrayBuku[top] = data;
        top++;
    }
}
void popArrayBuku()
{
    if (isEmpty())
    {
        cout << "Tidak ada data yang dihapus" << endl;
    }
    else
    {
        arrayBuku[top - 1] = "";
        top--;
    }
}
void peekArrayBuku(int posisi)
{
    if (isEmpty())
    {
        cout << "Tidak ada data yang bisa dilihat" << endl;
    }
    else
    {
        int index = top;
        for (int i = 1; i <= posisi; i++)
        {
            index--;
        }
        cout << "Posisi ke " << posisi << " adalah " << arrayBuku[index] << endl;
    }
}
int countStack()
{
    return top;
}
void changeArrayBuku(int posisi, string data)
{
    if (posisi > top)
    {
        cout << "Posisi melebihi data yang ada" << endl;
    }
    else
    {
        int index = top;
        for (int i = 1; i <= posisi; i++)
        {
            index--;
        }
        arrayBuku[index] = data;
    }
}
void destroyArraybuku()
{
    for (int i = top; i >= 0; i--)
    {
        arrayBuku[i] = "";
    }
    top = 0;
}
void cetakArrayBuku()
{
    if (isEmpty())
    {
        cout << "Tidak ada data yang dicetak" << endl;
    }
    else
    {
        for (int i = top - 1; i >= 0; i--)
        {
            cout << arrayBuku[i] << endl;
        }
    }
}
int main()
{
    pushArrayBuku("Kalkulus");
    pushArrayBuku("Struktur Data");
    pushArrayBuku("Matematika Diskrit");
    pushArrayBuku("Dasar Multimedia");
    pushArrayBuku("Inggris");
    cetakArrayBuku();
    cout << "\n";
    cout << "Apakah data stack penuh? " << isFull() << endl;
    cout << "Apakah data stack kosong? " << isEmpty() << endl;
    peekArrayBuku(2);
    popArrayBuku();
    cout << "Banyaknya data = " << countStack() << endl;
    changeArrayBuku(2, "Bahasa Jerman");
    cetakArrayBuku();
    cout << "\n";
    destroyArraybuku();
    cout << "Jumlah data setelah dihapus: " << top << endl;
    cetakArrayBuku();
    return 0;
}
```
### Screenshot Output
![guided 1](https://github.com/Lorentz4kei/Struktur-Data-Assignment/assets/161665225/e28c7f9c-4630-429e-aaf4-aefbb23e64a1)




## Unguided 

### Unguided 1
Buatlah program untuk menentukan apakah kalimat tersebut yang diinputkan dalam program stack adalah palindrom/tidak. Palindrom kalimat yang dibaca dari depan dan belakang sama. Jelaskan bagaimana cara kerja programnya.

```C++
#include <iostream>
#include <stack>
#include <string>
#include <algorithm>

using namespace std;

// Fungsi untuk mengecek apakah string adalah palindrome
bool isPalindrome(string str) {
  // Deklarasi stack untuk menyimpan karakter
  stack<char> st;

  // Menambahkan karakter dari string ke stack
  for (char c : str) {
    st.push(c);
  }

  // String kosong untuk menyimpan hasil kebalikan dari string input
  string reversed = "";

  // Mengambil karakter dari stack dan menambahkannya ke string reversed
  while (!st.empty()) {
    reversed += st.top();
    st.pop();
  }

  // Membandingkan string input dengan string reversed
  return str == reversed;
}

int main() {
  string input;

  // Meminta pengguna untuk memasukkan string
  cout << "Masukan string: ";
  getline(cin, input);

  // Memanggil fungsi isPalindrome untuk mengecek apakah string palindrome
  if (isPalindrome(input)) {
    cout << "String ini palindrome." << endl;
  } else {
    cout << "String ini bukan palindrome." << endl;
  }

  return 0;
}

```
### Screenshot Output
![unguided 1](https://github.com/Lorentz4kei/Struktur-Data-Assignment/assets/161665225/4498292a-d152-48f5-a503-717b6851d331)

### Deskripsi Program
Program ini menggunakan Stack untuk memeriksa apakah suatu string adalah palindrom. Setelah menerima masukan string dari pengguna, program menambahkan setiap karakter string ke Stack. Program kemudian mengambil karakter dari virus satu per satu untuk membentuk string kebalikannya. Terakhir, program membandingkan string asli dengan string yang dibalik dan menampilkan hasilnya apakah string tersebut palindrom (serta pembacaan mundur atau maju) atau bukan.



### Unguided 2
Buatlah program untuk melakukan pembalikan terhadap kalimat menggunakan stack dengan minimal 3 kata. Jelaskan output program dan source codenya beserta operasi/fungsi yang dibuat?
```C++
#include <iostream>
#include <conio.h>
#include <string.h> 

using namespace std;

struct Stack {
  char isi[100]; 
  int atas;
};

void push(Stack &s, char x) { // Fungsi untuk menambahkan elemen ke Stack
  if (s.atas == 99) { // Memeriksa apakah Stack penuh
    cout << "Stack sudah penuh"; // Menampilkan pesan error
    getch(); // Menunggu input pengguna
  } else {
    s.atas = s.atas + 1; // Meningkatkan indeks elemen terakhir
    s.isi[s.atas] = x; // Menyimpan elemen ke dalam Stack
  }
}

char pop(Stack &s) { // Fungsi untuk menghapus elemen dari Stack
  char hasil; // Variabel untuk menyimpan elemen yang dikeluarkan
  if (s.atas == 0) { // Memeriksa apakah Stack kosong
    cout << "Stack sudah kosong"; // Menampilkan pesan error
    hasil = ' '; // Mengatur nilai default jika kosong
  } else {
    hasil = s.isi[s.atas]; // Menyimpan elemen terakhir ke variabel hasil
    s.atas = s.atas - 1; // Menurunkan indeks elemen terakhir
  }
  return hasil; // Mengembalikan elemen yang dikeluarkan
}

int main() { // Fungsi utama
  Stack s; // Menginisialisasi Stack `s`
  s.atas = 0; // Mengatur indeks elemen terakhir ke 0 (Stack kosong)
  char kalimat[100]; // Array karakter untuk menyimpan kalimat
  cout << "Masukkan kalimat : "; // Mencetak prompt untuk pengguna
  gets(kalimat); // Membaca kalimat dari pengguna
  system("cls"); // Membersihkan layar
  cout << "Kalimat asli : " << kalimat << endl; // Menampilkan kalimat asli
  for (int i = 0; i < strlen(kalimat); i++) { // Meloop melalui setiap karakter kalimat
    push(s, kalimat[i]); // Menambahkan karakter ke Stack
  }
  cout << "\nKalimat setelah di Balik : "; // Mencetak prompt untuk kalimat yang dibalik
  for (int i = 0; i < strlen(kalimat); i++) { // Meloop melalui setiap karakter kalimat
    cout << pop(s); // Mengeluarkan dan mencetak karakter dari Stack
  }
  cout << endl; // Menambahkan baris baru
  return 0; // Mengembalikan nilai 0 untuk menunjukkan program berhasil
}

```

### Screenshot Output
![unguided 2](https://github.com/Lorentz4kei/Struktur-Data-Assignment/assets/161665225/d777a71a-10fb-4d3b-bc14-152ee90b1f6d)


### Deskripsi Program
Program ini menggunakan Stack untuk membalikkan urutan karakter pernyataan yang dimasukkan oleh pengguna. Menggunakan operasi Stack dasar (push dan pop), program membaca input, menambahkan setiap karakter ke Stack, dan kemudian mencetaknya dalam urutan terbalik untuk mendapatkan pernyataan sebaliknya..

## Kesimpulan 

<p align = "Justify">
Stack dalam konteks pemrograman adalah struktur data LIFO yang memungkinkan elemen ditambahkan dan dihapus di bagian akhir, yang disebut "atas".Stack penting untuk menjalankan fungsi dan subrutin, menguraikan, mengelola memori, dan mengelola aplikasi lain.Dalam bahasa pemrograman C++, Stack dapat diimplementasikan menggunakan array atau daftar tertaut, dan beberapa contoh implementasi Stack telah dipublikasikan dalam publikasi akademis antara tahun 2020 dan 2024..

</p>

## Daftar Pustaka

[1]. Roida Sihotang, Haris Saputro, Satria Novari, SISTEM INFORMASI PENGGAJIAN LKPENGLISH ACADEMY MENGGUNAKAN EMBARCADERO XE2 BERBASIS CLIET SERVER, Vol. 4, No. 1, Jurnal Teknik Informatika Mahakarya (JTIM), Juni 2021.

