#include <iostream>
using namespace std;
int main(){
    int n,max = -1000000000,x,y;
    cin >> n;
    int a[n][n];
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            cin >> a[i][j];
        }
    }
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            if(a[i][j] > max){
            max = a[i][j];
            x = i; y =j;
            }
        }
    } cout << x + 1 << " " << y + 1;
} 