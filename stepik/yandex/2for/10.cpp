#include <iostream>
using namespace std;
int main(){
    int n,m,t;
    cin >> n >> m;
    int a[n][m];
    a[0][0] = 1;
    for(int i = 0; i < n; ++i){
        for(int j = 1; j <= m; ++j){
            a[i][j] = a[i][j-1] + 1;
        }
    }
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            if(i % 2 == 0){
            cout << a[i][j] << "\t";
            }
            else{
            cout << a[i][m-j-1] << "\t";
            }
        }
    cout << endl;
    }
}
