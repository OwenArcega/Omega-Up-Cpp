#include <iostream>
using namespace std;
#define PI 3.141592

int main(){
    float x;
    float y;
    float z;

    cin >> x;
    cin >> y;
    cin >> z;

    cout << (x+(x*(y+(z*z))))/((x + PI)*(y + PI)) << endl;

    return 0;
}