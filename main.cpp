#include <iostream>
using namespace std;


int main() {
        int numero;
        cout<<"INGRESE EL NUMERO: "<<endl;
        cin>>numero;

        if (numero%5 ==0 && numero%7 !=0){
            cout<<numero<<" ES UN MULTIPLO DE 5"<<endl;
        }else if (numero%7 ==0 && numero%5 !=0){
            cout<<numero<<" ES UN MULTIPLO DE 7"<<endl;
        }else if (numero%5==0 && numero%7==0){
            cout<<numero<<" ES UN MULTIPLO DE 5 Y DE 7"<<endl;
        }else {
            cout<<numero<<" NO ES MULTIPLO DE 5 NI DE 7"<<endl;
        }
    return 0;
}
