//Owen Arcega Guerrero
#include <iostream>
using namespace std;

int main(){
  uint32_t tamalesRobados, miembrosDeLaBanda;
  cin >> tamalesRobados >> miembrosDeLaBanda;
  miembrosDeLaBanda--;

  int tamalesComidos;
  if(tamalesRobados % 2 == 1){
    tamalesRobados = (tamalesRobados/2);
    tamalesComidos = tamalesRobados+1;
  } else{
    tamalesRobados = tamalesRobados/2;
    tamalesComidos = tamalesRobados;  
  }

  tamalesRobados = tamalesRobados % miembrosDeLaBanda;
  tamalesComidos += tamalesRobados;
  
  cout << tamalesComidos << endl;
  return 0;
}