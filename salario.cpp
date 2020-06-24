#include<iostream>
using namespace std;
int main () {
    
    int salbase,liq1,liq2,liq3,hijos;
    string ciudad,estciv,cargo,raz1,raz2,raz3,raz4;
    
    cout<<"introduzca su cargo";
    cin>>cargo;
    if(cargo=="administrativo"){
                                salbase=1000000;
                                raz1="su salario base es de 1000000, ";
                                cout<<raz1;
                                }
    else
    if(cargo=="operativo"){
                           salbase=600000;
                           raz1="su salario base es de 600000, ";
                           cout<<raz1;
                           }
    cout<<"introduzaca su ciudad de nacimiento";
    cin>>ciudad;
    if(ciudad=="medellin"){
                           cout<<"por marica no se le da bonificacion";
                           liq1=salbase;
                           cout<<"su liquidacion por ahora es de "<<liq1;
                           raz2="usted es un marica paisa";
                           }
    else
        {
                           liq1=salbase+((salbase*10)/100);
                           cout<<"su liquidacion por ahora es de "<<liq1;
                           raz2="usted nacio en una ciudad decente";
                           }
    cout<<"usted esta maldito por el matrimonio?";
    cin>>estciv;
    if(estciv=="si"){
                     liq2=liq1+50000;
                     cout<<"su liquidacion por ahora es de "<<liq2;
                     raz3="usted es casado y ";
                     }
    else
    if(estciv=="no"){
                     liq2=liq1;
                     cout<<"su liquidacion por ahora es de "<<liq2;
                     raz3="usted no es casado y ";
                     }
    cout<<"cuantos hijos tiene?";
    cin>>hijos;
    if(hijos==0){
                 liq3=liq2;
                 cout<<"su liquidacion por ahora es de "<<liq3;
                 raz4="no tiene hijos";
                 }
    else
    if(hijos>=1){
                   if(cargo=="administrativo"){
                   liq3=liq2+((hijos*2*salbase)/100);
                   cout<<"su liquidacion por ahora es de "<<liq3;
                   raz4="porque su numero de hijos es de ";
                   }
                   else
                   if(cargo=="operativo"){
                   liq3=liq2+((hijos*3*salbase)/100);
                   cout<<"su liquidacion por ahora es de "<<liq3;
                   raz4="porque su numero de hijos es de ";
                   }
    }
    cout<<"su liquidacion final es de "<<liq3;
    cout<<"se le debe este valor porque ";
    cout<<raz1<<raz2<<raz3<<raz4<<hijos;
                   

    system("pause");
}
