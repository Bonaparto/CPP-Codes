#include <bits/stdc++.h>
using namespace std;

bool IsPrime(int n){
    for(int i = 2; i * i <= n; ++i){
        if(n % i == 0) return false;
    }
    return true;
}

int main(){
    int n;
    cin >> n;
    int a = n - 1;
    while(1){
        for(int i = a - 1; i > 0; --i){
            if(IsPrime(i)){
                a = i;
                break;
            }
        }
        for(int i = 2; i < n; ++i){
            if(IsPrime(i)){
                if(i + a == n){
                    cout << i << " " << a; 
                    return 0;
                }
            }
        }
    }
}