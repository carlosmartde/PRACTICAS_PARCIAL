#include <iostream>
using namespace std;


int main() {

    int numero;
    int factorial=1;
    int i;

    cout<<"INGRESE EL NUMERO DEL QUE DESEA SABER EL FACTORIAL: "<<endl;
    cin>>numero;

    for (i=1; i<=numero; i++){
        factorial*=i;
    }
    cout<<"EL FACTORIAL DE "<<numero<<" ES "<<factorial<<endl;

    return 0;
}
