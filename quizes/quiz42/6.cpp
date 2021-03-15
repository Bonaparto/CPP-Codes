#include <bits/stdc++.h>
using namespace std;



int main(){
    int n, m;
    cin >> n;
    int b[n];
    for(int i = 0; i < n; ++i){
        cin >> b[i];
    }
    cin >> m;
    int a[m];
    for(int i = 0; i < m; ++i){
        cin >> a[i];
    }
    int c[n+m];
    for(int i = 0; i < n; ++i){
        c[i] = b[i];
    }
    for(int i = 0; i < m + n; ++i){
        c[i+n] = a[i];
    }
    sort(c, c+n+m);
    for(int i = 0; i < n + m; ++i){
        cout << c[i] << " ";
    }
}