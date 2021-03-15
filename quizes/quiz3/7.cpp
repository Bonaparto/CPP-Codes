#include <bits/stdc++.h>
using namespace std;

void PrimeFac(int n, int x){
    if(n < 2) exit(0);
    if(n % x == 0){
        cout << x << " ";
        PrimeFac(n / x, x);
    }
    PrimeFac(n, x + 1);
}

int main(){  
    int n;
    cin >> n;  
    PrimeFac(n, 2);   
} 