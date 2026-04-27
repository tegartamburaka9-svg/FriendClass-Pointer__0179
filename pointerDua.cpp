
#include <iostream>
using namespace std;

class mahasiswa
{
public:
    int nim;
    void showNim()
    {
        cout << "No Induk = " << nim << endl;
    }
};

int main()
{
    // Membuat objek mahasiswa secara dinamis di memory (heap)
    mahasiswa *mhs = new mahasiswa{1}; // pointer Object mhs
    
    mhs->nim = 2;        // Mengubah nilai nim menggunakan operator panah
    mhs->showNim();      // Memanggil method menggunakan operator panah
    
    delete mhs;          // Menghapus objek dari memori (penting untuk mencegah memory leak)
    
    return 0;
}