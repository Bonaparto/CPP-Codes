#include <iostream>
using namespace std;

void sol(int n)
{
    int a[n+1], cnt = 0;
    for(int i = 1; i <= n; ++i) cin >> a[i];   
    for(int i = 1; i < n; ++i)
    {
        if(a[i] > 2 * n) continue;
        for(int j = i + 1; j <= 2*n; ++j)
        {
            if(i * j >= 2 * n) break;
            if(a[i] * a[j] == i + j) cnt++;
        }
    }
    cout << cnt << endl;
}

int main(){
    ios_base::sync_with_stdio();
    cin.tie(0);
    int n;
    cin >> n;
    while(n--)
    {
        int x; cin >> x;
        sol(x);
    }
}