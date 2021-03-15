#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n][n];
    for(int i = 0; i < n; ++i){
        a[i][0] = i;
        a[0][i] = i;
        a[n-1][i] = n - 1 + i;
        a[i][n-1] = n - 1 + i;
    }
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            cout.width(4);
            if(i == 0 || j == 0 || i == n - 1 || j == n - 1)
            cout << a[i][j];
            else cout << ' ';
        }
        cout << endl;
    }
}