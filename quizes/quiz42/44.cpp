#include <bits/stdc++.h>
using namespace std;

int n, m, cnt = 0;
int a[10][10];

void types(int c, int b, int x, int y){
    if(a[c][b] == 1 && c < x && b < y){
        a[c][b] = 2;
        types(c+1,b,x,y);
        types(c-1,b,x,y);
        types(c,b+1,x,y);
        types(c,b-1,x,y);
    }
}


int main(){
    int n, m, cnt = 0;
    cin >> n >> m;
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
            if(a[i][j] == 1){
                types(i, j, n , m);
                cnt++;
            }
        }
    }
    if(cnt == 0) cout << "nothing is left";
    else cout << cnt;   
}