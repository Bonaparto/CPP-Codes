#include <bits/stdc++.h>
using namespace std;

void solve() {
    int h, m; 
    cin >> h >> m;
    int m1 = h * 60 + m;
    cout << 1440 - m1 << endl;
}

int main() {
    int n;
    cin >> n;
    while(n--) {
        solve();
    }
}