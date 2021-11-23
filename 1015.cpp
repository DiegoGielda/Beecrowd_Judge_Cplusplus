#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
  
  double lValorX1 = 0, lValorX2 = 0, lValorY1 = 0, lValorY2 = 0, lDistancia = 0;
  cin >> lValorX1 >> lValorY1 >> lValorX2 >> lValorY2;
  lDistancia = pow((lValorX2 - lValorX1), 2);
  lDistancia = lDistancia + pow((lValorY2 - lValorY1), 2); 
  cout << fixed << setprecision(4) << sqrt(lDistancia) << endl;

  return 0;
}