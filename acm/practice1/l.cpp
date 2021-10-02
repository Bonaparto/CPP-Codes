#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    char a[n][m];
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < m; ++j) {
            cin >> a[i][j];
        }
    }
    int max = 0, cnt = 0;
    for(int i = 0; i < n; ++i) {
        if(i % 2 == 0) { 
            for(int j = 0; j < m; ++j) {
                if(a[i][j] == 'L') cnt = 0;
                if(a[i][j] == '.') cnt++;
                if(cnt > max) {
                    max = cnt;
                }
            }
        }
        else {
            for(int j = m - 1; j >= 0; --j) {
                if(a[i][j] == 'L') cnt = 0;
                if(a[i][j] == '.') cnt++;
                if(cnt > max) {
                    max = cnt;
                }
            }
        }
    }
    cout << max;
}   
