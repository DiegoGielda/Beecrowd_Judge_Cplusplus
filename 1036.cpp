#include <iostream>

using namespace std;

int main(){

  int lValA = 0, lValB = 0, lValC = 0, lValD = 0;
  cin >> lValA >> lValB >> lValC >> lValD;
  
  if((lValB > lValC) and (lValD > lValA) and 
    ((lValC + lValD) > (lValA + lValB)) and (lValC > 0) and (lValD > 0) and (lValA % 2 == 0)){
      cout << "Valores aceitos" << endl;
  } else {
      cout << "Valores nao aceitos" << endl;
  }

  return 0;
}
