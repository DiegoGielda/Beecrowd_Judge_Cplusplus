#include <iostream>

using namespace std;

int main(){

  int lValorA, lValorB, lValorC, lValorMaior;
  cin >> lValorA >> lValorB >> lValorC;
  lValorMaior = ((lValorA + lValorB) + abs(lValorA - lValorB)) / 2;
  lValorMaior = ((lValorMaior + lValorC) + abs(lValorMaior - lValorC)) / 2;
  cout << lValorMaior << " eh o maior" << endl;

 return 0;
}
