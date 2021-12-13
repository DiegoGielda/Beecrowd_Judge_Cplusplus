#include <iostream>

using namespace std;

int main(){
  
  int lIdadeDias = 0, lAnoIdade = 0, lMesIdade = 0, lDiaIdade = 0;
  cin >> lIdadeDias;

  lAnoIdade = lIdadeDias / 365;
  lIdadeDias %= 365;

  lMesIdade = lIdadeDias / 30;
  lDiaIdade = lIdadeDias % 30;

  cout << lAnoIdade << " ano(s)" << endl;
  cout << lMesIdade << " mes(es)" << endl;
  cout << lDiaIdade << " dia(s)" << endl;

  return 0;
}