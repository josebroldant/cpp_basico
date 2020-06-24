#include<iostream>

using namespace std;

int main (){
    float corte1;
    float corte2;
    float corte3;
    float definitiva;
    

    cout<<"querido usuario por favor dijite la nota de su primer corte"<<endl;
    cin>>corte1;
    cout<<"a nota digitado por usted es : ";
    cout<<corte1<<endl;
    

    cout<<"querido usuario por favor dijite la nota de su segundo corte"<<endl;
    cin>>corte2;|
    cout<<"la nota digitado por usted es: ";
    cout<<corte2<<endl;    
    
    
    cout<<"querido usuario por favor dijite la nota de su tercer corte"<<endl;
    cin>>corte3;
    cout<<"la nota digitado por usted es: ";
    cout<<corte3<<endl;
    
    cout<<"querido usuario el resultado total de su materia es: "<<endl;
    definitiva=((corte1*30)/100)+((corte2*30)/100)+((corte3*40)|/100);
    cout<<definitiva;
    
    
    system("pause");
    
  
}
    
 
