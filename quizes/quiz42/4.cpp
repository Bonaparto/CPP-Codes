#include <bits/stdc++.h>
using namespace std;



int main(){
    int n, m, cnt = 0;
    cin >> n >> m;
    int a[n][m];
    char b[n][m];
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            cin >> b[i][j];
            if(b[i][j] == '1') a[i][j] = 1;
            else a[i][j] = 0;
        }
    }
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            bool n = 0;
            if(a[i][j] == 0 || a[i][j] == 2) continue;
            if(a[i+1][j] == 2 && i + 1 < n){
                n = 1;
            }
            if(a[i-1][j] == 2 && i - 1 > -1){
                n = 1;
            }
            if(a[i][j+1] == 2 && j + 1 < m ){
                n = 1;
            }
            if(a[i][j-1] == 2 && j - 1 > -1){
                n = 1;
            }
            if(a[i][j] == 1) a[i][j] = 2;
            if(a[i+1][j] == 1 && i + 1 < n){
                a[i+1][j] = 2;
            }
            if(a[i-1][j] == 1 && i - 1 > -1){
                a[i-1][j] = 2;
            }
            if(a[i][j+1] == 1 && j + 1 < m ){
                a[i][j+1] = 2;
            }
            if(a[i][j-1] == 1 && j - 1 > -1){
                a[i][j-1] = 2;
            }
            if(n == 0) cnt++;
        }
    }
    if(cnt == 0) cout << "nothing is left";
    else cout << cnt;
}