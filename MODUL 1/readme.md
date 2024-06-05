# <h1 align="center">Laporan Praktikum Modul Tipe Data</h1>
<p align="center">Aditya Sulistiawan</p>

## Dasar Teori
Tipe Data 
Tipe data adalah konsep yang digunakan dalam pemrograman untuk 
menunjukkan tipe nilai atau informasi yang disimpan dalam variabel atau konstanta.
 Berbagai tipe data yang  digunakan adalah:: 
    1.  Tipe Data Primitif. 
    2.  Tipe Data Abstrak. 
    3.  Tipe Data Koleksi.

Tipe Data Primitif 
Tipe data primitif adalah tipe data dasar yang masing-masing dapat berisi satu nilai,
 dan nilainya tidak dapat diubah dengan referensi dari tipe data primitif non-.
 Tipe data primitif dianggap sama jika dua nilai tipe data primitif  sama.
 Ada daftar tipe data primitif yang umum digunakan dalam bahasa tersebut.
pemrograman C++ yaitu :  
    1.  Int : Tipe data integer adalah salah satu dari tipe data primitif  pemrograman 
        yang digunakan untuk menyimpan bilangan bulat (angka tanpa pecahan atau titik desimal).
    2.  Float : Tipe data Float adalah salah satu tipe data primitif  pemrograman 
        yang digunakan untuk menyimpan angka desimal (angka dengan bagian desimal).
    3.  Double : Tipe data Double adalah  tipe data primitif pemrograman 
        yang digunakan untuk menyimpan angka desimal (angka dengan bagian pecahan) 
        dengan presisi ganda dibandingkan dengan tipe  data float .
    4.  Char : Char atau char adalah tipe data dasar dalam pemrograman yang  digunakan 
        untuk menyimpan karakter tunggal seperti huruf, angka, tanda baca, atau  karakter 
        khusus lainnya.
    5.  Bool : Bool atau boolean adalah tipe data primitif dalam pemrograman yang 
        digunakan untuk menyimpan nilai kebenaran (true atau false). 
    6.  Void : Tipe data void adalah  tipe data khusus dalam pemrograman yang menunjukkan
        bahwa tidak ada nilai atau data yang dihasilkan oleh suatu fungsi atau  prosedur. 

Tipe Data Abstrak 
Tipe data abstrak atau tipe data abstrak adalah  tipe data dalam pemrograman
yang digunakan untuk menggambarkan sifat dan perilaku suatu objek atau struktur  data.
Tipe data ini biasanya dibuat dalam suatu kelas.
Kelas  ini  merupakan pengembangan dari konstruksi bahasa pemrograman C++.
    a.  Class : kelas berisi definisi data dan metode yang digunakan untuk 
        menggambarkan suatu objek dan perilakunya. 
    b.  Struct / structure :  Tipe data yang di bangun dan berisi kumpulan variabel 
        yang memiliki nama yang sama dan terkait satu sama lai

Tipe Data Koleksi  
Tipe data kumpulan adalah tipe data  pemrograman yang digunakan untuk  menyimpan kumpulan 
nilai atau objek  serupa dalam satu variabel atau struktur  data.
Tipe data koleksi digunakan untuk menyimpan dan memanipulasi data  dalam jumlah besar secara bersamaan.
Tipe data koleksi biasanya terdiri dari beberapa tipe:
    1.  Array : adalah tipe data koleksi yang digunakan untuk menyimpan data dengan 
        tipe data yang sama dalam urutan tertentu. Array memungkinkan programmer 
        untuk mengakses elemen data secara mudah dengan menggunakan indeks. 
    2.  Map atau Dictionary: adalah tipe data koleksi yang digunakan untuk 
        menyimpan data dalam bentuk pasangan key-value. Map memungkinkan 
        programmer untuk mengakses nilai berdasarkan key-nya dengan mudah. 
    3.  Vektor adalah kumpulan tipe data  dalam pemrograman yang digunakan untuk  
        menyimpan data dengan tipe data yang  
        sama dalam urutan tertentu dan  dapat diubah ukurannya.
        Vektor mirip dengan array, tetapi vektor mempunyai kemampuan untuk mengubah 
        ukurannya secara dinamis saat program sedang berjalan.



## Guided 

### 1. Tipe Data Primitif
```C++
#include<iostream> 
 
using namespace std; 
 
int main() 
{ 
    char op; 
    float num1, num2; 
 
    cout<<"Masukan operasi bilangan : "; 
    cin>>op; 
    cout<<"Masukan bilangan 1 : "; 
    cin>>num1; 
    cout<<"Masukan bilangan 2 : "; 
    cin>>num2; 
 
    switch (op) 
    { 
    case '+': 
        cout << num1+num2; 
        break; 
 
    case '/': 
        cout << num1/num2; 
        break; 
 
    case '-': 
        cout << num1-num2; 
        break; 
 
    case '*': 
        cout << num1*num2; 
        break; 
 
    default: 
    cout << "error!"; 
    break; 
    } 
    return 0;
}
```

