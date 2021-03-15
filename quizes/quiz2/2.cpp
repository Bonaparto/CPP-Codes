#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n,f = 0;
    cin >> n;
    int a[n][n];
    for(int i = 0; i < n; ++i){
        for(int j = 0 ; j < n; ++j){
            cin >> a[i][j];
        }
    }
    for(int i = 0; i < n; ++i){
        for(int j = 0 ; j < n; ++j){
            cout << a[0+f][n-f] << " ";
            f++;
        }
        cout << endl;
    }
}