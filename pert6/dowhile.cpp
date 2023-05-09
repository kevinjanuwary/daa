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
    char back;

    do {
        cout << "0.exit" <<endl;
        cout << "1. penjumlahan" << endl;
        cout << "2. loop for" << endl;
        cout << "pilih : ";
        cin >> pil;
        switch (pil) {
            case 0:
                cout << "exit" << endl;
                return;
            case 1:
                penjumlahan();
                break;
            case 2:
                loopfor();
                break;
            default:
                cout << "pilihan salah" << endl;
                break;
        }
        cout << "pilih kembali?" << endl;
        cin >> back;
    }
    while (back != 't');
    cout << "thanks" << endl;
}

int main() {
    pilihan();

    return 0;
}