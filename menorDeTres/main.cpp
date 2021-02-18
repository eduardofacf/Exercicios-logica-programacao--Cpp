#include <bits/stdc++.h>

using namespace std;

int main(){

    int a, b, c, menor;

    cout << "Primeiro valor: ";
    cin >> a;
    cout << "Segundo valor: ";
    cin >> b;
    cout << "Terceiro valor: ";
    cin >> c;

    menor = a;

    if (b < a){
        menor = b;
        cout << "MENOR = " << menor << endl;
    }
        else if (c < a) {
            menor = c;
            cout << "MENOR = " << menor << endl;
        }
            else {
                cout << "MENOR = " << menor << endl;
            }

    return 0;
}
