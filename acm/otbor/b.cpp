#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, min = 1000000, second = 0, ans = 0;
    cin >> n;
    int a[n];

    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    sort(a, a + n);

    for(int i = 0; i < n; ++i) {
        min = 1000000;
        if(a[i] == -1) continue;
        for(int j = i + 1; j < n; ++j) {
            if(a[j] == -1) continue;
            if(min > abs(a[j] - a[i])) {
                min = abs(a[j] - a[i]);
                //cout << a[i] << " " << a[j] << endl;
                second = j;
            }
        }
        if(min == 1000000) continue;
        ans += min;
        //cout << min << endl;
        a[second] = -1;
    }
    cout << ans << endl;
}

int main() {
    solve();
}