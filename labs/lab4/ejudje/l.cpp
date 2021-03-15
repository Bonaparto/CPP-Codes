#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n][n];
    int dx[] = {0, 1, 0, -1};
    int dy[] = {1, 0, -1, 0};
    int x = 0, y = -1;
    int cur = 0, t = 1;
    for(int i = 0; i < 2*n - 1; ++i){
        for(int j = 0; j < n - (i + 1) / 2; ++j){
            x += dx[cur];
            y += dy[cur];
            a[x][y] = t++;
        }
        cur += 1;
        cur %= 4;
    }
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }
}