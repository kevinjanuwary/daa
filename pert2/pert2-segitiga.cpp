#include <iostream>
using namespace std;

int main() {
    int alas, tinggi, luas;

    cout << "Input nilai alas: ";
    cin >> alas;
    cout << "Input nilai tinggi: ";
    cin >> tinggi;
    luas = alas * tinggi * 0.5;
    cout << "Luas segitiga: " << luas << endl;
}