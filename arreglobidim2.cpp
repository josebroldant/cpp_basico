#include<iostream>
using namespace std;
int main() {
    int b[6][5], c=0, f=0, n=1;
    while(f<6){
               while(c<5){
                          b[f][c]=n;
                          n++;
                          c++;
                          }
               c=0;
               n=1;
               f++;
               }
    f=0;
    c=0;
    while(f<6){
               while(c<5){
                          cout<<b[f][c];
                          c++;
                          }
               cout<<endl;
               c=0;
               f++;
    }
    system("pause");
    }
