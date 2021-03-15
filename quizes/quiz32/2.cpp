#include <bits/stdc++.h>
using namespace std;

char a[8][8];

void Table(char x, int y){
    int b = x - 65;
    a[b][y-1] = '*';
}

int main(){
    int n;
    cin >> n;
    for(int i = 0; i < 8; ++i){
        for(int j = 0; j < 8; ++j){
            a[i][j] = '0';
        }
    }
    for(int i = 0; i < n; ++i){
        char x; int y;
        cin >> x >> y;
        Table(x, y);
    }
    for(int i = 0; i < 8; ++i){
        for(int j = 0; j < 8; ++j){
            cout << a[i][j];
        }
        cout << endl;
    }
}