#include <iostream>
using namespace std;

void solve(){
    int n, m;
    cin >> n >> m;
    int cnt = 0;
    int a[n], b[m], a1[n], b1[m];
    while(n--){
        int x; cin >> x;
        if(x < 0) a[cnt] = x;
        else a1[cnt] = x;
        cnt++;
    }
    cnt = 0;
    while(m--){
        int x; cin >> x;
        if(x < 0) b1[cnt] = x;
        else b[cnt] = x;
        cnt++;
    }
    for(int i = 0; i < sizeof(b)/sizeof(int); ++i){
        
    }
}


int main(){
    ios_base::sync_with_stdio();
    cin.tie(0);
    int n;
    cin >> n;
    while(n--) solve();
 
}
