#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    long long a[n];
    double f = 0, s = 0;
    for(int i = 0; i < n; ++i) cin >> a[i];
    for(int i = 0; i < n; ++i) {
        long long x; cin >> x;
        f += (a[i] - x) * (a[i] - x);
    }
    for(int i = 0; i < n; ++i) {
        long long x; cin >> x;
        s += (a[i] - x) * (a[i] - x);
    }
   // cout << f << " " << s << endl;
    cout << (sqrt(f) < sqrt(s) ? "Yan" : "MaratonIME");
}