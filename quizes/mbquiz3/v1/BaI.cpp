#include <iostream>
using namespace std;

void mul(int n){
    int a[n][n];
    int b[n][n];
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            cin >> a[i][j];
        }
    }
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            cin >> b[i][j];
        }
    }
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            int sum = 0;
            for(int l = 0; l < n; ++l){
                sum += a[i][l] * b[l][j];     
            }
            cout << sum << " ";
        }
        cout << endl;
    }
}

int main(){
    int n;
    cin >> n;
    mul(n);
}