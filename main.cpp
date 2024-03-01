#include <iostream>
using namespace std;


int main() {

    int numero;
    int i;

    cout<<"INGRESE EL NUMERO DE TABLA QUE DESEA GENERAR: "<<endl;
    cin>>numero;

    for (i=1; i<=10; i++){
        cout<<numero<<" x "<<i<<endl;
    }

    return 0;
}
