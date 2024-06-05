# <h1 align="center">Laporan Praktikum Modul 2 - Array</h1>
<p align="center">Aditya Sulistiawan</p>
<p align="center">2311102193 / IF-11-E</p>


## Dasar Teori

A.Pengertian Array

Array adalah struktur yang terdiri dari beberapa elemen dengan tipe data yang sama. Elemen matriks disusun dalam memori komputer. Semua elemen array mempunyai tipe yang sama. Array cocok untuk mengatur kumpulan data homogen yang ukuran atau jumlah maksimum elemennya diketahui sejak awal. Homogenitas berarti setiap elemen array tertentu harus memiliki tipe data yang sama.
Array dibagi menjadi:.
  
1. Array Satu Dimensi
    
Array satu dimensi tidak lain adalah kumpulan elemen-elemen identik yang tersusun dalam satu baris, tetapi isi dari elemen tersebut boleh berbeda.  Dapat disebut juga dengan istilah vektor yang menggambarkan data dalam suatu urutan
Deklarasi : Type_Data Nama_Variabel [index] 
Misalnya : int A[5]; 

2.  Array Dua Dimensi 

Array dua dimensi, sering digambarkan sebagai matriks, merupakan perpanjangan dari array satu dimensi. Tabel satu dimensi hanya terdiri dari satu baris dengan beberapa kolom elemen, sedangkan tabel dua dimensi terdiri dari beberapa baris dan beberapa kolom elemen bertipe sama. Deklarasi array dua dimensi hampir sama dengan deklarasi array satu dimensi, hanya saja array dua dimensi memiliki dua elemen array yang diapit tanda kurung siku, dan keduanya tidak boleh sama.
Deklarasi : Type_Data Nama_Variabel [Index1] [index2]; 
Misal : int A[3][2];

 3.   Array Tiga Dimensi 
 
Array tiga dimensi digunakan untuk mengelola data dalam bentuk 3 dimensi atau tiga sisi. 
Deklarasi : Type_Data Nama_Variabel [index1] [ndex2] [index3]; 
Misal : int A [3][4][2];

4.   Array Banyak Dimensi

Sebenarnya array banyak dimensi ini tidak terlalu sering dipakai seperti halnya array satu dimensi, dua dimensi, dan tiga dimensi. Array banyak dimensi ini pada dasarnya sama dengan array sebelimnya kecuali pada jumlah dimensinya.
Deklarasi : Type_Data Nama_Variabel [index1] [ndex2] [index3] [ndex4].....;
Misal : int A [3][4][2][5];

## Guided 

### 1. Program input array tiga dimensi

```C++
    #include <iostream>
    using namespace std;
    // PROGRAM INPUT ARRAY 3 DIMENSI
    int main()
    {
    // Deklarasi array
    int arr[2][3][3];
    // Input elemen
    for (int x = 0; x < 2; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            for (int z = 0; z < 3; z++)
            {
                cout << "Input Array[" << x << "][" << y << "][" << z << "] = ";
                cin >> arr[x][y][z];
            }
        }
        cout << endl;
    }
    // Output Array
    for (int x = 0; x < 2; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            for (int z = 0; z < 3; z++)
            {
                cout << "Data Array[" << x << "][" << y << "][" << z << "] = " << arr[x][y][z] << endl;
            }
        }
    }
    cout << endl;
    // Tampilan array
    for (int x = 0; x < 2; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            for (int z = 0; z < 3; z++)
            {
                cout << arr[x][y][z] << ends;
            }
            cout << endl;
        }
        cout <<endl;
    }
    }
```

    Program tersebut merupakan sebuah program dalam bahasa C++ yang memungkinkan pengguna untuk menginputkan data ke dalam array tiga dimensi dan kemudian menampilkannya. Program ini terdiri dari tiga bagian utama:

#### Deskripsi Program

Program tersebut berfungsi untuk menginputkan data ke dalam array tiga dimensi dan kemudian menampilkannya. Program ini terdiri dari tiga bagian utama:

1.Input Data:

Program meminta kita untuk memasukkan nilai-nilai ke dalam array tiga dimensi menggunakan tiga nested loop.

2.Output Data:

Setelah semua data dimasukkan, program akan menampilkan nilai-nilai dari array tiga dimensi yang telah dimasukkan oleh kita.

3.Tampilan Array:

Program juga menampilkan array dalam bentuk yang lebih sederhana, dengan menampilkan setiap baris dari array dalam satu baris dengan menggunakan perulangan.

### 2. Program mencari nilai maksimal pada array

