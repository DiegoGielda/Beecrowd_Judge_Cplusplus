#include <iostream>
#include <iomanip>

using namespace std;

int main(){

  int lNumeroPeca1 = 0, lQuantidade1 = 0, lNumeroPeca2 = 0, lQuantidade2 = 0;
  double lValorPeca1 = 0, lValorPeca2 = 0, lValorTotal = 0;
  cin >> lNumeroPeca1 >> lQuantidade1 >> lValorPeca1;
  cin >> lNumeroPeca2 >> lQuantidade2 >> lValorPeca2;
  lValorTotal = ((lQuantidade1 * lValorPeca1) + (lQuantidade2 * lValorPeca2));
  cout << "VALOR A PAGAR: R$ " << fixed << setprecision(2) << lValorTotal << endl;

  return 0;
}
