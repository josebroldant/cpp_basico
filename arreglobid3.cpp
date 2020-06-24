#include<iostream>
using namespace std;
int main (){
    int a[3][3], b[3][3], r[3][3], c=0, f=0, d=0, g=0, e=0, h=0;
    while(f<3){
               while(c<3){
                          cout<<"digite numeros para la primera matriz";
                          cin>>a[f][c];
                          c++;
                          }
               c=0;
               f++;
               }
    
               

    while(g<3){
               while(d<3){
                          cout<<"digite numeros para la segunda matriz";
                          cin>>b[g][d];
                          d++;
                          }
               d=0;
               g++;
               }

    
    
    r[h][e]=(a[f][c]*b[g][d]);
    cout<<"la matriz resultante es"<<r[h][e];
    system("pause");
}
