#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long a, b, q, ans = 0;
    cin >> a >> b >> q;
    for(int i = 0; i < q; ++i) {
        long long l, r, l1, r1;
        cin >> l >> r;
        if(r >= b) r1 = r;
        else {
            cout << 0 << endl;
            continue;
        }
        if(l >= b) l1 = l;
        else l1 = b;
        ans += (r1 - l1) + 1;
        if(l1 == r1 && r1 % b == 0) ans--;
        //cout << "wtf " << endl;
        bool a1 = 0, b1 = 0, c1 = 0;
        for(long long j = l1; j < r1; ++j) {
            if(j % b == 0) {
                //cout << " wtf " << endl;
                ans -= floor((r1 - l1) / b);
                a1 = 1;
            } //else if(j % a == 0) {
            //     ans -= floor((r1 - l1) / a);
            //     b1 = 1;
            // }
            if(j % a == 0 && j % b == 0) {
                ans += floor((r1 - l1) / (a * b));
                c1 = 1;
            }
            if(a1 && b1 && c1) break;
        }
        cout << ans << " ";
        ans = 0;
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;
    while(n--) {
        solve();
    }
}