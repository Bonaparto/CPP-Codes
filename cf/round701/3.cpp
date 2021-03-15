#include <iostream>
#include <cmath>
using namespace std;

void solve(){
    int x, y, ans = 0;
    cin >> x >> y;
    if(x >= y){
        for(int i = 2; i <= y; ++i){
            int a = floor(x / i);
            if(a >= i) ans += i - 1;
            else{
                if(a == 1) ans++;
                else
                ans += (a - 1); 
            }  
        }
    }
    cout << ans << endl;
}


int main(){
    ios_base::sync_with_stdio();
    cin.tie(0);
    int n;
    cin >> n;
    while(n--) solve();    
}
