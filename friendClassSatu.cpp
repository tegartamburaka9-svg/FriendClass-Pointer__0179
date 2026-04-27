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

