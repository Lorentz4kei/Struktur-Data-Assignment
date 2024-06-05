# <h1 align="center"> Laporan Praktium Modul 8 Searching</h1>
<p align="center"> Aditya Sulistiawan <p>
<p align="center"> 2311102193 </p>

## Dasar Teori
<p align = "justify">    
Pencarian biner adalah metode pencarian data yang diurutkan secara berurutan.Algoritma ini membagi data menjadi dua bagian dan kemudian memeriksa elemen tengah untuk melihat apakah data yang dihasilkannya kiri atau kanan.Proses ini diulangi hingga data yang dicari ditemukan [1].

Prinsip dasar pencarian biner adalah "divide and rule", yaitu. mempercepat proses pencarian dengan membagi ruang pencarian data menjadi bagian-bagian yang lebih kecil.Penelusuran biner memiliki keuntungan karena mampu mencari data dalam jumlah besar secara efisien dengan sedikit upaya komputasi.Algoritma ini cocok digunakan dengan data terurut [1].

Pencarian Reguler [Dihapus]REGEX) adalah metode pencarian string yang tidak hanya mencari string tertentu, tetapi juga mencari string tersebut berdasarkan pola.Algoritme ini memungkinkan Anda mencari pola tertentu dalam data.REGEX didasarkan pada konsep finite automata, dimana pencarian dilakukan dengan membentuk grafik berarah yang statusnya mewakili karakter dalam rantai pencarian [1].

Keuntungan ekspresi kanonik adalah Anda dapat mencari data berdasarkan pola tertentu tanpa harus mengurutkan data.Algoritma ini sebenarnya mengeksekusi setiap karakter untuk jangka waktu tertentu.Dengan memahami teori dasar pencarian biner dan ekspresi pencarian reguler, Anda dapat memilih metode pencarian sesuai dengan kebutuhan dan karakteristik informasi yang Anda cari [1]..

</p>

## Guided

### Guided 1
Buatlah sebuah project dengan menggunakan sequential search sederhana untuk melakukan pencarian data.

