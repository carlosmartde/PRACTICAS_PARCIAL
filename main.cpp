#include <iostream>
using namespace std;


int main() {

    int numero;
    int suma=0;
    cout<<"INGRESE UN NUMERO POSITIVO PARA SUMARLO O UNO NEGATIVO SI DESEA DETENER LA SUMA: "<<endl;
    cin>>numero;

    while(numero>=0){
        suma +=numero;
        cout<<"SUMA PARCIAL: "<<suma<<endl;
        cout<<"INGRESA OTRO NUMERO POSITIVO PARA AGREGARLO A LA SUMA O UNO NEGATIVO PARA DETENER LA SUMA: "<<endl;
        cin>>numero;
    }
    cout<<"LA SUMA DE LOS NUMEROS POSITIVOS ES :"<<suma<<endl;


    return 0;
}
