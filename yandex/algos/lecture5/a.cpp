#include <iostream>
using namespace std;
int main(){
    int n, m, l = 0, r = 0, ans = 10000000, l1, r1;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; ++i) cin >> a[i];
    cin >> m;
    int b[m];
    for(int i = 0; i < m; ++i) cin >> b[i];

    while(r != n && l != m)
    {
        int nowdif = abs(b[l] - a[r]);
        if(nowdif == 0)
        {
            cout << b[l] << " " << a[r];
            return 0;
        }
        if(nowdif < ans)
        { 
            ans = nowdif;
            l1 = l; r1 = r;
        }
        if(b[l] > a[r] || l == m - 1) r++;
        else if(a[r] > b[l] || r == n - 1) l++;
    }
    cout << a[r1] << " " << b[l1];
}