#include <iostream>
using namespace std;


int main() {

    int numero;
    int suma=0;
    cout<<"INGRESE UN NUMERO PARA SUMARLO HASTA LLEGAR A 100: "<<endl;

    while(suma<=100){
        cin>>numero;
        suma +=numero;
        cout<<"LA SUMA PARCIAL ES: "<<suma<<endl;
    }
    cout<<"LA SUMA DE LOS NUMEROS ES :"<<suma<<endl;


    return 0;
}
