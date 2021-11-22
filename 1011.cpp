#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){

  double lRaio = 0, lPi = 3.14159, lVolume = 0;
  cin >> lRaio;
  lRaio = pow(lRaio, 3);
  lVolume = ((4/3.0) * lPi * lRaio);
  cout  << "VOLUME = " << fixed << setprecision(3) << lVolume << endl;

  return 0;
}
