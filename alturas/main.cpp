#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, menor;
    double soma, alturaMedia, porcentagem;

    cout << "Quantas pessoas serao digitadas? ";
    cin >> n;

    string nome[n];
    int idade[n];
    double altura[n];

    soma = 0;
    for(int i = 0; i < n; i++){
        cout << "Dados da " << i + 1 << "a pessoa:" <<endl;
        cout << "Nome: ";
        cin.ignore(INT_MAX, '\n');
        getline(cin, nome[i]);
        cout << "Idade: ";
        cin >> idade[i];
        cout << "Altura: ";
        cin >> altura[i];
        soma = soma + altura[i];
    }

    alturaMedia = soma / n;
    cout << endl;
    cout << fixed << setprecision(2);
    cout << "Altura media: " << alturaMedia << endl;

    menor = 0;
    for(int i = 0; i < n; i++){
        if(idade[i] < 16){
            menor++;
        }
    }

    porcentagem = (double) menor * 100 / n;
    cout << fixed << setprecision(1);
    cout << "Pessoas com menos de 16 anos: " << porcentagem << "%" << endl;

    for(int i = 0; i < n; i++){
        if(idade[i] < 16){
            cout << nome[i] << endl;
        }
    }
    return 0;
}
