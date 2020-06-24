#include<iostream>
using namespace std;
int main() {    
   int arr1[20];
   int contador1=0; 
   int arr2[20];
   int contador2=0;
   int arrresultado[20];
   int contadorresultado;
   cout<<"inserte 20 numeros"<<endl;
   while(contador1<20){
                       cin>>arr1[contador1];
                       contador1++;
                       }
   cout<<"inserte otros 20 numeros"<<endl;
   while(contador2<20){
                       cin>>arr2[contador2];
                       contador2++;
                       }
    contador1=0;
    contador2=19;
    
    cout<<"el resultado es"<<endl;
    
    while(contador1<20){
                        contadorresultado=arr1[contador1]+arr2[contador2];
                         arrresultado[contador1]=contadorresultado;
                        contador1++;
                        contador2--;
                       
                        
                        
                        }
                        
                        int i=0;
                        while(i<20){
                          cout<<arrresultado[i]<<",";
                          i++;            
                        }
     
   system("pause"); 
}