```C++
#include <iostream>
using namespace std;
int main()
{
    int n = 10;
    int data[n] = {9, 4, 1, 7, 5, 12, 4, 13, 4, 10};
    int cari = 10;
    bool ketemu = false;
    int i;
    // algoritma Sequential Search
    for (i = 0; i < n; i++)
    {
        if (data[i] == cari)
        {
            ketemu = true;
            break;
        }
    }
    cout << "\t Program Sequential Search Sederhana\n " << endl;
    cout << "data: {9, 4, 1, 7, 5, 12, 4, 13, 4, 10}" << endl;
    if (ketemu)
    {
        cout << "\n angka " << cari << " ditemukan pada indeks ke -" << i << endl;
    }
    else
    {
        cout << cari << " tidak dapat ditemukan pada data." << endl;
    }
    return 0;
}
```
### Screenshot Output
![guided 1](https://github.com/Lorentz4kei/Struktur-Data-Assignment/assets/161665225/b9267986-087f-450e-96f7-d44d0e4379b5)



### Guided 2
Buatlah sebuah project untuk melakukan pencarian data dengan menggunakan Binary Search.

```C++
#include <iostream>
#include <iomanip>
using namespace std;
// Deklarasi array dan variabel untuk pencarian
int arrayData[7] = {1, 8, 2, 5, 4, 9, 7};
int cari;
void selection_sort(int arr[], int n)
{
    int temp, min;
    for (int i = 0; i < n - 1; i++)
    {
        min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        // Tukar elemen
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
}
void binary_search(int arr[], int n, int target)
{
    int awal = 0, akhir = n - 1, tengah, b_flag = 0;
    while (b_flag == 0 && awal <= akhir)
    {
        tengah = (awal + akhir) / 2;
        if (arr[tengah] == target)
        {
            b_flag = 1;
            break;
        }
        else if (arr[tengah] < target)
        {
            awal = tengah + 1;
        }
        else
        {
            akhir = tengah - 1;
        }
    }
    if (b_flag == 1)
        cout << "\nData ditemukan pada index ke-" << tengah << endl;
    else
        cout << "\nData tidak ditemukan\n";
}
int main()
{
    cout << "\tBINARY SEARCH" << endl;
    cout << "\nData awal: ";
    // Tampilkan data awal
    for (int x = 0; x < 7; x++)
    {
        cout << setw(3) << arrayData[x];
    }
    cout << endl;
    cout << "\nMasukkan data yang ingin Anda cari: ";
    cin >> cari;
    // Urutkan data dengan selection sort
    selection_sort(arrayData, 7);
    cout << "\nData diurutkan: ";
    // Tampilkan data setelah diurutkan
    for (int x = 0; x < 7; x++)
    {
        cout << setw(3) << arrayData[x];
    }
    cout << endl;
    // Lakukan binary search
    binary_search(arrayData, 7, cari);
    return 0;
}
```

### Screenshot Output
![guided 2](https://github.com/Lorentz4kei/Struktur-Data-Assignment/assets/161665225/f155891b-b2c6-4d40-9938-d96c00823e22)




## Unguided 

### Unguided 1
Buatlah sebuah program untuk mencari sebuah huruf pada sebuah kalimat yang sudah di input dengan menggunakan Binary Search!

```C++
#include <iostream>
#include <string>

using namespace std;

// Fungsi untuk mencari huruf dalam kalimat dengan Binary Search
bool binarySearch(string kalimat, char hurufDicari) {
  // Inisialisasi indeks awal dan akhir
  int low = 0;
  int high = kalimat.length() - 1;

  // Looping selama indeks awal lebih kecil dari atau sama dengan indeks akhir
  while (low <= high) {
    // Hitung indeks tengah
    int mid = (low + high) / 2;

    // Periksa apakah huruf di indeks tengah sama dengan huruf yang dicari
    if (kalimat[mid] == hurufDicari) {
      // Huruf ditemukan, kembalikan true
      return true;
    } else if (kalimat[mid] < hurufDicari) {
      // Huruf yang dicari lebih besar, perbarui indeks awal
      low = mid + 1;
    } else {
      // Huruf yang dicari lebih kecil, perbarui indeks akhir
      high = mid - 1;
    }
  }

  // Huruf tidak ditemukan, kembalikan false
  return false;
}

int main() {
  // Deklarasi variabel untuk kalimat dan huruf yang dicari
  string kalimat;
  char hurufDicari;

  // Minta input kalimat dari pengguna
  cout << "Masukkan kalimat: ";
  getline(cin, kalimat);

  // Minta input huruf yang dicari dari pengguna
  cout << "Masukkan huruf yang ingin dicari: ";
  cin >> hurufDicari;

  // Panggil fungsi binarySearch untuk mencari huruf
  bool ditemukan = binarySearch(kalimat, hurufDicari);

  // Tampilkan pesan berdasarkan hasil pencarian
  if (ditemukan) {
    cout << "Huruf '" << hurufDicari << "' ditemukan dalam kalimat." << endl;
  } else {
    cout << "Huruf '" << hurufDicari << "' tidak ditemukan dalam kalimat." << endl;
  }

  return 0;
}

```

### Screenshot Output
![unguided 1](https://github.com/Lorentz4kei/Struktur-Data-Assignment/assets/161665225/f6ed6538-38ab-495e-b1e5-7d2b06ef3a88)

### Deskripsi Program
Program ini memberikan contoh penerapan algoritma pencarian biner untuk mencari huruf dalam sebuah kalimat. Algoritme pencarian biner secara efektif membagi dua interval pencarian pada setiap iterasi, mengurangi jumlah langkah yang diperlukan untuk menemukan hasil pencarian. Dengan demikian, program ini mengilustrasikan penggunaan pencarian biner untuk mencari elemen data yang dipesan secara efektif..


### Unguided 2
Buatlah sebuah program yang dapat menghitung banyaknya huruf vocal dalam sebuah kalimat menggunakan algoritma searching!

```C++
#include <iostream>
#include <string>

using namespace std;

// Fungsi untuk menghitung jumlah huruf vokal dalam kalimat
int HitungVokal(string kalimat)
{
    // Inisialisasi variabel penghitung
    int count = 0;

    // Looping melalui setiap karakter dalam kalimat
    for (int i = 0; i < kalimat.length(); i++)
    {
        // Mendapatkan karakter saat ini
        char huruf = kalimat[i];

        // Memeriksa apakah karakter adalah huruf vokal
        if (huruf == 'a' || huruf == 'A' ||
            huruf == 'e' || huruf == 'E' ||
            huruf == 'i' || huruf == 'I' ||
            huruf == 'o' || huruf == 'O' ||
            huruf == 'u' || huruf == 'U')
        {
            // Jika vokal, tambahkan ke penghitung
            count++;
        }
    }

    // Mengembalikan jumlah vokal
    return count;
}

int main()
{
    // Deklarasi variabel untuk kalimat
    string kalimat;

    // Minta input kalimat dari pengguna
    cout << "Masukkan kalimat: ";
    getline(cin, kalimat);

    // Panggil fungsi untuk menghitung vokal
    int jumlahVokal = HitungVokal(kalimat);

    // Tampilkan hasil penghitungan
    cout << "Jumlah huruf vokal dalam kalimat: " << jumlahVokal << endl;

    return 0;
}

```

### Screenshot Output
![unguided 2](https://github.com/Lorentz4kei/Struktur-Data-Assignment/assets/161665225/48e2b2ed-649e-44f8-8152-598fb93a2f69)

### Deskripsi Program
Program ini memberikan contoh penggunaan fungsi untuk menghitung jumlah vokal dalam sebuah kalimat. Dengan menggunakan loop dan pengujian bersyarat, program ini secara efisien mengenali dan menghitung jumlah vokal. Program ini menunjukkan bagaimana string dan loop dapat digunakan untuk melakukan operasi sederhana pada teks..


### Unguided 3
Diketahui data = 9, 4, 1, 4, 7, 10, 5, 4, 12, 4. Hitunglah berapa banyak angka 4 dengan menggunakan algoritma Sequential Search!

```C++
#include <iostream>

using namespace std;

int main() {
  // Data yang diberikan
  int data[] = {9, 4, 1, 4, 7, 10, 5, 4, 12, 4};
  int n = sizeof(data) / sizeof(data[0]); // Jumlah elemen dalam data

  // Inisialisasi variabel untuk menghitung angka 4
  int count = 0;

  // Algoritma sequential search
  for (int i = 0; i < n; i++) {
    if (data[i] == 4) {
      count++; // Hitung angka 4
    }
  }

  // Hasil
  cout << "Jumlah angka 4: " << count << endl;

  return 0;
}

```


### Screenshot Output
![unguided 3](https://github.com/Lorentz4kei/Struktur-Data-Assignment/assets/161665225/bc2665fd-0ac9-41a2-bc6a-2fa19aefed83)



### Deskripsi Program
Program ini memberikan contoh sederhana dari algoritma pencarian sekuensial yang menghitung jumlah kemunculan sebuah array. Meskipun algoritma ini sederhana, namun efektif untuk menemukan elemen dalam kumpulan data yang tidak berurutan. Dengan menggunakan loop dan kondisi, program ini secara efektif menghitung jumlah kemunculan nomor yang dicari dalam sebuah array..


## kesimpulan

<p align = "justify">
Dari hasil analisis perbandingan pencarian informasi algoritma “binary search” dan “canonical search formula”, dapat disimpulkan bahwa kedua algoritma tersebut mempunyai kelebihan dan kekurangan masing-masing.Pencarian biner cocok untuk mencari informasi yang besar dan terorganisir.Sebaliknya, ekspresi kanonik lebih fleksibel dalam mencari pola.Pemilihan algoritma pencarian harus disesuaikan dengan karakteristik data dan kebutuhan pencarian tertentu.Membandingkan penelusuran biner dan algoritme penelusuran kanonik, kami menyimpulkan bahwa penelusuran biner efisien untuk menelusuri data terurut berskala besar, sedangkan penelusuran kanonik lebih fleksibel untuk penelusuran berbasis pola.Pemilihan algoritma pencarian harus disesuaikan dengan karakteristik data dan kebutuhan khusus pencarian [1].

## Daftar Pustaka
[1]. Fenina Adline Twince Tobing, Rena Nainggolan, ANALISIS PERBANDINGAN PENGGUNAAN METODE BINARY SEARCH DENGAN REGULAR SEARCH EXPRESSION, Vol. 4, No. 2, 168-172, Oktober 2020.

