#include <bits/stdc++.h>
using namespace std;

int Fibo(int a){
    if(a == 1) return 0;
    if(a == 2) return 1;
    return Fibo(a-1) + Fibo(a-2);
}

int main(){
    int n;
    cin >> n;
    cout << Fibo(n);
}