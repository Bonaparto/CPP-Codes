#include <iostream>
using namespace std;

void solve(int x){
    int a[x], cnt = 0; bool c1 = 0, c2 = 0;
    for(int i = 0; i < x; ++i){
        cin >> a[i];
        if(a[i] % 2 == 0) c1 = 1;
        if(a[i] % 2 != 0) c2 = 1;
    }
    if(c1 == 0){
        cout << 0 << endl;
        return;
    }
    if(c2 == 0){
        cout << -1 << endl;
        return;
    }
    for(int i = 0; i < x; ++i){
        if(a[i] % 2 != 0) continue;
        for(int j = 0; j < x; ++j){
            if(i != j && a[j] % 2 != 0){
                cnt++;
                break;
            }
        }
    }
    cout << cnt << endl;
}

int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; ++i){
        int x; cin >> x;
        solve(x);
    }
}