#include <iostream>
using namespace std;


int main() {
   double numero1, numero2, numero3;


   cout<<"INGRESE EL PRIMER NUMERO: "<<endl;
   cin>>numero1;
   cout<<"INGRESE EL SEGUNDO NUMERO"<<endl;
   cin>>numero2;
   cout<<"INGRESE EL TERCER NUMERO: "<<endl;
   cin>>numero3;

   if(numero1>=numero2 && numero1>=numero3) {
       cout << numero1 << " ES EL NUMERO MAYOR" << endl;
   }else if(numero2>=numero1 && numero2>=numero3){
       cout<<numero2<<" ES EL NUMERO MAYOR"<<endl;
   }else
       cout<<numero3<<" ES EL NUMERO MAYOR"<<endl;

    return 0;
}
