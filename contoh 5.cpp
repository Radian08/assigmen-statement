#include <iostream>
#include <iomanip>
using namespace std;

class Kerja {
public:
    string nik;
    string nama;
    int jam;
    double total;

    float lembur(int l) {
        if (l > 40)
            return (l - 40) * 30000;
        else
            return 0;
    }
};

int main() {
    int jumlah;
    double grandTotal = 0;

    cout << "Jumlah Data: ";
    cin >> jumlah;

    Kerja karyawan[15];

    for (int i = 0; i < jumlah; ++i) {
        cout << "\nData ke-" << i + 1 << endl;
        cout << "NIK              : ";
        cin >> karyawan[i].nik;
        cout << "Nama Karyawan    : ";
        cin >> karyawan[i].nama;
        cout << "Jumlah Jam Kerja : ";
        cin >> karyawan[i].jam;
    }

    // Output
    cout << "\n==============================================" << endl;
    cout << "Daftar Gaji Mingguan - Karyawan Honorer" << endl;
    cout << "==============================================" << endl;
    cout << left << setw(5) << "No"
         << setw(10) << "NIK"
         << setw(15) << "Nama"
         << setw(10) << "Jam"
         << setw(10) << "Lembur"
         << setw(10) << "Total" << endl;

    for (int i = 0; i < jumlah; ++i) {
        double lembur = karyawan[i].lembur(karyawan[i].jam);
        karyawan[i].total = (40 * 20000) + lembur;
        grandTotal += karyawan[i].total;

        cout << left << setw(5) << i + 1
             << setw(10) << karyawan[i].nik
             << setw(15) << karyawan[i].nama
             << setw(10) << karyawan[i].jam
             << setw(10) << lembur
             << setw(10) << karyawan[i].total << endl;
    }

    cout << "==============================================" << endl;
    cout << "Total Keseluruhan Gaji : " << grandTotal << endl;

    return 0;
}

