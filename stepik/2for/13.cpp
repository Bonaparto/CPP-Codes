#include <iostream>
using namespace std;
int main(){
    int n,m,t = 1;
    cin >> n >> m;
    int a[n][m];
    for(int f = 0; f < m + n - 1; ++f){
        for(int i = 0; i < n; ++i){
            for(int j = 0; j < m; ++j){
                if(i == f - j || j == f - i){
                a[i][j] = t;
                t++;
                }
            }
        }
    }
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            cout.width(4);
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}