#include <iostream>
using namespace std;

int main() {
    int num, original, reverso = 0, digito;

    cout << "Digite um número inteiro: ";
    cin >> num;

    original = num;

    while (num != 0) {
        digito = num % 10;    
        reverso = reverso * 10 + digito; 
        num /= 10;            
    }

    if (original == reverso) {
        cout << "O número é um palíndromo!" << endl;
    } else {
        cout << "O número não é um palíndromo!" << endl;
    }

    return 0;
}
