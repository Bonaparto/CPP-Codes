#include <iostream>
using namespace std;

void solve(){
    long long p, a, b, c;
    cin >> p >> a >> b >> c;
    if(p % a == 0 || p % b == 0 || p % c == 0){
        cout << 0 << endl;
        return;
    }
    if(p < a) a = a - p;
    if(p < b) b = b - p;
    if(p < c) c = c - p;
    if(p > a){
        long long x = p / a;
        a = (x + 1) * a - p;
    }
    if(p > b){
        long long x = p / b;
        b = (x + 1) * b - p;
    }
    if(p > c){
        long long x = p / c;
        c = (x + 1) * c - p;
    }
    cout << min(a, min(b, c)) << endl;
}


int main(){
    ios_base::sync_with_stdio();
    cin.tie(0);
    int n;
    cin >> n;
    while(n--) solve();
}