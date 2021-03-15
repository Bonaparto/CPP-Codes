#include <bits/stdc++.h>
using namespace std;

int kbon(int n, int m){
    if(m == 1) return 0;
    if(m == 2) return 1;
    return (kbon(n, m - 2) + kbon(n, m - 1) * n) % 10;
}

int main(){
    int n, m;
    cin >> n >> m;
    cout << kbon(n,m);
}