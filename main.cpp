#include <iostream>
using namespace std;


int main() {
        int nacimiento;
        cout<<"INGRESE EL ANIO DE NACIMIENTO"<<endl;
        cin>>nacimiento;
        if (nacimiento>=1900 && nacimiento<=2024){
            cout<<nacimiento<<" ES UN ANIO VALIDO"<<endl;
        }else{
            cout<<nacimiento<<" NO ES UN ANIO VALIDO"<<endl;
        }

    return 0;
}
