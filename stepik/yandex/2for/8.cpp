#include <iostream>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    int a[n][m];
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            cin >> a[i][j];
        }
    }
    int l;  cin >> l;
    for(int i = 0; i < n; ++i){
        int cnt = 0;
        for(int j = 0; j < m; ++j){
            if(a[i][j] == 0) cnt++;
            else cnt = 0;
            if(cnt >= l){
                cout << i + 1;
                return 0;
            }  
        }     
    }
    cout << "0";
}