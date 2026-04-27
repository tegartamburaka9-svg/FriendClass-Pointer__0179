#include <iostream>
#include <cmath>

using namespace std;

// Forward declaration agar class LayangLayang tahu ada class BelahKetupat
class BelahKetupat;

class LayangLayang {
private:
    double d1, d2, s1, s2;

public:
    // Method untuk input
    void input() {
        cout << "Input Layang-Layang" << endl;
        cout << "Diagonal 1: "; cin >> d1;
        cout << "Diagonal 2: "; cin >> d2;
        cout << "Sisi Gajah (s1): "; cin >> s1;
        cout << "Sisi Pendek (s2): "; cin >> s2;
    }

    double hitungLuas() {
        return 0.5 * d1 * d2;
    }

    // Mendeklarasikan fungsi global sebagai friend
    friend void infoKeliling(LayangLayang l, BelahKetupat b);
};

class BelahKetupat {
private:
    double d1, d2, sisi;

public:
    void input() {
        cout << "\nInput Belah Ketupat" << endl;
        cout << "Diagonal 1: "; cin >> d1;
        cout << "Diagonal 2: "; cin >> d2;
        cout << "Sisi: "; cin >> sisi;
    }

    double hitungLuas() {
        return 0.5 * d1 * d2;
    }

    // Mendeklarasikan fungsi global sebagai friend
    friend void infoKeliling(LayangLayang l, BelahKetupat b);
};

// Friend Function untuk menghitung keliling kedua bangun
void infoKeliling(LayangLayang l, BelahKetupat b) {
    double kelLayang = 2 * (l.s1 + l.s2);
    double kelBelah = 4 * b.sisi;
    
    cout << "\n--- Hasil Keliling (via Friend Function) ---" << endl;
    cout << "Keliling Layang-Layang: " << kelLayang << endl;
    cout << "Keliling Belah Ketupat: " << kelBelah << endl;
}

int main() {
    // Semua class hanya dapat diakses menggunakan object
    LayangLayang objL;
    BelahKetupat objB;

    objL.input();
    objB.input();

    cout << "\n--- Hasil Luas ---" << endl;
    cout << "Luas Layang-Layang: " << objL.hitungLuas() << endl;
    cout << "Luas Belah Ketupat: " << objB.hitungLuas() << endl;

    // Memanggil friend function
    infoKeliling(objL, objB);

    return 0;
}