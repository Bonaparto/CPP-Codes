#include <iostream>
using namespace std;

int MinDivisor(int n){
    for(int i = 2; i * i <= n; ++i){
        if(n % i == 0) return i;
    }
    return n;
}

int main(){
    int n;
    cin >> n;
    cout << MinDivisor(n);
}