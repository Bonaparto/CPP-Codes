#include <iostream>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    int a[n][m];
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            cin >> a[i][j];
        }
    }
    int j1,j2;
    cin >> j1 >> j2;
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            if(j == j1)
                cout << a[i][j2] << " ";
            else if(j == j2) 
                cout << a[i][j1] << " ";
            else 
                cout << a[i][j] << " ";
        } cout << endl;   
    }
}