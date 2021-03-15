#include <iostream>
using namespace std;
int main(){
    int n,m;
    cin >> n;
    int a[n][n];
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            cin >> a[i][j];
        }
    }
    for(int i = 0; i < n; ++i){
        for(int j = 1; j < n; ++j){
            if(a[i][j] != a[j][i]){
                cout << "NO";
                return 0; // полезная фича;
            }
        }
    }
    cout << "YES";    
}      