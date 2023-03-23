//Owen Arcega Guerrero
#include <iostream>
using namespace std;

int main(){
  float a1, b1, c1, a2, b2, c2,aDet, xDet, yDet,x,y;
  cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;

  aDet = a1*b2 - a2*b1;
  xDet = c1*b2 - c2*b1;
  yDet = a1*c2 - a2*c1;

  x = xDet/aDet;
  y = yDet/aDet;

  cout << x << " " << y << endl;

  return 0;
}