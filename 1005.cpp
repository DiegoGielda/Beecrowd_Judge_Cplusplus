#include <iostream>
#include <iomanip>

using namespace std;

int main(){

  double lValorA = 0.0, lValorB = 0.0, lMedia = 0.0;
  cin >> lValorA >> lValorB;
  lMedia = (((lValorA * 3.5) + (lValorB  * 7.5)) / 11);
  cout << "MEDIA = " << fixed << setprecision(5) << lMedia << endl;

  return 0;
}
