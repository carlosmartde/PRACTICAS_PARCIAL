#include <iostream>
using namespace std;


int main() {
        int calificacion;
        cout<<"INGRESE LA CALIFICACION NUMERICA DEL ESTUDIANTE ENTRE 0-100:  "<<endl;
        cin>>calificacion;

        if (calificacion>=90 && calificacion<=100){
            cout<<"CALIFICACION 'A'"<<endl;
        }else if(calificacion>=80 && calificacion<=89){
            cout<<"CALIFICACION 'B'"<<endl;
        }else if(calificacion>=70 && calificacion<=79) {
            cout << "CALIFICACION 'C'" << endl;
        }else if(calificacion>=60 && calificacion<=69) {
            cout << "CALIFICACION 'D'" << endl;
        }else if(calificacion>=00 && calificacion<=59) {
            cout << "CALIFICACION 'F'" << endl;
        }else{
            cout<<"LA NOTA NUMERICA INGRESADA NO ES VALIDA"<<endl;
        }

    return 0;
}
