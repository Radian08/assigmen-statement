#include <iostream>
#define PI 3.14
using namespace std;

class Tabung {
private:
    int jari, tinggi;
    float volume, keliling;

public:
    Tabung();             // Konstruktor
    void keluaran();      // Method untuk menampilkan hasil
};

Tabung::Tabung() {
    cout << "\nMenghitung Tabung" << endl;
    cout << "-----------------" << endl << endl;

    cout << "Masukkan Jari-jari = ";
    cin >> jari;
    cout << "Masukkan Tinggi    = ";
    cin >> tinggi;

    volume = PI * jari * jari * tinggi;
    keliling = 2 * PI * jari + tinggi; // catatan: ini bukan keliling sebenarnya, hanya contoh dari materi
}

void Tabung::keluaran() {
    cout << endl;
    cout << "Volume Tabung     = " << volume << endl;
    cout << "Keliling Tabung   = " << keliling << endl;
}

int main() {
    Tabung s;
    s.keluaran();
    return 0;
}

