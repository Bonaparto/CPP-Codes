#include <iostream>
using namespace std;

char a[100][100], r[100][100];
pair <int, int> b[8] = {{-1,-1}, {-1, 0}, {-1, 1}, {0, -1}, {0, 1}, {1, -1}, {1, 0}, {1, 1}};
int n, m;

void life(int x, int y){
    int cnt = 0, l, f;
    for(int i = 0; i < 8; ++i){
        l = (x + b[i].first), f = (y + b[i].second);
        if(x + b[i].first < 0) l = n - 1;
        if(x + b[i].first > n - 1) l = 0;
        if(y + b[i].second < 0) f = m - 1;
        if(y + b[i].second > m - 1) f = 0;
        if(a[x][y] == '.'){
            if(a[l][f] == '*') cnt++;
        }
        if(a[x][y] == '*'){
            if(a[l][f] == '*') cnt++;
        }
        if(cnt > 3) break;
    }
    if(a[x][y] == '.' && cnt == 3) r[x][y] = '*'; 
    if(a[x][y] == '*' && (cnt > 3 || cnt < 2)) r[x][y] = '.';
}

int main(){
    int k;
    cin >> n >> m >> k;
    for(int i = 0; i < n; ++i)
        for(int j = 0; j < m; ++j){
            cin >> a[i][j];
            r[i][j] = a[i][j]; 
        }

    while(k--){
        for(int i = 0; i < n; ++i){
            for(int j = 0; j < m; ++j){
                life(i, j);
            }
        }
        for(int i = 0; i < n; ++i){
            for(int j = 0; j < m; ++j){
                a[i][j] = r[i][j];
            }
        }
    }
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            cout << a[i][j];
        }
        cout << endl;
    }
}