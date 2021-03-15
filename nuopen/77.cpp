#include <iostream>
#include <algorithm>
using namespace std;

int n, cnt = 0;
string m;

int rec(int l, int cnt){
    if(n == l) return cnt;
    for(int i = 0; i < n; ++i){
        int l = m.find(m[i], i);
        if(i + l <= n){
            if(m[l-i] == m[l] && m[l] == m[i+l])
            cnt++; 
        }
    }
    return rec(l + 1, cnt);
}

int main(){
    cin >> n >> m;
    for(int i = 1; i < n; ++i){
        rec(i, cnt);
    }
    cout << cnt; 
}