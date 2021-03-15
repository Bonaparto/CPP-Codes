#include <iostream>
using namespace std;
int main(){
    int n,m,max = -214748364,x,y;
    cin >> n >> m;
    int a[n][m];
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            cin >> a[i][j];
        }
    }
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            if(max < a[i][j]){ 
            max = a[i][j];
            x = i; y = j;
            }
        }
    }
    cout << x << " " << y;
}