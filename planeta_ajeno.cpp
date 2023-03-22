#include <iostream>
using namespace std;

int main(){
  uint32_t s;
  cin >> s;

  uint32_t minutos;
  uint32_t horas;
  uint32_t dias;

  minutos = s / 50;
  s = s % 50;
  horas = minutos / 70;
  minutos = minutos % 70;
  dias = horas / 12;
  horas = horas % 12;

  cout << dias << endl;
  cout << horas << endl;
  cout << minutos <<  endl;
  cout << s << endl;
  return 0;
}