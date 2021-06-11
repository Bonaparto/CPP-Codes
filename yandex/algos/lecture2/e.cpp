#include <iostream>
using namespace std;
int main(){
    int n, max = 0, cnt = 1, ans = 0; cin >> n;
    int a[n]; bool f = 0;
    for(int i = 0; i < n; ++i)
    {
        cin >> a[i];
        if(a[i] > a[max]) max = i;
    } 
    for(int i = 0; i < n; ++i)
    {
        if(a[i] % 10 == 5 && f && (i + 1 < n && a[i+1] < a[i]))
        {
            if(a[i] == a[max]){
                cout << 1;
                return 0;
            }
            else if(ans < a[i]) ans = a[i];
        }
        if(a[i] == a[max]) f = 1;
    }
    if(ans != 0)
    {
        for(int i = 0; i < n; ++i)
            if(a[i] > ans) cnt++;
        cout << cnt;
    }
    else cout << 0;
}