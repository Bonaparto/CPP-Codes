#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long a, b, k;
    cin >> a >> b >> k;
    long long pos = 0;
    if(k % 2 == 0) {
        pos += (k / 2) * a;
        pos -= (k / 2) * b;
    } else {
        pos += (k / 2) * a;
        pos -= (k / 2) * b;
        pos += a;
    }
    cout << pos << endl;
}

int main() {
    int n;
    cin >> n;
    while(n--) {
        solve();
    }
}