#include <iostream>
using namespace std;

void solve(){
    int a, k, s;
    cin >> a >> k;
    if(a % 2 == 0) cout << ((k - 1) % a) + 1 << endl;
    else{
        if(k - 1 < (a + 1) / 2) cout << k - 1 << endl;
        else if(k >= a) cout << ((((k - 1) / a) + (k - 1) % a) % a) << endl;         
        else if(k < a) cout << k << endl;
    }
    
}

int main(){
    ios_base::sync_with_stdio();
    cin.tie(0);
    int n; cin >> n;
    while(n--) solve();    
}
