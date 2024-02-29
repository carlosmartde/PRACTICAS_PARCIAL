#include <iostream>
using namespace std;


int main() {

int numero;
cout<<"INGRESE UN NUMERO: "<<endl;
cin>>numero;
    if (numero >0) {
    cout << "EL NUMERO ES POSITIVO" << endl;
    }else if(numero<0) {
    cout << "EL NUMERO ES NEGATIVO" << endl;
    }else {
    cout << "EL NUMERO ES CERO" << endl;
    }
    return 0;
}