```C++
     #include <iostream>
     using namespace std;
     int main()
     {
     int maks, a, i = 1, lokasi;
     cout << "Masukkan panjang array: ";
     cin >> a;
     int array[a];
     cout << "Masukkan " << a << " angka\n";
     for (i = 0; i < a; i++)
     {
     cout << "Array ke-" << (i) << ": ";
     cin >> array[i];
     }
     maks = array[0];
     for (i = 0; i < a; i++)
     {
     if (array[i] > maks)
     {
     maks = array[i];
     lokasi = i;
     }
     }
     cout << "Nilai maksimum adalah " << maks << " berada di Array ke " << lokasi << endl;
     }
```

#### Deskrpisi Program

Program tersebut bertujuan untuk mencari nikai maksimum yang sudah diinputkan.

## Unguided

### 1.Buatlah program untuk menampilkan Output seperti berikut dengan data yang diinputkan oleh user!
```C++
#include <iostream> 
 
using namespace std; 
 
int main(){ 
    int array[10]; 
     
    cout << "Masukan data array: " << endl; 
    for (int i = 1; i <= 10; i++) { 
        cout<<"Array ke-"<<(i)<<" : "; 
        cin >> array[i]; 
    } 
     
    cout << "Data Array  : "; 
    for(int i = 1; i <= 10; i++) { 
        cout << array[i] << " "; 
    } 
    cout << endl; 
 
    cout << "Nomor genap : "; 
    for(int i = 1; i <= 10; i++) { 
        if (array[i] % 2 == 0){ 
            cout << array[i] << " "; 
        } 
    } 
    cout << endl; 
 
    cout << "Nomor ganjil: "; 
    for (int i = 1; i <= 10; i++) { 
        if (array[i] % 2 != 0) { 
            cout << array[i] << " "; 
        } 
    } 
    cout << endl; 
 
    return 0; 
} 
```

#### Output 

