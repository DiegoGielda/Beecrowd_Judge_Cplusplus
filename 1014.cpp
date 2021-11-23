#include <iostream>
#include <iomanip>

using namespace std;

int main(){
  
  int lDistancia = 0;
  double lGastoCombustivel = 0, lResultado = 0;
  cin >> lDistancia >> lGastoCombustivel;
  lResultado = (lDistancia / lGastoCombustivel);
  cout << fixed << setprecision(3) << lResultado << " km/l" <<endl;
  
  return 0;
}