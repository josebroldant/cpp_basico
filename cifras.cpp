#include <iostream>
using namespace std;
int main() {
    int num;
    cout<<"Introduca un numero entero";
    cin>>num;
    
    if((num<10)&&(num>-10)){
    cout<<"Su numero es de una cifra";
    }
    else
    if(((num>=10)&&(num<=99))||((num<=-10)&&(num>=-99))){
    cout<<"Su numero es de dos cifras";
    }
    else
    if(((num>=100)&&(num<=999))||((num<=-100)&&(num>=-999))){
    cout<<"Su numero es de tres cifras";
    }
    else
    cout<<"Su numero es de cuatro o mas cifras";

    system("pause");
}
    
