#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){

  double lValorA = 0, lValorB = 0, lValorC = 0, lTriangulo = 0, lCirculo = 0,
  lTrapezio = 0, lQuadrado = 0, lRetangulo = 0;
  cin >> lValorA >> lValorB >> lValorC;
  lTriangulo = ((lValorA * lValorC) / 2);
  lCirculo = (3.14159 * pow(lValorC, 2));
  lTrapezio = (((lValorA + lValorB) * lValorC) / 2);
  lQuadrado = pow(lValorB, 2);
  lRetangulo = (lValorA * lValorB);
  cout << "TRIANGULO: " << fixed << setprecision(3) << lTriangulo << endl;
  cout << "CIRCULO: " << lCirculo << endl;
  cout << "TRAPEZIO: " << lTrapezio << endl;
  cout << "QUADRADO: " << lQuadrado << endl;
  cout << "RETANGULO: " << lRetangulo << endl;

  return 0;
}
