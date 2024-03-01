#include <iostream>
using namespace std;


int main() {

    int numero;
    int i;

    cout<<"INGRESE UN NUMERO: "<<endl;
    cin>>numero;

    cout<<"LOS NUMEROS DIVISORES DE "<<numero<<" SON: ";

    for (i=1; i<=numero; i++){
        if (numero%i==0){
            cout<<i<<" ";
        }
    }

    return 0;
}
