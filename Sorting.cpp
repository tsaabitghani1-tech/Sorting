#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

// int main() {
//     vector<int> angka_asc = {5, 2, 9, 1,};
//     vector<int> angka_desc = {5, 2, 9, 1,};

//     sort(angka_asc.begin(), angka_asc.end());
//     cout << "Ascending: ";
//     for(int x : angka_asc) {
//         cout << x << " ";
//     }
//     cout << endl;

//     sort(angka_desc.begin(), angka_desc.end(), greater<int>());
//     cout << "Descending: ";
//     for(int x : angka_desc) {
//         cout << x << " ";
//     }
//     cout << endl;

//     return 0;
// }

//latihan 1
// int main() {

//     vector<int> nilai = {60, 85, 40, 90, 75, 50, 95};

//     int cari = 85;

//     auto hasil = find(nilai.begin(), nilai.end(), cari);

//     if (hasil != nilai.end()) {
//         int index = hasil - nilai.begin();

//         cout << "Nilai " << cari << " ditemukan!" << endl;
//         cout << "Posisi index: " << index << endl;
//     } else {
//         cout << "Nilai tidak ditemukan!" << endl;
//     }

//     vector<int> lulus;

//     for (int x : nilai) {
//         if (x >= 75) {
//             lulus.push_back(x);
//         }
//     }

//     cout << "\nDaftar nilai yang lulus:" << endl;

//     for (int x : lulus) {
//         cout << x << " ";
//     }

//     cout << endl;

//     return 0;
// }

//latihan 2
// int main() {

//     vector<string> produk = {
//         "Laptop", "Mouse", "Keyboard",
//         "Monitor", "Headset"
//     };

//     string cari = "Keyboard";

//     auto hasil = find(
//         produk.begin(),
//         produk.end(),
//         cari
//     );

//     if (hasil != produk.end()) {
//         cout << "Produk " << cari << " ditemukan!" << endl;
//     } else {
//         cout << "Produk tidak ditemukan!" << endl;
//     }

//     vector<string> filterProduk;

//     for (string x : produk) {
//         if (x.length() > 5) {
//             filterProduk.push_back(x);
//         }
//     }

//     cout << "\nProduk dengan panjang nama lebih dari 5 karakter:" << endl;

//     for (string x : filterProduk) {
//         cout << x << endl;
//     }

//     return 0;
// }

//latihan 3
int main() {
    vector<int> suhu = {-3, 5, 0, -12, 8, 15, -1, 22};

    int cari = 0;

    auto hasil = find(suhu.begin(), suhu.end(), cari);

    if (hasil != suhu.end()) {
        int index = hasil - suhu.begin();

        cout << "Nilai " << cari << " ditemukan!" << endl;
        cout << "Posisi index: " << index << endl;
    } else {
        cout << "Nilai tidak ditemukan!" << endl;
    }

    vector<int> suhuPositif;

    for (int x : suhu) {
        if (x > 0) {
            suhuPositif.push_back(x);
        }
    }

    cout << "\nDaftar suhu positif:" << endl;

    for (int x : suhuPositif) {
        cout << x << " ";
    }

    cout << endl;

    return 0;
}