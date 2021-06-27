#include <iostream>
using namespace std;

int a[30001];

int cnt(int x, int x1)
{
    int l = x-1, r = l, ans = 0;
    if(l < x1-1)
    {
        while(l != x1-1)
        {
            if(a[l] < a[r])
            {
                ans += a[r] - a[l];
                l = r;
            }
            else
            {
                l = r;
                r++;
            }
            if(r == x1-1 && a[l] >= a[r]) break;
        }
    }
    else
    {
        while(r != x1-1)
        {
            if(a[r] < a[l])
            {
                ans += a[l] - a[r];
                r = l;
            }
            else
            {
                r = l;
                l--;
            }
            if(l == x1-1 && a[r] >= a[l]) break;
        }
    }
    return ans;
}

int main(){
    int n, m;
    cin >> n;
    for(int i = 0; i < n; ++i) cin >> a[i] >> a[i];
    cin >> m;
    for(int i = 0; i < m; ++i)
    {
        int x, x1; cin >> x >> x1;
        cout << cnt(x, x1) << endl;
    }
}