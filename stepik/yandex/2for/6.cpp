#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n][n];
    for(int i = 0; i < n; ++i){
        for(int j = 0 ; j < n; ++j){
            cin >> a[i][j];
        }
    }
    int k;
    cin >> k;
    for(int i = 0; i < n; ++i){
        for(int j = 0 ; j < n; ++j){
            if(i == j){
                if(k <= 0 && i + k > -1)
                    cout << a[i+k][j] << " ";   
                else if(k > 0 && i + k < n)
                    cout << a[i+k][j] << " ";
            }
        }
    }
}