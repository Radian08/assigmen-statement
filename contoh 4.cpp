#include <iostream>
#include <cstring> // untuk strcpy
using namespace std;

class Motor {
private:
    char* merk;
    float cc_mesin;
    long harga;

public:
    Motor(const char* nama, float cc, long hrg); // Konstruktor
    ~Motor();                                     // Destruktor
    void keterangan();
};

Motor::Motor(const char* nama, float cc, long hrg) {
    merk = new char[25];
    strcpy(merk, nama);
    cc_mesin = cc;
    harga = hrg;
}

Motor::~Motor() {
    delete[] merk; // Melepaskan alokasi dinamis
}

void Motor::keterangan() {
    cout << "\nInformasi Motor:" << endl;
    cout << "Merk     = " << merk << endl;
    cout << "CC Mesin = " << cc_mesin << endl;
    cout << "Harga    = " << harga << endl;
}

int main() {
    Motor sport("Honda CBR", 500, 30500000);
    Motor matic("Honda Vario", 125, 14500000);

    sport.keterangan();
    matic.keterangan();

    return 0;
}

