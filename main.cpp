#include <iostream>
using namespace std;


int main() {

    int numero;

    cout<<"INGRESE NUMEROS o INGRESE EL NUMERO CERO PARA SALIR DEL PROGRAMA: "<<endl;

    while (true) {
        cin >> numero;

        if (numero == 0) {
            cout << "SE INGRESO 0 SE DETENDRA EL PROGRAMA" << endl;
            break;

        }
    }

    return 0;
}
