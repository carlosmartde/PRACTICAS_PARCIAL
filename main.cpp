#include <iostream>
using namespace std;


int main() {

    int numero;
    int suma=0;
    int i;
    int n=1;

    cout<<"INGRESE UN NUMERO ENTERO POSITIVO: "<<endl;
    cin>>numero;

    if (numero<=0){
        cout<<"EL NUMERO QUE INGRESO NO ES VALIDO PORFAVOR INGRESE UN NUMERO ENTERO POSITIVO:"<<endl;
        return 0;
    }
    for (i=2; i<=numero; i+=2){
        suma +=i;
    }
    cout<<"LA SUMA DE LOS NUMEROS PARES HASTA: "<<numero<<" ES: "<<suma;

    return 0;
}
