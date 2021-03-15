#include <bits/stdc++.h>
using namespace std;

char a[10][10];
queue < pair <int, int> > q;
int cnt = 0, x, y, n;

void Scanner(pair <int, int> cr,int row, int column){
    if(q.empty()){
        cout << cnt;
        exit(0);
    }
    if(row < n && column < n && row >= 0 && column >= 0 && a[row][column] == '.'){
        a[row][column] = '*';
        q.push(make_pair(row, column));
        pair <int, int> cr = q.front();
        cnt++;
        Scanner(cr, cr.first - 1, cr.second);
        Scanner(cr, cr.first + 1, cr.second);
        Scanner(cr, cr.first, cr.second + 1);
        Scanner(cr, cr.first, cr.second - 1);
        q.pop();
    } 
}

int main(){
    cin >> n >> x >> y;
    q.push(make_pair(x, y));
    for(int i = 1; i <= n; ++i){
        for(int j = 1; j <= n; ++j){
            cin >> a[i][j];
        }
    }
    pair <int, int> cr = q.front();    
    Scanner(cr, cr.first - 1, cr.second);
    Scanner(cr, cr.first + 1, cr.second);
    Scanner(cr, cr.first, cr.second + 1);
    Scanner(cr, cr.first, cr.second - 1);
    q.pop();   
    cout << cnt;
}