Program di atas adalah contoh penggunaan tipe data primitif char dan float pada .
Ini adalah program perhitungan sederhana yang dapat melakukan  operasi matematika dasar: penjumlahan, pengurangan, perkalian, dan pembagian.
Program  ini  menggunakan struktur kontrol sakelar untuk mengevaluasi operator  yang dimasukkan  oleh pengguna dan melakukan operasi terkait pada nilai numerik  yang  dimasukkan oleh pengguna.
Program ini meminta pengguna untuk memasukkan operator dan dua angka.
Program kemudian  menampilkan hasil operasi pada layar .
Jika operator yang dimasukkan tidak sesuai dengan empat operator aritmatika dasar di , program akan menampilkan pesan kesalahan "Error!" di layar.
### 2. Tipe Data Abstrak
```C++
#include<stdio.h> 
using namespace std; 

struct mahasiswa{ 
    char *name; 
    char *address; 
    int age; 
}; 

int main(){ 

struct mahasiswa mhs1,mhs2; 
mhs1.name = "dian"; 
mhs1.address = "Mataram"; 
mhs1.age = 22; 

mhs2.name = "Bambang"; 
mhs2.address = "Mataram"; 
mhs2.age = 23; 

printf("Mahasiswa 1 \n"); 
printf("Nama: %s\n", mhs1.name); 
printf("Alamat: %s\n", mhs1.address); 
printf("Umur: %d \n", mhs1.age); 
printf("Mahasiswa 2 \n"); 
printf("Nama: %s \n", mhs2.name); 
printf("Alamat: %s \n", mhs2.address); 
printf("Umur: %d \n", mhs2.age); 

return 0;
} 
Program tersebut menginisialisasi dua variabel struktur "mahasiswa" yaitu "mhs1" 
dan "mhs2" dengan data mahasiswa tertentu. Kemudian program mencetak 
informasi mengenai data mahasiswa tersebut menggunakan fungsi printf() dengan 
format yang telah ditentukan. Output OK dari program ini adalah informasi tentang 
dua data siswa yang  diinisialisasi sebelumnya: nama, alamat,  umur.

### 3. Tipe Data Koleksi
```C++
#include<iostream> 
using namespace std; 
int main() 
{ 
int nilai[5]; 
nilai[0]=23; 
nilai[1]=50; 
nilai[2]=34; 
nilai[3]=78; 
nilai[4]=90; 
cout << "Isi array Pertama: " << nilai[0]<<endl; 
cout << "Isi array Kedua: " << nilai[1]<<endl; 
cout << "Isi array Ketiiga: " << nilai[2]<<endl; 
return 0; 
}
```

Program ini menginisialisasi setiap elemen array dengan nilai tertentu menggunakan  
operator '=' dan indeks elemen dalam array.
Program kemudian menggunakan cout untuk mencetak nilai untuk tiga elemen pertama dalam array.
Output dari program fungsi format  yang ditentukan adalah informasi tentang konten 
dari tiga elemen pertama dari array "nilai".

## Unguided
 
### 1. Buatlah program menggunakan tipe data primitif minimal dua fungsi dan bebas. Menampilkan program, jelaskan program tersebut dan ambil kesimpulan dari materi tipe data primitif!

```C++
#include <iostream> 
using namespace std; 

int main() { 
    double jari_jari, luas, keliling; 
    const double pi = 3.14; 

    cout << "Masukkan jari-jari lingkaran: "; 
    cin >> jari_jari; 

    luas = pi * jari_jari * jari_jari; 
    keliling = 2 * pi * jari_jari; 

    cout << "Luas lingkaran adalah: " << luas << endl; 
    cout << "Keliling lingkaran adalah: " << keliling << endl; 
    return 0; 
}
```
Program di atas menggunakan tipe data primitif ganda untuk menyimpan nilai radius, luas, dan keliling .
Variabel radius digunakan untuk menyimpan nilai radius lingkaran  yang dimasukkan oleh pengguna melalui cin.
Untuk  menghitung luas dan keliling lingkaran, program menggunakan rumus yang  sesuai dengan nilai pi yang diberikan sebagai konstanta const double pi = 3,14; Hal ini diumumkan.
Luas lingkaran dihitung dengan rumus pi*jari-jari*jari-jari, , dan keliling lingkaran dihitung dengan rumus 2*pi*jari-jari.
Kemudian program  menampilkan hasil perhitungan luas dan keliling lingkaran sebagai “cout”.
 
Dari program diatas kita dapat menyimpulkan bahwa tipe data primitif sangat  berguna dalam pemrograman untuk menyimpan angka-angka yang diperlukan untuk perhitungan matematis.
Contoh ini menggunakan tipe data double  untuk menampung nilai desimal hasil perhitungan.
Selain  itu, cin dan cout juga merupakan fungsi penting dari bahasa C++ yang memungkinkan input dan output  program.

### 2. Jelaskan fungsi dari class dan structur secara detail dan berikan contoh programnya!

```C++
#include<iostream> 
using namespace std; 

