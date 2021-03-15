#include <bits/stdc++.h>
using namespace std;

int res(int n, int m){
    if(n == 1) return m;
    int cnt = 1, f;
    for(int i = n - 1; i > 0; --i){
        if(cnt > 0) f = i;
        if(n % i == 0){
            m++;
            cnt--;
        }
    }
    return res(f, m);
}

int main(){
    int n;
    cin >> n;
    cout << res(n, 0) + 1;
}