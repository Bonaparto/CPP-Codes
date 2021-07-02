#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n, k, l = 0, r = 2, ans = 0;
    cin >> n >> k;
    int a[n];
    for(int i = 0; i < n; ++i) cin >> a[i];
    sort(a, a+n);
    while(r < n)
    {
        if(r - l >= 2 && a[l] * k >= a[r])
        {
            if(a[r] != a[l+1] && a[l+1] != a[l]) ans += 6;
            else if((a[l] == a[l+1] != a[r]) || (a[l] != a[l+1] == a[r]) || (a[l] == a[r] != a[l+1])) ans += 3;
            else ans++;
            //cout << a[l] << a[l+1] << a[r] << " "; 
            //cout << a[r] / a[l] << endl;
            r++;
        }
        else if(a[l] * k < a[r])
        {
            int l1 = l;
            while(a[l1] == a[l]) l++;
        }
        if(r - l < 2) r++;
        //cout << ans << endl;
    }
    cout << ans;
}