class Mahasiswa { 
    public: 
        string name; 
        int age; 
        string address; 
    void display() { 
        cout << "Nama: " << name << endl; 
        cout << "Umur: " << age << endl; 
        cout << "Alamat: " << address << endl; 
    } 
}; 

int main() { 
    Mahasiswa mhs; 
    mhs.name = "Raffy"; 
    mhs.age = 20; 
    mhs.address = "Bekasi"; 
    mhs.display(); 

return 0; 
} 
```
properti: Nama, Usia, dan Alamat.
Selanjutnya, kita juga menambahkan  metode bernama display() untuk menampilkan properti  
objek Mahasiswa yang  dibuat.

Struct : Struct mirip dengan class dalam hal menyimpan data, namun berbeda dalam hal aksesibilitas dan penggunaannya. Struct hanya dapat menyimpan data, tanpa adanya fungsi yang terkait di dalamnya. Selain itu, semua properti dalam struct dianggap sebagai public, yang berarti dapat diakses langsung tanpa harus melalui metode. Berikut adalah contoh program sederhana untuk mengilustrasikan struct:

```C++
#include<iostream> 
using namespace std; 

struct Mahasiswa { 
string name; 
int age; 
string address; 
}; 

int main() { 
Mahasiswa mhs; 
mhs.name = "Raffy"; 
mhs.age = 20; 
mhs.address = "Bekasi"; 

cout << "Nama: " << mhs.name << endl; 
cout << "Umur: " << mhs.age << endl; 
cout << "Alamat: " << mhs.address << endl; 

return 0; 
}
```

class: class adalah tipe data khusus dalam bahasa pemrograman yang dapat menyimpan data dan fungsi.
class digunakan untuk mewakili suatu objek yang terdiri dari beberapa properti (data) dan metode 
(fungsi) yang digunakan untuk memanipulasi data tersebut

### 3. Buat dan jelaskan program menggunakan fungsi map dan jelaskan perbedaan array dengan map.

```C++
 #include <iostream> 
#include <map> 

using namespace std; 

int main() { 
    map<string, int> umur; 

    umur["Raffy"] = 20; 
    umur["Haikal"] = 21; 
    umur["Dimas"] = 31; 

    cout << "Umur Raffy: " << umur["Raffy"] << endl; 
    cout << "Umur Haikal: " << umur["Haikal"] << endl; 
    cout << "Umur Dimas: " << umur["Dimas"] << endl; 

    return 0; 
} 
```
Program di atas menggunakan fungsi peta dari perpustakaan C++. map
adalah tipe data asosiatif yang memetakan nilai kunci ke nilai data. Pada program
di atas, kita membuat variabel umur yang berisi peta dari string (nama)
ke bilangan bulat (usia). Kemudian kita masukkan datanya ke dalam age
menggunakan notasi array. Selanjutnya, umur
setiap orang dicetak dengan mencari nilai umur dengan entri tabel. \N.

## Kesimpulan
Pada latihan kali ini kita akan mempelajari tentang tipe data yang terdiri dari tiga tipe yaitu tipe data primitif, tipe data abstrak, dan tipe data kumpulan. Tipe data primitif adalah tipe data yang dapat menyimpan satu nilai dalam satu waktu dan nilainya tidak dapat diubah seperti tipe data non-primitif. Jika nilainya sama, maka tipe data primitif dianggap sama. Tipe data abstrak, kemudian, adalah tipe data yang digunakan untuk mendeskripsikan properti dan perilaku suatu objek, biasanya diimplementasikan di kelas. Kelas merupakan evolusi dari struktur bahasa pemrograman C++. Sedangkan tipe data kumpulan adalah tipe data yang terdiri dari serangkaian objek dengan data atau indeks. Siswa dapat membuat program dengan menggunakan ketiga jenis data tersebut. Proses pembuatan program mengajarkan siswa ketelitian, ketekunan, dan berpikir kritis aktif dalam pemecahan masalah dan pelaksanaan program. Meskipun siswa berhasil membuat program yang diusulkan, mereka masih perlu menemukan kode yang lebih ringkas untuk menyempurnakan program yang mereka buat. dari.
## Referensi
[1] I. Holm, Narrator, and J. Fullerton-Smith, Producer, How to Build a Human [DVD]. London: BBC; 2002.
