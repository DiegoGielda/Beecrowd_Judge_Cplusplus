#include <iostream>
#include <iomanip>

using namespace std;

int main(){

  double lValorA = 0, lValorB = 0, lValorC = 0, lMedia = 0;
  cin >> lValorA >> lValorB >> lValorC;
  lMedia = ((lValorA * 2.0) + (lValorB * 3.0) + (lValorC * 5.0)) / 10;
  cout << "MEDIA = " << fixed << setprecision(1) << lMedia << endl;

  return 0;
}
