#include <bits/stdc++.h>
using namespace std;

char a[10][10];
queue < pair <int, int> > q;
int cnt = 0, x, y, n;

void Scanner(int row, int column){
    if(row < n && column < n && row >= 0 && column >= 0 && a[row][column] == '.'){
        a[row][column] = '*';
        q.push(make_pair(row, column));
        cnt++;
    } 
}

int main(){
    cin >> n >> y >> x;
    q.push(make_pair(x, y));
    for(int i = 1; i <= n; ++i){
        for(int j = 1; j <= n; ++j){
            cin >> a[i][j];
        }
    }

    while(!q.empty()){
        pair <int, int> cr = q.front();    
        Scanner(cr.first - 1, cr.second);
        Scanner(cr.first + 1, cr.second);
        Scanner(cr.first, cr.second + 1);
        Scanner(cr.first, cr.second - 1);
        Scanner(cr.first, cr.second);
        q.pop();
    }
    cout << cnt;
}