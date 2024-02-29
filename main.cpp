#include <iostream>
using namespace std;


int main() {
   int año;
   cout<<"INGRESE EL ANIO: "<<endl;
   cin>>año;
   if ((año%4 ==0 && año%100 !=0)|| (año%400 ==0)){
       cout<<año<<" SI ES UN ANIO BISIESTO"<<endl;
   }else{
       cout<<año<<" NO ES UN ANIO BISIESTO"<<endl;
   }
    return 0;
}
