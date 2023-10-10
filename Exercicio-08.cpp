#include <iostream>
using namespace std;

int main() {
    int altura;

    cout << "Digite a altura do padrão: ";
    cin >> altura;

    // Padrão a
    cout << "a." << endl;
    for (int i = 1; i <= altura; i++) {
        for (int j = 1; j <= altura; j++) {
            cout << "*   ";
        }
        cout << endl;
    }

    cout << endl;

    // Padrão b
    cout << "b." << endl;
    for (int i = 1; i <= altura; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*   ";
        }
        cout << endl;
    }

    cout << endl;

    // Padrão c
    cout << "c." << endl;
    for (int i = 1; i <= altura; i++) {
        for (int j = 1; j <= altura; j++) {
            if (i == 1 || i == altura || j == 1 || j == altura) {
                cout << "*   ";
            } else {
                cout << "    ";
            }
        }
        cout << endl;
    }

    return 0;
}
