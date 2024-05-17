#include <iostream>
using namespace std;

string arrayBuku[5];
int maksimal = 5, top = 0;

bool isFull() {
    return (top == maksimal);
}

bool isEmpty() {
    return (top == 0) ;
}

void pushArrayBuku (string data) {
    if (isFull()) {
        cout << "Data telah penuh" << endl;
    } else {
        arrayBuku[top] = data;
        top++;
    }
}

void popArrayBuku() {
    if (isEmpty()) {
        cout << "Tidak ada buku yang dihapus" << endl;
    } else {
        arrayBuku[top - 1] = "";
    }
}

void peekArrayBuku(int posisi){
    if (isEmpty()){
        cout << "Tidak ada daya yang dapat dilihat" << endl;
    } else {
        int index = top;

        for (int i = 1; i <= posisi; i++) {
            index--;
        }

        cout << "Posisi ke" << posisi << " adalah " << arrayBuku[index];
    }
}

int countStack() {
    return top;
}

void changearrayBuku(int posisi, string data)
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

void destroyArrayBuku()
{
    for (int i = top; i >= 0; i--)
    {
        arrayBuku[i] = "";
    }
    top = 0;
}

void cetakArrayBuku