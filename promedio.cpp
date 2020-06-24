#include <iostream>
using namespace std;
int main() {
    string name1,name2,name3;
    float e1,e2,e3,prom;
cout<<"digite el nombre de la primera persona: "<<endl;
cin>>name1;
cout<<"digite la edad de la primera persona: "<<endl;
cin>>e1;
cout<<"digite el nombre de la segunda persona: "<<endl;
cin>>name2;
cout<<"digite la edad de la segunda persona: "<<endl;
cin>>e2;
cout<<"digite el nombre de la tercera persona: "<<endl;
cin>>name3;
cout<<"digite la edad de la tercera persona: "<<endl;
cin>>e3;
prom=(e1+e2+e3)/3;
        if(prom>18){
                  cout<<"el promedio de "<<name1<<","<<name2<<" y "<<name3<<" es muy alto";
        }
        else
        if(prom<18){
                  cout<<"el promedio de "<<name1<<","<<name2<<" y "<<name3<<" es muy bajo";
        }
        else{
                  cout<<"El promedio es igual a 18";
        }
        system("pause");
}
