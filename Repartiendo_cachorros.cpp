#include <iostream>

using namespace std;

int main(){
    uint16_t cachorros;
    cin >> cachorros;

    int16_t cachorrosPancho;
    cin >> cachorrosPancho;

    int16_t hijos;
    cin >> hijos;
    hijos++;

    uint16_t resultado = cachorros - cachorrosPancho;
    if(resultado % hijos == 0){
        cout << cachorrosPancho << endl;
    } else{
        cachorrosPancho += (resultado % hijos);
        cout << cachorrosPancho << endl; 
    }

    return 0;
}