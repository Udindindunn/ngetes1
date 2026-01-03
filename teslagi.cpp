#include <iostream>
using namespace std;

int main() {
    int pilihan;
    int suaraA = 0, suaraB = 0, suaraC = 0;
    char ulang;

    do {
        cout << "==========================" << endl;
        cout << "   SISTEM VOTING SEDERHANA " << endl;
        cout << "==========================" << endl;
        cout << "1. Kandidat A" << endl;
        cout << "2. Kandidat B" << endl;
        cout << "3. Kandidat C" << endl;
        cout << "Pilih kandidat (1-3): ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                suaraA++;
                cout << "Anda memilih Kandidat A" << endl;
                break;
            case 2:
                suaraB++;
                cout << "Anda memilih Kandidat B" << endl;
                break;
            case 3:
                suaraC++;
                cout << "Anda memilih Kandidat C" << endl;
                break;
            default:
                cout << "Pilihan tidak valid!" << endl;
        }

        cout << "\nApakah ingin voting lagi? (y/n): ";
        cin >> ulang;
        cout << endl;

    } while (ulang == 'y' || ulang == 'Y');

    cout << "==========================" << endl;
    cout << "     HASIL VOTING" << endl;
    cout << "==========================" << endl;
    cout << "Kandidat A: " << suaraA << " suara" << endl;
    cout << "Kandidat B: " << suaraB << " suara" << endl;
    cout << "Kandidat C: " << suaraC << " suara" << endl;

    if (suaraA > suaraB && suaraA > suaraC)
        cout << "Pemenang: Kandidat A" << endl;
    else if (suaraB > suaraA && suaraB > suaraC)
        cout << "Pemenang: Kandidat B" << endl;
    else if (suaraC > suaraA && suaraC > suaraB)
        cout << "Pemenang: Kandidat C" << endl;
    else
        cout << "Hasil voting seri!" << endl;

    return 0;
}
