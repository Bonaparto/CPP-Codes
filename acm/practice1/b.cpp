#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin >> n;
    long long a[n];
    for(int i = 0; i < n; ++i) cin >> a[i];
    long long l = 0, r = n - 1, ans = 0;
    while(true) {
        ans++;
        long long mid = (l + r) / 2;
        //cout << a[mid] << endl;
        if(a[mid] == a[n-1]) {
            cout << ans;
            return 0;
        }
        l = mid + 1;
    }
}   