#include <bits/stdc++.h>
using namespace std;

bool res = false;

bool CheatOrNot(int n, int * a, int k, int i){
    if(i == n) return res;
    if(abs(a[i] - a[i-1]) <= k) res = true;
    return CheatOrNot(n, a, k, i + 1);
}

int main(){
    int n,k;
    cin >> n >> k;
    int a[n];
    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }
    sort(a, a + n);
    CheatOrNot(n,a,k,1)?cout << "cheater":cout << "no";
}