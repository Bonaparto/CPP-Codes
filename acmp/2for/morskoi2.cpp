#include <iostream>
using namespace std;
int main(){
    int n, m, cnt = 0;
    cin >> n >> m;
    char a[n][m];
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            cin >> a[i][j];
        }
    }
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            if(a[i][j] != '*'){
                if((i - 1 > -1 && a[i-1][j] != '.') 
                || (j - 1 > -1 && a[i][j-1] != '.')
                || (i + 1 < n && a[i+1][j] != '.') 
                || (j + 1 < m && a[i][j+1] != '.')) 
                    continue;
                cnt++;
            }
        }
    }
    cout << cnt;
}