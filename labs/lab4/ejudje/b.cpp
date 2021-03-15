#include <iostream>
using namespace std;
int main(){
    int n, max = -214748364, max2 = 0;
    cin >> n;
    int a[n][n];
    for(int i = 0; i < n; ++i)
        for(int j = 0; j < n; ++j)
            cin >> a[i][j];
    
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            if(a[i][j] > max){
            max2 = max;
            max = a[i][j];
            }   
            else if(a[i][j] > max2 && a[i][j] != max)
            max2 = a[i][j];   
        }
        if(max2 == max || max2 == -214748364) max2 = 0;
    }
    cout << max2;
}