#include<iostream>
using namespace std;
int main() {
    char a[10];
    int contador=0;
    char simbolo;
    int cantidad;
    while(contador<10){
          cin>>a[contador];
          contador++;            
                      
                      }
    contador=-1;
    cout<<"digite el caracter que desea buscar";
    cin>>simbolo;
    while(contador<10){
    if(a[contador]==simbolo){
    cantidad++;                   
                       }
    contador++;                    
                       }

     
   
   cout<<"se encontaron "<<cantidad<<" caracteres iguales";             
   system("pause");
    
}
