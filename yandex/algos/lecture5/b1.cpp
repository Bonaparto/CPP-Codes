#include <iostream>
using namespace std;
int main(){
    int n, k, l = 0, r = 0, ans = 0, sum = 0;
    cin >> n >> k;
    int a[n];
    for(int i = 0; i < n; ++i) cin >> a[i];
    sum = a[0];
    while(l != n)
    {
        if(sum == k)
        {
            while(true)
            {
                ans++;
                if(r != n - 1)
                { 
                    r++;
                    sum += a[r];
                }
                sum -= a[l];
                l++;
                if(sum != k) break;
            }
        }
        if(sum > k)
        {
            sum -= a[l];
            l++;
        }
        if(a[l] == k)
        {   
            sum -= a[l];
            ans++;
            l++;
        }
        if(r == n - 1) break;
        if(sum < k && r != n - 1)
        { 
            r++;
            sum += a[r];
        }
        //cout << sum << endl;
    }
    cout << ans;
}