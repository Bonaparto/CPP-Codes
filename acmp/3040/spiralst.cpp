#include <iostream>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    int a[n][m], l = n * m, cnt = 1, f = 0;
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            a[i][j] = 1;
        }
    }
    if(n == 1){
        for(int i = 0; i < m; ++i){
            cout.width(4);
            cout << i + 1; 
        }
        return 0;
    }
    if(m == 1){
        for(int i = 0; i < n; ++i){
            cout.width(4);
            cout << i + 1 << endl; 
        }
        return 0;
    }
    while(n * m >= cnt){
        for(int i = f; i < m; ++i){
            if(a[f][i] == 1){
                a[f][i] = cnt;
                cnt++;
            }
        }
        for(int i = f; i < n; ++i){
            if(a[i][m-f-1] == 1){
                a[i][m-f-1] = cnt;
                cnt++;
            }
        }
        for(int i = f; i < m; ++i){
            if(a[n-f-1][m-i-1] == 1){
                a[n-f-1][m-i-1] = cnt;
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
        for(int j = 0; j < m; ++j){
            cout.width(4);
            cout << a[i][j];
        }
        cout << endl;
    }
}