#include <iostream>
using namespace std;

void loopfor() {
    for (int a = 10; a >= 3; a--) {
        cout << a << endl;
    }
}

void penjumlahan() {
    int a = 10;
    int b = 5;
    int c;
    c = a + b;
    cout << c << endl;
}

void pilihan() {
    int pil;
    cout << "0. Exit" << endl;
    cout << "1. Penjumlahan" << endl;
    cout << "2. loop for" << endl;
    cout << "Pilihan : ";
    cin >> pil;

    if (pil == 0) {
        cout << "Thanks" << endl;
        // return 0;
    }
    else if (pil == 1) {
        penjumlahan();
        pilihan();
        // goto pilihan;
    }
    else if (pil == 2) {
        loopfor();
        pilihan();
        // goto pilihan;
    }
    else {
        cout << "Pilihan Salah" << endl;
        pilihan();
        // goto pilihan;
    }
}

int main() {
    pilihan();

    return 0;
}