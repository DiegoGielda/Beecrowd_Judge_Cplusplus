#include <iostream>

using namespace std;

int main(){
  
  int lTempo = 0, lTempoHora, lTempoMinuto = 0, lTempoSegundo = 0;
  cin >> lTempo;
  
  lTempoHora = lTempo / 3600;
  lTempo %= 3600;

  lTempoMinuto = lTempo / 60;
  lTempoSegundo = lTempo % 60;

  cout << lTempoHora << ":" << lTempoMinuto << ":" << lTempoSegundo << endl;

  return 0;
}