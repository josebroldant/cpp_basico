#include<iostream>
using namespace std;
int main(){
    int num, nvueltas=1, multacum=1;
    cout<<"introduza el numero al que le desea sacar el factorial ";
    cin>>num;
    while(nvueltas<=(num-1)){    
          multacum=multacum*(nvueltas+1);
          nvueltas++;
               }
    cout<<"el factorial es: "<<multacum<<endl;           
    system("pause");
}
  

