#include <bits/stdc++.h>
using namespace std;



int main(){
    int n, m;
    cin >> n;
    long long a[n];
    set <long long> s;
    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }
    cin >> m;
    long long b[m];
    for(int i = 0; i < m; ++i){
        cin >> b[i];
    }
    for(int i = 0; i < m; ++i){
        for(int j = 0; j < n; ++j){
            for(int l = j + 1; l < n; ++l){
                s.insert(a[l] + a[j]);
            }
        }
    }
    for(int i = 0; i < m; ++i){
        if(s.find(b[i]) != s.end()) 
        cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}