#include <iostream>
#include <string>
using namespace std;

struct Kendaraan {
    string platNomor;
    string jenisKendaraan;
    string namaPemilik;
    string alamat;
    string kota;
};

int main() {
    Kendaraan kend;

    cout << "Plat Nomor Kendaraan : ";
    cin >> kend.platNomor;

    cout << "Jenis Kendaraan      : ";
    cin >> kend.jenisKendaraan;

    cin.ignore();

    cout << "Nama Pemilik         : ";
    getline(cin, kend.namaPemilik);

    cout << "Alamat               : ";
    getline(cin, kend.alamat);

    cout << "Kota                 : ";
    getline(cin, kend.kota);

    cout << "\n===== DATA KENDARAAN =====" << endl;
    cout << "Plat Nomor Kendaraan : " << kend.platNomor      << endl;
    cout << "Jenis Kendaraan      : " << kend.jenisKendaraan << endl;
    cout << "Nama Pemilik         : " << kend.namaPemilik    << endl;
    cout << "Alamat               : " << kend.alamat         << endl;
    cout << "Kota                 : " << kend.kota           << endl;

    return 0;
}