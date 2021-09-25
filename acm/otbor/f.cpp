#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    string s = "";
    for(int i = 0; i < n; ++i) { 
        s += char(i % k) + 97;
    }
    cout << s << endl;
}

int main() {
    int n;
    cin >> n;
    while(n--) {
        solve();
    }
}