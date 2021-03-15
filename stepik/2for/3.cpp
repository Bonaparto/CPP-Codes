#include <iostream>
using namespace std;
int main(){
    int n,m;
    cin >> n;
    int a[n][n];
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            if(j == i) a[i][j] = 0;
            else a[i][j] = 1;
        }
    }
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            if(a[i][j] == 0) cout << "0" << " ";
            else{
                for(int l = 1; l < n; ++l){            
                    if(i + l == j || j + l == i)
                        cout << l << " ";
                }
            }
        } cout << endl;
    }   
}