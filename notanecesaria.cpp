#include <iostream>
using namespace std;
int main() {
	
	float n1,n2,nec;
cout<<"Digite la nota del primer corte";
cin>>n1;
cout<<"Digite la nota del segundo corte";
cin>>n2;
nec=(3-(n1*0.3)-(n2*0.3))/0.4;
	if(nec==0){
		cout<<"Felicidades ha aprovado";
	}
cout<<"Usted necesita para pasar la materia: "<<nec;
system("pause");
}
