#include <iostream>
using namespace std;

int tribonacci(int a){
    int b[a];
    b[0] = 0;
    b[1] = 1;
    b[2] = 1;
    for(int i = 3; i <= a; ++i){
        b[i] = b[i-3] + b[i-2] + b[i-1];
    }
    return b[a];
}

int main(){
    int n;
    cin >> n;
    cout << tribonacci(n);
}