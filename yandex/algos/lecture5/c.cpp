#include <iostream>
using namespace std;

int main(){
    int n, m;
    cin >> n;
    int a[n], pref[n+1], pref1[n+1];
    pref[0] = 0; pref1[n] = 0;
    cin >> a[0] >> a[0];
    for(int i = 1; i < n; ++i)
    { 
        cin >> a[i] >> a[i];
        if(a[i-1] < a[i])
        {
            pref[i] = pref[i-1] + a[i] - a[i-1];
        }
        else pref[i] = pref[i-1];
    }
    for(int i = n-1; i > 0; --i)
    {
        if(a[i] < a[i-1])
        {
            pref1[i] = pref1[i+1] + a[i-1] - a[i];
        }
        else pref1[i] = pref1[i+1];
    }
    cin >> m;
    for(int i = 0; i < m; ++i)
    {
        int x, x1; cin >> x >> x1;
        if(x < x1)
        {
            cout << pref[x1-1] - pref[x-1];
        }
        else cout << pref1[x1] - pref1[x]; 
        cout << endl;
    }
}