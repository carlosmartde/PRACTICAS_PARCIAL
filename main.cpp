#include <iostream>
using namespace std;


int main() {

    int numero;
    int i=2;
    int suma;

    cout<<"INGRESE UN NUMERO: "<<endl;
    cin>>numero;

    while(i<=numero){
        suma=i+i;
        cout<<i<<endl;
        i+=2;
    }

    return 0;
}
