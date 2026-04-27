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

