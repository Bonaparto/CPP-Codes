#include <bits/stdc++.h>
using namespace std;

bool IsPrime(int n){
    if(n == 1) return false;
    for(int i = 2; i * i <= n; ++i){
        if(n % i == 0) return false;
    }
    return true;
}

int main(){
    int n, cnt = 0, cnt1 = 0;
    cin >> n;
    for(int i = 2;; ++i){
        if(IsPrime(i)){
            cnt++;
            if(IsPrime(cnt)) cnt1++;
        }
        if(cnt1 == n){
            cout << i;
            return 0;
        }
    }
}