#include <iostream>
using namespace std;

void solve(){

}

int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; ++i){
        long long x, y; cin >> x >> y;
        if(x == y || x % y == 0) cout << 1 << endl;
        if(x > y && x % y != 0) cout << 2 << endl;
        if(x < y && x != 1 && y % x > 0) cout << (y / x) + 1 << endl;
        if(y % x == 0 && x != y) cout << y / x << endl;
    }
}