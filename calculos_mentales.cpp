#include <iostream>
using namespace std;

int main(){
  float r;
  cin >> r;
  cout << r << endl;
  float original = r;

  r += 5;
  cout << r << endl;
  r *= r;
  cout << r << endl;
  r /= (original / 3);
  cout << r << endl;
  r *= r * r;
  cout << r << endl;

  return 0;
}