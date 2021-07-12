#include <iostream>
#include <algorithm>
#include <map>
using namespace std;
int main(){
    int n, m, l = 0, r = 0, r1 = 0, ans = 0;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; ++i) cin >> a[i];
    sort(a, a+n);
    // for(int i = 0; i < n; ++i) cout << a[i] << " ";
    cin >> m;
    int b[m], c[m];
    map <int, int> mp;
    for(int i = 0; i < m; ++i) cin >> b[i] >> c[i];
    // for(int i = 0; i < m; ++i) if(mp[b[i]] > c[i]) mp[b[i]] = c[i];
    for(int i = 0; i < m; ++i) mp[b[i]] = c[i];
    sort(b, b+m);
    for(int i = 0; i < m; ++i) if(mp[b[i]] < mp[b[r]]) r = i;
    while(l != n)
    {
        if(b[r] >= a[l])
        {
            ans += mp[b[r]];
            l++;
        }
        else r++;
        cout << ans << " " << b[r] << " " << mp[b[r]] << " " << r << endl;
    }
    cout << ans;
    // for(int i = 0; i < m; ++i) cout << mp[b[i]] << endl;
}