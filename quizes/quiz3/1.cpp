#include <bits/stdc++.h>
using namespace std;

int IsPrime(int n){
    int cnt = 0;
    for(int i = 2;; ++i){
        for(int j = 2;; ++j){
            if(j == i){ 
                cnt++;
                if(cnt == n) return i;
                break;
            }
            if(i % j == 0 && j != i) break;
        }
    }
}

int main(){
    int n;
    cin >> n;
    cout << IsPrime(n);
}
