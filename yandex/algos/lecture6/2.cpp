#include <iostream>
#include <algorithm>
using namespace std;

long long a[100001];
int n;

void binarysearch(long long x)
{
    long long l = 0, r = n - 1, ans = a[0], minv = 2e9;
    while(l < r)
    {
        int m = (l + r) / 2;
        if(a[m] == x)
        {
            cout << x << endl;
            return;
        }
       else if(a[m] > x) r = m;
       else l = m + 1;
       if((minv >= abs(a[m] - x) && ans > a[m]) || abs(a[m] - x) < minv)
       { 
           ans = a[m];  
           minv = abs(a[m] - x);
       }
       if(l == r && ((minv >= abs(a[r] - x) && ans > a[r]) || abs(a[r] - x) < minv)) ans = a[r];
        // cout << a[m] << " " << ans << " " << minv << endl; 
        //cout << minv << " " << r << " " << l << " " << a[m] << " " <<  x <<  endl;
    }
    cout << ans << endl;
}

int main()В
{
    int k;
    cin >> n >> k;
    for(int i = 0; i < n; ++i) cin >> a[i];
    for(int i = 0; i < k; ++i)
    {
        long long x; cin >> x;
        binarysearch(x);
    }    
}