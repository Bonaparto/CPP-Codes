#include <bits/stdc++.h>
using namespace std;

bool IsPrime(int b){
    int a = abs(b);
    if(a == 0 || a == 1) return false;
    for(int i = 2; i * i <= a; ++i){
        if(a % i == 0) return false;
    }
    return true;
}

int main(){
    int n;
    cin >> n;
    vector <int> v(n);
    for(int i = 0; i < n; ++i){
        cin >> v[i];
    }
    int cnt = count_if(v.begin(), v.end(), IsPrime);
    cout << cnt;
}