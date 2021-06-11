#include <iostream>
using namespace std;
int main(){
    int n, x;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; ++i) cin >> a[i];
    cin >> x;
    int ans = a[0];
    for(int i = 0; i < n; ++i)
    {   
        if(abs(a[i] - x) < abs(ans - x)) ans = a[i];
    }
    cout << ans;
}