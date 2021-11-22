#include <iostream>
#include <iomanip>

using namespace std;

int main(){

  int lNumeroFuncionario = 0, lHorasTrabalhadas = 0;
  double lSalarioFuncionario = 0;
  cin >> lNumeroFuncionario >> lHorasTrabalhadas >> lSalarioFuncionario;
  cout << "NUMBER = " << lNumeroFuncionario << endl;
  lSalarioFuncionario = (lSalarioFuncionario * lHorasTrabalhadas);
  cout << "SALARY = U$ " << fixed << setprecision(2) << lSalarioFuncionario << endl;

  return 0;
}
