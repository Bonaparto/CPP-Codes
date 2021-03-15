#include <iostream>
using namespace std;
int main(){
    int n,m,t=0;
    cin >> n >> m;
    int a[n][m]; a[0][0] = 1;
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            if((i + j) % 2 != 0)
            a[i][j] = 0;
            else{
                a[i][j] = 1 + t;
                t++;
            }
        }
    }
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            cout.width(4);
            cout << a[i][j];
            }
        cout << endl;
    }
}