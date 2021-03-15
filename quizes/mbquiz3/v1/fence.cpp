#include <bits/stdc++.h>
using namespace std;

bool yesornot(int n, int k){
    int a[n][3];
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < 3; ++j){
            cin >> a[i][j];
        }
    }
    for(int i = 0; i < n; ++i){
        int av = 0;
        for(int j = 0; j < 3; ++j){
            av += a[i][j];
        }
        av /= 3;
        if(av >= k) return 1;
    }
    return 0;
}

int main(){
    int n, m;
    cin >> n >> m;
    cout << (yesornot(n,m)?"YES":"NO");
}