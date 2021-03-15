#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n][n];
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            cin >> a[i][j];
        }
    }
    for(int i = n - 1; i >= 0; --i){
        for(int j = 0; j < n; ++j){
            if(i + j == n) break;
            cout << a[j][i+j] << " ";
        }
        cout << endl;
    }
    for(int i = 1; i < n; ++i){
        for(int j = 0; j < n; ++j){
            if(i + j == n) break;
            cout << a[i+j][j] << " ";
        }
        cout << endl;
    }
}