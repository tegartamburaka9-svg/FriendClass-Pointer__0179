#include <iostream>
#include <string>

using namespace std;

class mahasiswa
{
private:
    string nama;

public:
    // Deklarasi friend function agar bisa akses member private 'nama'
    friend void setNama(mahasiswa &a, string);
};

// Definisi fungsi global (bukan bagian dari class)
void setNama(mahasiswa &a, string b)
{
    a.nama = b;
    cout << a.nama;
}

