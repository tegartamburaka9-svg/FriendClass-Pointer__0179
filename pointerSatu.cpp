#include <iostream>
using namespace std;

class mahasiswa {
public:
    int nim;
    void showNim() {
        cout << "No Induk = " << nim << endl;
    }
};

int main() {
    // 1. Menggunakan Object Biasa
    mahasiswa mhs{1}; // Object mhs dengan nim awal 1
    mhs.showNim();    // Member Access Operator (.)

    // 2. Menggunakan Reference (&)
    // refMhs adalah nama lain (alias) dari mhs
    mahasiswa &refMhs = mhs; 
    refMhs.nim = 2;          // Mengubah nim via reference
    mhs.showNim();           // Hasilnya nim menjadi 2

    // 3. Menggunakan Pointer (*)
    // pMhs menyimpan alamat memori dari mhs
    mahasiswa *pMhs = &mhs; 
    pMhs->nim = 3;           // Arrow Operator (->) untuk akses via pointer
    pMhs->showNim();         // Hasilnya nim menjadi 3

    return 0;
}