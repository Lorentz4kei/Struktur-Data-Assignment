#include <iostream>
using namespace std;
const int maksimalQueue = 5;
int front = 0;
int back = 0;

struct Node
{
    string data;
    Node *next;
};
Node *head, *tail, *Nodebaru, *temp, *del;
void innit()
{
    head = NULL;
    tail = NULL;
}
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
    if (head == NULL)
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
    Nodebaru = new Node;
    Nodebaru->data = data;
    Nodebaru->next = NULL;
    if (isEmpty())
    {
        head = Nodebaru;
        tail = Nodebaru;
        tail->next = NULL;
    }
    else
    {
        tail->next = Nodebaru;
        tail = Nodebaru;
        tail->next = NULL;
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
        if (head->next != NULL)
        {

            temp = head;
            head = head->next;
            delete temp;
        }
        else
        {
            head = NULL;
            tail = NULL;
        }
    }
}
int countQueue()
{
    temp = head;
    int jumlah = 0;
    while (temp != NULL)
    {
        temp = temp->next;
        jumlah++;
    }
    return jumlah;
}
void clearQueue()
{ // Fungsi menghapus semua antrian
    if (isEmpty())
    {
        cout << "Antrian kosong" << endl;
    }
    else
    {
        del = head;
        while (del != NULL)
        {
            temp = del;
            del = del->next;
            delete temp;
        }
    }
}
void viewQueue()
{ // Fungsi melihat antrian
    cout << "Data antrian teller:" << endl;
    if (isEmpty())
    {
        cout << "Antrian kosong" << endl;
    }

    else
    {
        temp = head;
        while (temp != NULL)
        {
            cout << "data" << temp->data << endl;
            temp = temp->next;
        }
    }
}

int main()
{
    innit();

    enqueueAntrian("Azrino");
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
// Kondisi ketika queue kosong
