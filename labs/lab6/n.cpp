#include <iostream>
using namespace std;

void op(int n, int m, int a[][]){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; ++j){
            cout << a[j][i] << " ";
        }
        cout << endl;
    }
}

int main(){
    int n,m;
    cin >> n >> m;
    int a[n][m];
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            cin >> a[i][j];
        }
    }
    op(n,m,a);
}