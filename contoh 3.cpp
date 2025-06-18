#include <iostream>
using namespace std;

class Bilangan {
private:
    int bulat;
    double nyata;

public:
    Bilangan();    // Konstruktor
    void info();   // Menampilkan isi data
};

Bilangan::Bilangan() {
    cout << "\nKonstruktor dijalankan..." << endl;
    bulat = 5.2;    // meskipun 5.2 desimal, akan dibulatkan menjadi 5
    nyata = 3.6;
}

void Bilangan::info() {
    cout << "\nJenis Bilangan:" << endl;
    cout << "Bulat = " << bulat << endl;
    cout << "Nyata = " << nyata << endl;
}

int main() {
    Bilangan a;
    a.info();

    Bilangan b;
    b.info();

    return 0;
}

