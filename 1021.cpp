#include <iostream>
#include <iomanip>

using namespace std;

int main(){

  double lValor = 0;
  int lNota = 0,lNota100 = 0, lNota50 = 0, lNota20 = 0, lNota10 = 0, lNota5 = 0, lNota2 = 0;
  int lMoeda = 0, lMoeda1 = 0, lMoeda50 = 0, lMoeda25, lMoeda10 = 0, lMoeda05 = 0, lMoeda01 = 0;
  
  cin >> lValor;
  
  lNota = (int) lValor;
  lMoeda = (lValor * 100);
  lMoeda %= 100;

  lNota100 = lNota / 100;
  lNota %= 100;
  lNota50 = lNota / 50;
  lNota %= 50;
  lNota20 = lNota / 20;
  lNota %= 20;
  lNota10 = lNota / 10;
  lNota %= 10;
  lNota5 = lNota / 5;
  lNota %= 5;

  lNota2 = lNota / 2;
  lMoeda1 = lNota % 2;

  lMoeda50 = lMoeda / 50;
  lMoeda %= 50;
  lMoeda25 = lMoeda / 25;
  lMoeda %= 25;
  lMoeda10 = lMoeda / 10;
  lMoeda %= 10;
  lMoeda05 = lMoeda / 5;
  lMoeda01 = lMoeda % 5;

  cout << fixed << setprecision(2);
  cout << "NOTAS:" << endl;
  cout << lNota100 << " nota(s) de R$ 100.00" << endl;
  cout << lNota50 << " nota(s) de R$ 50.00" << endl;
  cout << lNota20 << " nota(s) de R$ 20.00" << endl;
  cout << lNota10 << " nota(s) de R$ 10.00" << endl;
  cout << lNota5 << " nota(s) de R$ 5.00" << endl;
  cout << lNota2 << " nota(s) de R$ 2.00" << endl;
  cout << "MOEDAS:" << endl;
  cout << lMoeda1 << " moeda(s) de R$ 1.00" << endl;
  cout << lMoeda50 << " moeda(s) de R$ 0.50" << endl;
  cout << lMoeda25 << " moeda(s) de R$ 0.25" << endl;
  cout << lMoeda10 << " moeda(s) de R$ 0.10" << endl;
  cout << lMoeda05 << " moeda(s) de R$ 0.05" << endl;
  cout << lMoeda01 << " moeda(s) de R$ 0.01" << endl;

  return 0;
}