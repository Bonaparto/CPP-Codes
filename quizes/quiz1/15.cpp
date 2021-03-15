#include <iostream>
using namespace std;
int main(){
int N,a1,a2,a3,a4;
cin >> N;
a1 = N / 1000;
a2 = (N / 100) % 10;
a3 = (N/ 10) % 10;
a4 = N % 10;
    if(a1 == a4 && a2 == a3){
        cout << "YES";
    }   
    else cout << "NO";
}