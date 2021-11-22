#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main(){

  string lNomeVendedor;
  double lSalario = 0, lTotalVenda = 0, lTotalComissao = 0;
  cin >> lNomeVendedor >> lSalario >> lTotalVenda;
  lTotalComissao = lSalario + (lTotalVenda * (15.00 / 100.00));
  cout << "TOTAL = R$ " << fixed << setprecision(2) << lTotalComissao << endl;

  return 0;
}
