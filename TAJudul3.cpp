#include <iostream>
#include <string>
using namespace std;

int main() {
    const int JUMLAH_TEMAN = 5;
    string teman[JUMLAH_TEMAN] = {"Manda", "Deta", "Tarevi", "Preisi", "Bila"};
    string cari;
    bool ditemukan = false;

    cout << "Program Pencarian Nama Teman (Sequential Search)";
    cout << "Daftar teman: ";
    for (int i = 0; i < JUMLAH_TEMAN; i++) {
        cout << i + 1 << ". " << teman[i] << endl;
    }

    cout << "Masukkan nama yang ingin dicari: ";
    cin >> cari;

    for (int i = 0; i < JUMLAH_TEMAN; i++) {
        cout << "Membandingkan dengan: " << teman[i] << endl;
        if (teman[i] == cari) {
            cout << "Data ditemukan pada urutan ke-" << i + 1 << endl;
            ditemukan = true;
            break;
        }
    }

    if (!ditemukan) {
        cout << "Data tidak ditemukan dalam daftar teman." << endl;
    }

    return 0;
}