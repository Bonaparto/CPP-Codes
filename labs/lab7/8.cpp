#include <bits/stdc++.h>
using namespace std;

int Fibo(int a){
    if(a == 1) return 0;
    if(a == 2) return 1;
    return Fibo(a-1) + Fibo(a-2);
}
int Fibo1(int n){
    if(n == 1) return 0;
    int a = 0;
    int b = 1;
    for(int i = 3; i <= n; ++i){
        int c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int m[51];

int Fibo2(int n){
    if(m[n] != -1) return m[n];
    m[n] = Fibo2(n-1) + Fibo2(n-2);
    return m[n];   
}

int main(){
    m[1] = 0;
    m[2] = 1;
    for(int i = 3; i <= 50; ++i){
        m[i] = - 1;
    }
    int n;
    cin >> n;
    cout << Fibo2(n);
}