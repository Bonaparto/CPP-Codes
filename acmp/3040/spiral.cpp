#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    if(n == 1){ cout << n; return 0;}
    int a[n][n], l = n * n, cnt = 1, f = 0;
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            a[i][j] = 1;
        }
    }
    while(n * n >= cnt){
        for(int i = f; i < n; ++i){
            if(a[f][i] == 1){
                a[f][i] = cnt;
                cnt++;
            }
        }
        for(int i = f; i < n; ++i){
            if(a[i][n-f-1] == 1){
                a[i][n-f-1] = cnt;
                cnt++;
            }
        }
        for(int i = f; i < n; ++i){
            if(a[n-f-1][n-i-1] == 1){
                a[n-f-1][n-i-1] = cnt;
                cnt++;
            }
        }
        for(int i = f; i < n; ++i){
            if(a[n-i-1][f] == 1 && (n-i-1 + f) != 0){
                a[n-i-1][f] = cnt;
                cnt++;
            }
        }
        f++;
    }
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            cout.width(6);
            cout << a[i][j];
        }
        cout << endl;
    }
}