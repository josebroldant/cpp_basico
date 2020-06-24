#include<iostream>
using namespace std;
int main() {
    int b[6][5], c=0, f=0, n=1;
    while(f<6){
               c=0;
               while(c<5){
                          b[f][c]=n;
                          n++;
                          c++;
                          }
               f++;
               }
    system("pause");
    }
