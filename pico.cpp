#include <iostream>
using namespace std;
int main() {
    string car;
    int placa;
    cout<<"Introduzca su tipo de vehiculo taxi o particular";
    cin>>car;
    
    if(car=="particular"){
                  cout<<"Su vehiculo es particular";
                  cout<<"Introduzca el ultimo numero de su placa";
                  cin>>placa;
                  if(placa==0){
                  cout<<"Usted tiene pico y placa los lunes y los miercoles";
                  }
                  else
                  if(placa==1){
                  cout<<"Usted tiene pico y placa los lunes y los miercoles";
                  }
                  else
                  if(placa==2){
                  cout<<"Usted tiene pico y placa los lunes y los jueves";
                  }
                  else
                  if(placa==3){
                  cout<<"Usted tiene pico y placa los lunes y los jueves";
                  }
                  else
                  if(placa==4){
                  cout<<"Usted tiene pico y placa los martes y los jueves";
                  }
                  else
                  if(placa==5){
                  cout<<"Usted tiene pico y placa los martes y los jueves";
                  }
                  else
                  if(placa==6){
                  cout<<"Usted tiene pico y placa los martes y los viernes";
                  }
                  else
                  if(placa==7){
                  cout<<"Usted tiene pico y placa los martes y los viernes";
                  }
                  else
                  if(placa==8){
                  cout<<"Usted tiene pico y placa los miercoles y los viernes";
                  }
                  else
                  if(placa==9){
                  cout<<"Usted tiene pico y placa los miercoles y los viernes";
                  }
}
     if(car=="taxi"){
                     cout<<"Su vehiculo es un taxi";
                     cout<<"Introduzca el ultimo numero de su placa";   
                     cin>>placa; 
                     if(placa==0||placa==1){
                     cout<<"Usted tiene pico y placa los lunes";
                     }
                     else
                     if(placa==2||placa==3){
                     cout<<"Usted tiene pico y placa los martes";
                     }
                     else
                     if(placa==4||placa==5){
                     cout<<"Usted tiene pico y placa los miercoles";
                     }
                     else
                     if(placa==6||placa==7){
                     cout<<"Usted tiene pico y placa los jueves";
                     }
                     else
                     if(placa==8||placa==9){
                     cout<<"Usted tiene pico y placa los viernes";
                     }
                     
                             
                
                }
    system("pause");
}
