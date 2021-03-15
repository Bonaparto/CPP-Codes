#include <iostream>
using namespace std;

void solve(){
    int n, min = 101;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; ++i){
        cin >> a[i];
        if(a[i] < min) min = a[i];
    }
    int cnt = 0;
    for(int i = 0; i < n; ++i){
        if(a[i] != min) cnt++;
    }
    cout << cnt << endl;
}


int main(){
    ios_base::sync_with_stdio();
    cin.tie(0); 
    int n;
    cin >> n;
    while(n--) solve();
}
