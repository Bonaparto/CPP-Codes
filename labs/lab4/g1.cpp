#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n][n];
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            a[i][j] = i + 1;
            }
        }
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            if(i + j != n - 1) cout << ".";
            else cout << a[i][j]; 
        }
    cout << endl;     
    }
}     