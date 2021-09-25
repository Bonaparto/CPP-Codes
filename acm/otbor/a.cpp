#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, sum = 0, q = 1, ans = 0;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; ++i) {
        int x; cin >> x;
        if(x == 0) { 
            x++;
            ans++;
        }
        sum += x;
        q *= x;
        a[i] = x;
    }
    if(sum == 0) { 
        for(int i = 0; i < n; ++i) {
            if(a[i] != -1) { 
                a[i]++;
                sum++;
                ans++;
                cout << ans << endl;
                return;
            }
        }
    } else {
        cout << ans << endl;
        return;
    }
    cout << ans + 2 << endl;
}

int main() {
    int n;
    cin >> n;
    while(n--) {
        solve();
    }
}