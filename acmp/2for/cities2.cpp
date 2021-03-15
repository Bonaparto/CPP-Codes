#include <iostream>
using namespace std;
int main(){
    int n, cnt = 0;
    cin >> n;
    char a[n][n];
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            cin >> a[i][j];
            if(a[i][j] == 'C') cnt++;
        }
    }   
    bool f = 0;
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            if(a[i][j] == 'C' && !f){
                cnt -= 2;
                a[i][j] = '1';
            }
            if(a[i][j] == 'D' && !f) a[i][j] = '1';
            if(cnt == 0) f = 1;
            if(a[i][j] == 'C' && f) a[i][j] = '2';
            if(a[i][j] == 'D' && f) a[i][j] = '2';
            cout << a[i][j];
        }
        cout << endl;
    }
}