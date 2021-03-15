#include <iostream>
using namespace std;
int main(){
    int n, m, k;
    cin >> n >> m >> k;
    char a[n][m];
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            a[i][j] = '.';
        }
    }
    for(int i = 0; i < k; ++i){
        int x, y;
        cin >> x >> y;
        a[x-1][y-1] = '*';
    }
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            if(a[i][j] == '*') continue;
            int cnt = 0;
            if(i - 1 >= 0 && a[i-1][j] == '*') cnt++;
            if(i + 1 < n && a[i+1][j] == '*') cnt++;
            if(j + 1 < m && a[i][j+1] == '*') cnt++;
            if(j - 1 >= 0 && a[i][j-1] == '*') cnt++;
            if(i + 1 < n && j - 1 >= 0 && a[i+1][j-1] == '*') cnt++;
            if(i + 1 < n && j + 1 < m && a[i+1][j+1] == '*') cnt++;
            if(i - 1 >= 0 && j + 1 < m && a[i-1][j+1] == '*') cnt++;
            if(i - 1 >= 0 && j - 1 >= 0 && a[i-1][j-1] == '*') cnt++;
            if(cnt == 0) continue;
            a[i][j] = char(cnt + 48);
        }
    }
    for(int i = 0; i < n; ++i){ 
        for(int j = 0; j < m; ++j){
            cout << a[i][j]; 
        }
        cout << endl;
    }
}