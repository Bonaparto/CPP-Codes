#include <iostream>
using namespace std;
int main(){
    int n,m;
    cin >> n;
    int a[n][n];
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            if(j == i || j + i == n - 1||
            j == n / 2 || i == n / 2)
                a[i][j] = 1;
            else a[i][j] = 0;
        }
    }
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            if(a[i][j] == 1) cout << "*" << " ";
            else cout << "." << " ";
        } cout << endl;
    } 
}