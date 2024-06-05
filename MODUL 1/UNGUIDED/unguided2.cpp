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
    mhs.name = "Adit"; 
    mhs.age = 20; 
    mhs.address = "Tasikmalaya"; 
    mhs.display(); 

    return 0; 
}