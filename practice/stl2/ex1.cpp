#include <iostream>
#include <queue> //queue
using namespace std;

//how to add in queue;

void one(){
    queue <int> q;
    
    q.push(12);
    q.push(51);
    q.push(3);
    q.push(1);
    q.push(7);
    
    while(!q.empty()){
        cout << q.front() << endl;
        q.pop();
    }
}


// queue in massive(first in, first out);

int a[100][100];
queue <pair<int, int> > q;
int n, m;

void twoo(int row, int column, int value){
    if(row < n && column < m && a[row][column] == -1){
        a[row][column] = value;
        q.push(make_pair(row, column));
    }
}

void two(){
    cin >> n >> m;
    int a[n][m];
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            a[i][j] = -1;
        }
    }
    
    int r,c;
    cin >> r >> c;
    r--; c--;

    q.push(make_pair(r, c));
    a[r][c] = 0;

    while(!q.empty()){
        pair<int, int> cr = q.front();
        twoo(cr.first + 1, cr.second, a[cr.first][cr.second] + 1);
        twoo(cr.first - 1, cr.second, a[cr.first][cr.second] + 1);
        twoo(cr.first, cr.second + 1, a[cr.first][cr.second] + 1);
        twoo(cr.first, cr.second - 1, a[cr.first][cr.second] + 1);
        q.pop();
    }

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

//stack(first in, last out);



int main(){
   two();
}