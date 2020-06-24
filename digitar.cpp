#include<iostream>
using namespace std;
int main(){
    int num1, num2, res, op;
    cout<<"digite 1 para sumar, 2 para restar, 3 para multiplicar, 4 para dividir o 5 para salir del programa";
    cin>>op;
    while(op=1){
              cout<<"Digite el primer numero"<<endl;
              cin>>num1;
              cout<<"Digite el segundo numero"<<endl;
              cin>>num2;
              res=num1+num2;
              cout<<"el resultado de la operacion es: "<<res<<endl;
              }
    while(op=2){
              cout<<"Digite el primer numero"<<endl;
              cin>>num1;
              cout<<"Digite el segundo numero"<<endl;
              cin>>num2;
              res=num1-num2;
              cout<<"el resultado de la operacion es: "<<res<<endl;
              }
    while(op=3){
              cout<<"Digite el primer numero"<<endl;
              cin>>num1;
              cout<<"Digite el segundo numero"<<endl;
              cin>>num2;
              res=num1*num2;
              cout<<"el resultado de la operacion es: "<<res<<endl;
              } 
    while(op=4){
              cout<<"Digite el primer numero"<<endl;
              cin>>num1;
              cout<<"Digite el segundo numero"<<endl;
              cin>>num2;
              res=num1/num2;
              cout<<"el resultado de la operacion es: "<<res<<endl;
              }
    while(op=5){
              cout<<"el programa ha finalizado";            
              }
                              
          
    system("pause");              
}
