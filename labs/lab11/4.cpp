#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    int a[n][m];
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            cin >> a[i][j];
        }
    }
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            if(a[i][j] == 0){
                if(a[i+1][j] == 0 && a[i][j+1] == 0 && a[i+1][j+1] == 0 && j + 1 < m && i + 1 < n){
                    cout << "NO";
                    return 0;
                }
                if(a[i-1][j] == 0 && a[i][j+1] == 0 && a[i-1][j+1] == 0 && j + 1 < m && i - 1 > -1){
                    cout << "NO";
                    return 0;
                }
                if(a[i+1][j] == 0 && a[i][j-1] == 0 && a[i+1][j-1] == 0 && j - 1 > -1 && i + 1 < n){
                    cout << "NO";
                    return 0;
                }
                if(a[i-1][j] == 0 && a[i][j-1] == 0 && a[i-1][j-1] == 0 && j - 1 > -1 && i - 1 > -1){
                    cout << "NO";
                    return 0;
                }
            }
        }
    }
    cout << "YES";
}