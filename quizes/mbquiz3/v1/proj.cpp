#include <iostream>
using namespace std;

int area(int n){
    int a[n][n];
    int sum = 0;
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            cin >> a[i][j];
        }
    }
    for(int i = 0; i < n; ++i){
        int max = 0;
        for(int j = 0; j < n; ++j){
            if(a[i][j] > max){
                max = a[i][j];
            }
            if(a[i][j] != 0) ++sum;
        }
        sum += max;
    }
    for(int i = 0; i < n; ++i){
        int max = 0;
        for(int j = 0; j < n; ++j){
            if(a[j][i] > max){
                max = a[j][i];
            }
        }
        sum += max;
    }
    return sum;
}   

int main(){
    int n;
    cin >> n;
    cout << area(n);
}