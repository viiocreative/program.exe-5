#include <iostream>
#include <cstdlib> // Diperlukan untuk menggunakan system("pause")

using namespace std;

// Fungsi untuk mengecek apakah bilangan ganjil atau genap
string cekGanjilGenap(int angka) {
    if (angka % 2 == 0) {
        return "Genap";
    } else {
        return "Ganjil";
    }
}

int main() {
    int angka;

    cout << "====================================\n";
    cout << "    PROGRAM CEK GANJIL / GENAP      \n";
    cout << "====================================\n";
    cout << "Masukkan sebuah bilangan: ";
    cin >> angka;

    string jenis = cekGanjilGenap(angka);

    cout << "------------------------------------\n";
    cout << "Bilangan " << angka << " adalah bilangan **" << jenis << "**.\n";
    cout << "====================================\n";

    // Sistem pause agar jendela tidak langsung menutup otomatis (khusus Windows)
    system("pause");

    return 0;
}
