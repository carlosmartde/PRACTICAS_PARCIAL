#include <iostream>
using namespace std;


int main() {
      int precio;
      int porcentaje;
      int descuento;
      int precio2;
      cout<<"INGRESE EL PRECIO DEL PRODUCTO: "<<endl;
      cin>>precio;
      cout<<"INGRESE EL PORCENTAJE DE DESCUENTO: "<<endl;
      cin>>porcentaje;

      descuento=precio*porcentaje/100;
      precio2=precio-descuento;

      cout<<"EL PRECIO DESPUES DEL DESCUENTO ES: "<<precio2<<" USTED TUVO UN AHORRO DE: "<<descuento<<endl;


    return 0;
}
