#include <iostream>
using namespace std;
int main(){
    int n,max = -1000000000,x,y;
    cin >> n;
    int a[n][n];
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            cin >> a[i][j];            
        }
    }
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            if(j == i && a[i][j] > max){
            max = a[i][j];
            x = i + 1; y = j + 1;
            }
        }
    }
    cout << "Maximum element is: " << max <<
     " with coordinates: " << x << ";" << y;
}