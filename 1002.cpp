#include <iostream>
#include <iomanip>

using namespace std;

int main(){

  double area = 0, raio = 0, n = 3.14159;
  cin >> raio;
  area = (n * (raio * raio));
  cout << fixed << setprecision(4) << "A=" << area << endl;

  return 0;
}
