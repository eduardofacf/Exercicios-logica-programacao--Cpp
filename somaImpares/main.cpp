#include <bits/stdc++.h>

using namespace std;

int main(){

    int x, y, i, maior, soma;

    cout << "Digite dois numeros:" << endl;
    cin >> x >> y;

    if (x > y){
        maior = x;
        x = y;
        y = maior;
    }
    soma = 0;
    for (int i = x + 1; i < y; i++){
        if (i % 2 != 0){
            soma = soma + i;
        }
    }

    cout << "SOMA DOS IMPARES = " << soma << endl;

    return 0;
}
