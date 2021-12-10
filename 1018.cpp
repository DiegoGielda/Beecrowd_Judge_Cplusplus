#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int lValor = 0, lNota100 = 0, lNota50 = 0, lNota20 = 0, lNota10 = 0, lNota5 = 0, lNota2 = 0, lNota1 = 0, lSoma = 0;

    cin >> lValor;
    cout << lValor << endl;

    lNota100 = lValor / 100;
    lSoma = lValor % 100;
    lValor = lSoma;

    lNota50 = lValor / 50;
    lSoma = lValor % 50;
    lValor = lSoma;

    lNota20 = lValor / 20;
    lSoma = lValor % 20;
    lValor = lSoma;

    lNota10 = lValor / 10;
    lSoma = lValor % 10;
    lValor = lSoma;

    lNota5 = lValor /5;
    lSoma = lValor % 5;
    lValor = lSoma;

    lNota2 = lValor / 2;
    lValor = lValor % 2;

    lNota1 = lValor;

    cout << lNota100 << " nota(s) de R$ 100,00" << endl;
    cout << lNota50 << " nota(s) de R$ 50,00" << endl;
    cout << lNota20 << " nota(s) de R$ 20,00" << endl;
    cout << lNota10 << " nota(s) de R$ 10,00" << endl;
    cout << lNota5 << " nota(s) de R$ 5,00" << endl;
    cout << lNota2 << " nota(s) de R$ 2,00" << endl;
    cout << lNota1 << " nota(s) de R$ 1,00" << endl;

    return 0;
}
