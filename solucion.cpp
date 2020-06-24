#include<iostream>
using namespace std;
int main() {
    int a[3][3], b[3][3], resultado[3][3];
    int i=0;
    while(i<3){
    int j=0;
        while(j<3){
                   cout<<"digite el numero"<<i<<","<<j<<"de la matriz a";
                   cin>>a[i][j];
                   cout<<"digite el numero"<<i<<","<<j<<"de la matriz b";
                   cin>>b[i][j];
                   j++;
                   }
                   cout<<endl;
                   i++;
        }
        
        cout<<endl;
        i=0;
        while(i<3){
        int j=0;
            while(j<3){
                       cout<<a[i][j]<<",";
                       j++;
                       }
                       cout<<endl;
                       i++;
                       } 
        cout<<endl;
        i=0;
        while(i<3){
        int j=0;
            while(j<3){
                       cout<<b[i][j]<<",";
                       j++;
                       }
                       cout<<endl;
                       i++;
            }
                
      system("pause");          
}
