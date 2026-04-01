#include <iostream>
#include <string>
using namespace std;

int main() {
    char   huruf;
    string kata;
    int    angka;

    char   *pHuruf = &huruf;
    string *pKata  = &kata;
    int    *pAngka = &angka;

    cout << "Masukkan sebuah huruf = ";
    cin  >> *pHuruf;

    cout << "Masukkan sebuah kata  = ";
    cin  >> *pKata;

    cout << "Masukkan Angka        = ";
    cin  >> *pAngka;

    cout << "\nHuruf yang Anda masukkan adalah " << *pHuruf << endl;
    cout << "Kata yang Anda masukkan adalah   " << *pKata  << endl;
    cout << "Angka yang Anda masukkan adalah  " << *pAngka << endl;

    return 0;
}