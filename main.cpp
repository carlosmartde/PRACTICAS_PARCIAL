#include <iostream>
using namespace std;


int main() {

    int cantdenumeros;
    double suma=0.0;
    double numero;
    int i=1;

    cout<<"INGRESE LA CANTIDAD DE NUMEROS QUE DESEA PROMEDEAR: "<<endl;
    cin>>cantdenumeros;

    if (cantdenumeros<=0){
        cout<<"LA CANTIDAD DE NUMEROS DEBE DE SER AL MENOS 1: "<<endl;
        return 1;
            }
    while(i<=cantdenumeros){
        cout<<"INGRESE EL NUMERO "<<i<<" :"<<endl;
        cin>>numero;
        suma +=numero;
        i++;
    }
    double media= suma / cantdenumeros;
    cout<<"EL PROMEDIO DE LOS NUMEROS ES: "<<media;

    return 0;
}
