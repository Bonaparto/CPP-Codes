#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n, k, l = 0, r = 2, ans = 0;
    cin >> n >> k;
    int a[n];
    for(int i = 0; i < n; ++i) cin >> a[i];
    sort(a, a+n);
    while(l < n - 2)
    {
        if(r - l >= 2 && a[l] * k >= a[r])
        {
            if(a[r] != a[l+1] && a[l+1] != a[l]) ans += 6;
            else if((a[l] == a[l+1] && a[l+1] != a[r]) || (a[l] != a[l+1] && a[l+1] == a[r])) ans += 3;
            else ans++;  
            r++;
            int r1 = r - 1; 
            while(a[r1] == a[r] && r < n - 1) r++;
            if(r == n - 1 && a[r] == a[l]) l = n - 2;
            else if(r == n - 1) l++;
            cout << l << " " << r <<  " " << ans << endl;
        }
        else if(a[l] * l < a[r]) l++;
    }
    cout << ans;
}