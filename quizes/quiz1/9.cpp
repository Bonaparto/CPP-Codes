#include <iostream>
using namespace std;
int main() {
int A,B,C,D;
cin >> A;
B = A / 3600;
C = A / 60; 
D = A % 60;
    if(B % 24 < 10){
    cout << "0" << B % 24; cout << ":";
    }
    else{
    cout << B % 24; cout << ":";
    }
cout << C % 60 / 10 ; cout << C % 10; cout << ":"; 
cout << D / 10 ; cout << D % 10 ;
}