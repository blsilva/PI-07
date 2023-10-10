#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
    srand(static_cast<unsigned int>(time(nullptr))); 
    int numeroSecreto = rand() % 100 + 1; 
    int palpite;

    cout << "Bem-vindo ao jogo de adivinhação!" << endl;

    while (true) {
        cout << "Digite o seu palpite (entre 1 e 100): ";
        cin >> palpite;

        if (palpite == numeroSecreto) {
            cout << "Parabéns! Você acertou!" << endl;
            break;
        } else if (palpite < numeroSecreto) {
            cout << "Seu palpite está baixo. Tente novamente." << endl;
        } else {
            cout << "Seu palpite está alto. Tente novamente." << endl;
        }
    }

    return 0;
}
