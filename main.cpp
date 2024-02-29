#include <iostream>
using namespace std;


int main() {
    char letra;

    cout<<"INGRESE UNA LETRA: "<<endl;
    cin>>letra;

    letra= tolower(letra);
    if (letra=='a'|| letra=='e'|| letra=='i'|| letra=='o'||letra =='u'){
        cout<<letra<<" ES UNA VOCAL"<<endl;
    }else if ((letra>='a' && letra <='z') &&!((letra=='a'|| letra=='e'|| letra=='i'|| letra=='o'||letra =='u'))){
        cout<<letra<<" ES UNA CONSONANTE"<<endl;
    }else {
        cout<<letra<<"NO ES UNA LETRA VALIDA"<<endl;
    }

    return 0;
}
