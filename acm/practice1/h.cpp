#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int a[n], ans1 = 0, ans2 = 0;
    for(int i = 0; i < n; ++i) cin >> a[i];
    int l = m;
    for(int i = 0; i < n; ++i) {
        if(a[i] <= l) {
            l -= a[i];
            ans1++;
        } else break;
    }
    l = m;
    for(int i = n - 1; i >= 0; --i) {
        if(a[i] <= l) {
            l -= a[i];
            ans2++;
        } else break;
    }
    if(ans1 == ans2) cout << "Empate";
    else cout << (ans1 > ans2 ? "Yan":"Nathan");
}