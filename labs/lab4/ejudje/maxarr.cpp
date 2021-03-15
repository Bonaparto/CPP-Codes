#include <iostream>
using namespace std;
int main(){
    int n, max = -2147483648;
    cin >> n;
    int a[n][n];
    for(int i = 0; i < n; ++i)
        for(int j = 0; j < n; ++j)
            cin >> a[i][j];
    
    for(int i = 0; i < n; ++i)
        for(int j = 0; j < n; ++j)
            if(a[i][j] > max)
            max = a[i][j];
    cout << max;
}
