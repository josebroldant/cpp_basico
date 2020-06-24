#include <iostream>
using namespace std;
int main() {
    string name1,name2;
    float e1,e2;
cout<<"digite el nombre de la primera persona: "<<endl;
cin>>name1;
cout<<"digite la edad de la primera persona: "<<endl;
cin>>e1;
cout<<"digite el nombre de la segunda persona: "<<endl;
cin>>name2;
cout<<"digite la edad de la segunda persona: "<<endl;
cin>>e2;
        if(e1>e2){
                  cout<<name1<<" es mayor que "<<name2;
        }
        else
        if(e1<e2){
                  cout<<name2<<" es mayor que "<<name1;
        }
        else{
                  cout<<"Las personas tienen la misma edad";
        }
        system("pause");
}
