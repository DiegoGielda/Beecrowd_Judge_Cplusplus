#include <iostream>
#include <iomanip>

using namespace std;

int main(){

  int lHorasViagem = 0, lVelocidadeMedia = 0;
  float lQuantidadeLitros = 0;
  cin >> lHorasViagem >> lVelocidadeMedia;
  lQuantidadeLitros = (lHorasViagem * lVelocidadeMedia);
  cout << fixed << setprecision(3) << (lQuantidadeLitros / 12) << endl;

  return 0;
}