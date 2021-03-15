#include <iostream>
using namespace std;

void solve(){
    int n, a, b, c, d, a1=0, b1=0, c1=0, d1=0;
    cin >> n >> a >> b >> c >> d;
    if(a == n){
        if(b != n) b1++;
        if(d != n) d1++;
    }
    if(b == n){
        if(a!=n) a1++;
        if(c!=n) c1++;
    }
    if(c == n){
        if(b!=n) b1++;
        if(d!=n) d1++;
    }
    if(d == n){
        if(a!=n) a1++;
        if(c!=n) c1++;
    }
    if(a == n - 1){
        if(d1 + 1 > d) b1++;
        else if(b1 + 1 > b) d1++;
    }
    if(b == n - 1){
        if(a1 + 1 > a) c1++;
        else if(c1 + 1 > c) a1++;
    }
    if(c == n - 1){
        if(b1 + 1 > b) d1++;
        else if(d1 + 1 > d) b1++;
    }
    if(d == n - 1){
        if(a1 + 1 > a) c1++;
        else if(c1 + 1 > c) a1++;
    }
    if(a1 > a || b1 > b || c1 > c || d1 > d){
        cout << "no" << endl;
    }
    else cout << "yes" << endl;
}


int main(){
    ios_base::sync_with_stdio();
    cin.tie(0);
    int n;
    cin >> n;
    while(n--) solve();
}