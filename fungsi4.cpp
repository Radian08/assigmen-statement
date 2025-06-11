#include <iostream>
using namespace std;

// Fungsi dengan parameter by reference
void tambah(int& c, int& d) {
    c += 7;
    d += 5;

    cout << "\n\nNilai di Dalam Fungsi Tambah()";
    cout << "\nc = " << c << " d = " << d << endl;
}

int main() {
    int a = 4;
    int b = 6;

    cout << "Nilai Sebelum Pemanggilan Fungsi";
    cout << "\na = " << a << " b = " << b;

    tambah(a, b); // Call by reference (langsung)

    cout << "\n\nNilai Setelah Pemanggilan Fungsi";
    cout << "\na = " << a << " b = " << b << endl;

    return 0;
}
