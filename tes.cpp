#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    // ===== DEKLARASI VARIABEL =====
    string nama[10];      // Array untuk menyimpan nama pelanggan
    int jenis[10];        // Array jenis layanan (1 = Reguler, 2 = Express)
    float berat[10];      // Array berat cucian
    float total[10];      // Array total harga

    int jumlahData = 0;   // Menyimpan jumlah data yang diinput
    char lanjut;          // Untuk pilihan lanjut input

    // ===== PROSES INPUT DATA =====
    do {
        cout << "\n=== APLIKASI PENGELOLAAN LAUNDRY ===\n";

        cout << "Masukkan nama pelanggan   : ";
        cin >> nama[jumlahData];

        cout << "Jenis layanan:\n";
        cout << "1. Reguler (Rp5.000/kg)\n";
        cout << "2. Express (Rp8.000/kg)\n";
        cout << "Pilih (1/2)              : ";
        cin >> jenis[jumlahData];

        cout << "Masukkan berat cucian (kg): ";
        cin >> berat[jumlahData];

        // ===== PERCABANGAN =====
        if (jenis[jumlahData] == 1) {
            total[jumlahData] = berat[jumlahData] * 5000;
        }
        else if (jenis[jumlahData] == 2) {
            total[jumlahData] = berat[jumlahData] * 8000;
        }
        else {
            cout << "Jenis layanan tidak valid!\n";
            total[jumlahData] = 0;
        }

        jumlahData++;

        cout << "Tambah data lagi? (y/n): ";
        cin >> lanjut;

    } while (lanjut == 'y' || lanjut == 'Y');

    // ===== OUTPUT DATA =====
    cout << "\n=== DAFTAR TRANSAKSI LAUNDRY ===\n";
    cout << left << setw(15) << "Nama"
         << setw(12) << "Layanan"
         << setw(10) << "Berat"
         << "Total\n";

    // ===== PERULANGAN =====
    for (int i = 0; i < jumlahData; i++) {
        cout << left << setw(15) << nama[i];

        if (jenis[i] == 1)
            cout << setw(12) << "Reguler";
        else
            cout << setw(12) << "Express";

        cout << setw(10) << berat[i]
             << "Rp " << total[i] << endl;
    }

    return 0;
}