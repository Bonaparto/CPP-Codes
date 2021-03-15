#include <iostream>
using namespace std;
int main(){
    int n,m,min =10000000,sum = 0,sub = 0;
    cin >> n >> m;
    int a[n][m];
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            cin >> a[i][j];
        }
    }
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            sum += a[i][j];
            }
        if(sum < min){
            min = sum;
            sub = i + 1;
        }
        sum = 0;
    }
    cout << sub; 
} 