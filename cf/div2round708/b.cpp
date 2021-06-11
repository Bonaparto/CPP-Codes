#include <iostream>
#include <vector>
#include <cmath>
#include <map>
using namespace std;

void solve(){
    int n, m, cnt = 0, cnt1 = 0, cnt2 = 0, cnt3 = 0; cin >> n >> m;
    map <int, int> a;
    int b[n];
    for(int i = 0; i < n; ++i){
        int x; cin >> x;
        if(x % m == 0) cnt3++;
        else if(x * 2 == m) cnt1++;
        else if((float(x) / m) - trunc(float(x) / m) == 0.5) cnt2++;
        else{
            x = x % m;
            a[x]++;
            if(a[x] > a[m-x] + 1 || a[m-x] == 0) cnt++;
            else if(a[x] < a[m-x] - 1) cnt--;
        }
    }
    int o;
    if(cnt3 > 0) cnt3 = 1;
    if(abs(a[m / 2] - cnt2) <= 1 && (a[m / 2] != 0 && cnt2 != 0)){
        cnt2 = 1;
    }
    else if(cnt2 == 0 && (a[m / 2] * (m/2)) % m != 0) cnt2 = 0;
    else cnt1 = abs(cnt1 - cnt2);
    cout << cnt << " " << cnt1 << " " << cnt2 << endl;
    cout << abs(cnt) + cnt3 + cnt1 + cnt2 << endl;
}


int main(){
    ios_base::sync_with_stdio();
    cin.tie(0);
    int n;
    cin >> n;
    while(n--) solve();
}