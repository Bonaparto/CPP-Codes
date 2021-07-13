#include <iostream>
using namespace std;
int main(){
    int n, k, l = 0, r = 1, ans = 0;
    cin >> n >> k;
    int a[n];
    for(int i = 0; i < n; ++i) cin >> a[i];
    while(r != n)
    {
        if(a[r] - a[l] > k)
        {
            ans += n - r;
            l++;
        }
        else r++;
    }
    cout << ans;
}