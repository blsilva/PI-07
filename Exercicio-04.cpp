#include <iostream>
using namespace std;

int main() {
    cout << "Números primos entre 1 e 100 são: ";

    for (int num = 2; num <= 100; num++) {
        bool primo = true;

        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                primo = false;
                break;
            }
        }

        if (primo) {
            cout << num << " ";
        }
    }
    
    cout << endl;
    return 0;
}
