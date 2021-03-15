#include <bits/stdc++.h>
using namespace std;

int nbon(int a, int b){
    if(b == 1) return 0;
    if(b == 2) return 1;
    return (nbon(a, b - 2) + nbon(a, b - 1) * a) % 10;
}

int main(){
    int n, m;
    cin >> n >> m;
    cout << nbon(n, m);
}
