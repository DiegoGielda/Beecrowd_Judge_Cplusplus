#include <iostream>

using namespace std;

int main(){

  int lValorA = 0, lValorB = 0, lValorC = 0, lValorD = 0, lDiferenca;
  cin >> lValorA >> lValorB >> lValorC >> lValorD;
  lDiferenca = ((lValorA * lValorB) - (lValorC * lValorD));
  cout << "DIFERENCA = " << lDiferenca << endl;

  return 0;
}
