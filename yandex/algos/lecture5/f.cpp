#include <iostream>
#include <algorithm>
#include <map>
using namespace std;
int main(){
    int n, m, ans = 0, l = 0, r = 0;
    cin >> n;
    int a[n]; map <int, int> mp;
    for(int i = 0; i < n; ++i) cin >> a[i];
    cin >> m;
    int b[m], c[m];
    for(int i = 0; i < m; ++i)
    {
        cin >> b[i] >> c[i];
        if(mp[c[i]] < b[i]) mp[c[i]] = b[i];
    }
    sort(a, a+n);
    sort(c, c+m);
    while(r != n)
    {
        if(a[r] <= mp[c[l]])
        {
            r++;
            ans += c[l];
        }
        else l++;
    } 
    cout << ans;
}