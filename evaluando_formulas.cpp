#include <iostream>
using namespace std;

int main(){
  float x;
  float y;
  float z;

  cin >> x;

  y = (x+5)/(2*(x+1));

  z = ((y*y)+(x*(x-(2*y))))/(x*y);

  cout << z << endl;
  return 0;
}