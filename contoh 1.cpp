#include <iostream>
#include <string>
using namespace std;

void garis() {
    cout << "===============================" << endl;
}

class Siswa {
public:
    string nis;
    string nama;
    float nilai;
};

int main() {
    Siswa sekolah;

    garis();
    cout << "\tProgram Nilai Siswa" << endl;
    cout << "\t-------------------" << endl;

    cout << "Input NIS          = ";
    cin >> sekolah.nis;
    cin.ignore(); // Membersihkan karakter newline
    cout << "Input Nama Siswa   = ";
    getline(cin, sekolah.nama);
    cout << "Input Nilai Akhir  = ";
    cin >> sekolah.nilai;

    // Tampilan output akhir
    system("cls"); // Khusus Windows, untuk membersihkan layar

    garis();
    cout << "\tNilai Siswa" << endl;
    cout << "\t------------" << endl << endl;
    cout << "NIS          = " << sekolah.nis << endl;
    cout << "Nama Siswa   = " << sekolah.nama << endl;
    cout << "Nilai Akhir  = " << sekolah.nilai << endl;
    garis();

    return 0;
}

