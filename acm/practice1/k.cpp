#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int max = -1, cnt = 0, ans = 0;
    for(int i = 0; i < n; ++i) {
        int x; cin >> x;
        if(x > max) {
            max = x;
            cnt = 1;
            ans = i + 1;
        } else if(x == max) cnt++;
    }
    if(cnt == 1) cout << ans;
    else cout << -1;
}   