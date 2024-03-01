#include <iostream>
using namespace std;


int main() {

    int producto=1;
    int numero=1;

    while (numero<=10){
        producto *=numero;
        numero++;
    }
    cout<<"EL PRODUCTO DE LOS PRIMEROS NUMEROS NATURALES ES: "<<producto<<endl;


    return 0;
}
