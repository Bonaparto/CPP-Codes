#include <iostream>
using namespace std;

long long mod = 1791791791, cur, a, b;

long long NextRand(){
    cur = (cur * a + b) % mod;
    return cur;
}

int main(){
    int n, ans1 = 0, ans2 = 1; long long max1 = 0, max2 = 0;
    cin >> n >> cur >> a >> b;
    for(int i = 0; i < n; ++i){
        long long x = NextRand();
        if(x > max1){
            ans2 = ans1;
            ans1 = i;
            max2 = max1;
            max1 = x;
        }
        else if(x > max2){
            max2 = x;
            ans2 = i;
        }
    }
    cout << ans1 + 1 << " " << ans2 + 1;
}