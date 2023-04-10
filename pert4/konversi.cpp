#include <iostream>
using namespace std;

int main() {
    float m, cm, inci;

    cout << "Masukkan ukuran meter " << endl;
    cin >> m;

    cm = m * 100;
    inci = m * 100 / 2.54;

    cout << "Ukuran dalam cm " << cm << endl;
    cout << "Ukuran dalam inci " << inci << endl;

    return 0;
}