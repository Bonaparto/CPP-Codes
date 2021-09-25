#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    string s, s1 = ""; cin >> s;

    for(int i = 0; i < k; ++i) {
        char c; cin >> c;
        s1 += c;
    }
    long long cnt = 1, ans = 0;
    for(int i = 0; i < s.size(); ++i) {
        if(s1.find(s[i]) != string::npos) {
            //cout << s[i] << " " << cur << " " << cnt << endl;
            //cout << cnt <<  " " << ans << endl;
            ans += cnt;
            cnt++;
        } else {
            cnt = 1;
            //cout << s[i] << endl;
        }
    }
    cout << ans;
}