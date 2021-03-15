#include <iostream>
using namespace std;
int main(){

    int a,b,c = 0,n;
    cin >> n;
    for(a = 0;a < n;a++){
       cin >> b;
       while (b != 0){
           if(b % 10 == 0){
               c++; b /= 10;
           } 
           else{b /= 10;}
       }
    }
cout << c;}
