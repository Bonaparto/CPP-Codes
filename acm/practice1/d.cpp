#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int a[n], b[n+1];
    b[0] = 0;
    for(int i = 1; i <= n; ++i) {
        cin >> a[i];
        b[i] = b[i-1] + a[i];
    }
    while(m--) {
        int l, r;
        cin >> l >> r;
        cout << ((b[r] - b[l-1]) % 2 == 0 ? "Sim": "Nao");
        //cout << b[r] - b[l-1] << endl;
        cout << endl;
    }
}