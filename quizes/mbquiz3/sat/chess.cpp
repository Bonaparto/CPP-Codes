#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    char a[8][8];
    for(int i = 0; i < 8; ++i){
        for(int j = 0; j < 8; ++j){
            a[i][j] = '0';
        }
    }
    for(int i = 0; i < n; ++i){
        char x, y;
        cin >> x >> y;
        a[x - 65][y - 49] = '*';
    }
    for(int i = 0; i < 8; ++i){
        for(int j = 0; j < 8; ++j){
            cout << a[i][j];
        }
        cout << endl;
    }
}