![Unguided 1](https://github.com/Lorentz4kei/Struktur-Data-Assignment/assets/161665225/8c7eeb7b-e369-41bf-910d-3cbfc0ec82a2)



### Deskrpisi Program

Program mencoba membedakan bilangan genap dan ganjil dari array yang berisi 10 bilangan masukan.

### 2.Buatlah program Input array tiga dimensi (seperti pada guided) tetapi jumlah atau ukuran elemennya diinputkan oleh user!
```C++
#include <iostream> 
 
using namespace std; 
 
int main() { 
  int x, y, z; 
 
  cout << "Masukkan ukuran array (x y z): "; 
  cin >> x >> y >> z; 
 
  int arr[x][y][z]; 
 
  for (int i = 0; i < x; i++) { 
    for (int j = 0; j < y; j++) { 
      for (int k = 0; k < z; k++) { 
        cout << "Input array [" << i << "][" << j << "][" << k 
<< "] = "; 
        cin >> arr[i][j][k]; 
      } 
    } 
    cout << endl; 
  } 
 
  cout << endl; 
  for (int i = 0; i < x; i++) { 
    for (int j = 0; j < y; j++) { 
      for (int k = 0; k < z; k++) { 
        cout << "Data array [" << i << "][" << j << "][" << k 
<< "] = " << arr[i][j][k] << endl; 
      } 
    } 
  } 
 
  cout << endl; 
  for (int i = 0; i < x; i++) { 
    for (int j = 0; j < y; j++) { 
for (int k = 0; k < z; k++) { 
cout << arr[i][j][k] << " "; 
} 
cout << endl; 
} 
cout << endl;  
} 
return 0; 
}
```

#### Output

![Unguided 2](https://github.com/Lorentz4kei/Struktur-Data-Assignment/assets/161665225/51b8d865-8f65-4833-87be-06aee9da1768)


### Deskrpisi Program

Program mencoba memasukkan jumlah elemen matriks dan ukuran matriks dalam format "kolom", kemudian meminta kita memasukkan nilai elemen matriks tiga dimensi. Setelah itu, program menampilkan data matriks dengan layar matriks satu per satu dengan urutan matriksnya.

### 3.Buatlah program menu untuk mencari nilai Maksimum, Minimum dan Nilai rata – rata dari suatu array dengan input yang dimasukan oleh user!
```C++
#include <iostream> 
#include <conio.h> 
 
using namespace std; 
 
void menu() 
{ 
    cout << "=====Menu=====" << endl; 
    cout << "1. Input Array" << endl; 
    cout << "2. Tampil Array" << endl; 
    cout << "3. Cari Nilai Minimum" << endl; 
    cout << "4. Cari Nilai Maksimum" << endl; 
    cout << "5. Hitung Rata-Rata" << endl; 
    cout << "Masukkan Pilihan : "; 
} 
    
    int minimum(int isi[]){ 
    int min = isi[0]; 
 
 
    for (int x=1;x<10;x++){ 
        if (isi[x]<min){ 
            min = isi[x]; 
        } 
    } 
    cout << "Nilai Minimum: " << min << endl; 
} 
 
    int maksimum (int isi []){ 
    int max = 0; 
 
    for (int x=0;x<10;x++){ 
        if (isi[x]>max){ 
            max = isi[x]; 
        } 
    } 
    cout << "Nilai Maksimum: " << max << endl; 
    } 
 
    float rata(int isi[]){ 
    int i; 
    float total = 0; 
    float hasil; 
 
    for (i=0;i<10;i++){ 
        total += isi[i]; 
    } 
    hasil = total/10; 
    cout << "Rata-ratanya adalah: " << hasil << endl; 
} 
 
 
int main() 
{ 
    int pil, bil[10]; 
    char opsi; 
    bool x; 
 
    do{ 
    menu(); 
    cin >> pil; 
    cout << endl; 
 
    if (pil == 1 || x == true || pil == 0){ 
        x = true; 
    switch (pil){ 
        case 1: 
            cout << "Masukkan Bilangan yang Anda inginkan" << 
endl; 
        for(int i=0; i<10;i++){ 
            cout << "Bilangan ke-" << i+1 << " : "; 
            cin >> bil[i]; 
        } 
        break; 
 
        case 2: 
            cout << "Data Array yang sudah dimasukkan" << 
endl; 
            for(int b=0; b<10; b++){ 
                cout << bil[b] << " "; 
            } 
            break; 
 
        case 3: 
            minimum(bil); 
            cout << endl; 
        break; 
 
        case 4: 
            maksimum(bil); 
            cout << endl; 
        break; 
 
        case 5: 
            rata(bil); 
            cout << endl; 
        break; 
    } 
 
 
    }else if (x == false && pil != 1) 
    { 
    cout << "Silahkan input nomor 1 dulu."; 
    goto mainloop; 
    } 
 
    mainloop: 
    cout << endl; 
    cout << "Apa Anda ingin memilih menu yang lain? [y/n]"; 
    opsi=getch(); 
    cout << endl; 
 
    }while (opsi == 'y'); 
    if (opsi == 'n'){ 
        cout << "Selesai"; 
    } 
 
return 0; 
} 
```

#### Output

![unguided 3 (1)](https://github.com/Lorentz4kei/Struktur-Data-Assignment/assets/161665225/6f1401f5-2871-47b7-a6e6-bc7d087838c7)

![unguided 3 (2)](https://github.com/Lorentz4kei/Struktur-Data-Assignment/assets/161665225/2a611eff-328a-44ff-a970-fbe666282327)


### Deskrpisi Program

Program mencoba memasukkan jumlah elemen dalam array dan kemudian mengisi array dengan nilai yang dimasukkan oleh pengguna. Setelah itu kita dapat memilih menu untuk mencari nilai maksimum, minimum atau rata-rata dari elemen tabel yang disisipkan. Program ini menggunakan kasus perubahan untuk mengimplementasikan pilihan kita, di mana dalam setiap kasus kita melakukan iterasi melalui tabel untuk menemukan nilai maksimum, minimum atau menghitung rata-rata dan kemudian menampilkan hasil sesuai dengan pilihan yang kita buat. Jika kita salah memasukkan pilihan, program akan memberikan pesan kesalahan.

## Kesimpulan

Array adalah struktur data yang terdiri dari sekumpulan elemen dengan tipe data yang sama yang disimpan secara berurutan dalam memori komputer. Setiap elemen array diidentifikasi berdasarkan indeksnya, yang dimulai dari 0. Tiga jenis array yang paling umum digunakan, yaitu array satu dimensi, array dua dimensi, dan array tiga dimensi atau multidimensi. Keuntungan menggunakan array adalah dapat menyimpan banyak nilai dengan satu nama variabel dan mempunyai kemampuan menyimpan data lebih dari satu dimensi. Hal ini membuat array sangat berguna dalam pemrograman untuk memfasilitasi pengelolaan data dan menghemat penggunaan variabel. Selain itu, tabel juga dapat digunakan untuk mempermudah pengolahan data, seperti mengurutkan, mencari nilai maksimum atau minimum, dan menghitung rata-rata. Namun penggunaan tabel juga mempunyai beberapa kelemahan. Alokasi memori yang benar dan manajemen memori yang efisien sangat penting untuk menghindari kesalahan atau kebocoran memori saat menggunakan array. Oleh karena itu, pemahaman yang baik tentang cara menggunakan dan mengelola tabel sangat diperlukan untuk menghindari masalah pada program yang dihasilkan.
## Referensi

https://osf.io/preprints/osf/vyech

