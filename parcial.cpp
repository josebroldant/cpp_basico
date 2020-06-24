#include<iostream>
using namespace std;
int main (){
    int b[4][5], c=0, f=0, contador1, contador2=0, a, d=0, peq, gran;
    float prom;
    while(f<4){
               while(c<5){
                          cout<<"digite 20 numeros para llenar la matriz";
                          cin>>b[f][c];
                          c++;
                          }
               c=0;
               f++;
               }
               
    f=0;
    c=0;
    
    while(f<4){
               while(c<5){
                          contador1=b[f][c];
                          contador2=contador1+contador2;
                          c++;
                          }
               c=0;
               f++;
               }
    cout<<"la suma de los numeros es: "<<contador2<<endl;
    
    prom=(contador2/20);
    cout<<"el promedio de los numeros es: "<<prom<<endl;
    
    d=contador2;
    f=0;
    c=0;
    while(f<4){
               while(c<5){
                          c++;
                          if(d>=b[f][c]){
                                        d=b[f][c];
                                        }
                          }
               c=0;
               f++;
               }
    cout<<"el numero mas pequeño es: "<<d<<endl;
    
    a=contador2;
    f=0;
    c=0;
    while(f<4){
               while(c<5){
                          c++;
                          if(a<b[f][c]){
                                        a=b[f][c];
                                        }
                          
                          }
               c=0;
               f++;
               }
    cout<<"el numero mas grande es: "<<a<<endl;
    
    system("pause");
    }
