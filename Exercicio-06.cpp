#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main() {
    vector<int> matriculas;
    vector<double> notas1, notas2, notas3, medias;
    char continuar;

    do {
        int matricula;
        double nota1, nota2, nota3, media;

        cout << "Digite a matrícula do aluno: ";
        cin >> matricula;
        cout << "Digite a primeira nota: ";
        cin >> nota1;
        cout << "Digite a segunda nota: ";
        cin >> nota2;
        cout << "Digite a terceira nota: ";
        cin >> nota3;

        media = (nota1 + nota2 + nota3) / 3.0;

        matriculas.push_back(matricula);
        notas1.push_back(nota1);
        notas2.push_back(nota2);
        notas3.push_back(nota3);
        medias.push_back(media);

        cout << "Deseja inserir outro aluno? (S/N): ";
        cin >> continuar;

    } while (continuar == 'S' || continuar == 's');

    for (size_t i = 0; i < matriculas.size(); i++) {
        cout << "MATRICULA NOTA1 NOTA2 NOTA3 MEDIA" << endl;
        cout << "===========================================" << endl;
        cout << setw(9) << matriculas[i] << " "
             << setw(5) << notas1[i] << " "
             << setw(5) << notas2[i] << " "
             << setw(5) << notas3[i] << " "
             << setw(5) << medias[i] << endl;
    }

    return 0;
}
