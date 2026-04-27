#include <iostream>
#include <string>

using namespace std;

class siswa; // Forward declaration
class orang
{
private:
    string nama;

public:
    void setNama(string pNama) {
        nama = pNama;
    }
    friend class siswa;
};

class siswa
{
private:
    int id;

public:
    void setId(int pId) {
        id = pId;
    }
    
    void displayAll(orang &a) {
        cout << "ID Siswa: " << id << endl;
        // Karena 'siswa' adalah friend class dari 'orang', 
        // ia bisa mengakses member private 'nama'
        cout << "Nama Orang: " << a.nama << endl;
    }
};

