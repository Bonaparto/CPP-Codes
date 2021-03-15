#include <bits/stdc++.h>
using namespace std;



int main(){
    int n;
    cin >> n;
    if(n == 1){
        cout << " * " << endl;
        cout << "* *";
        return 0;
    }
    for(int i = 0; i < 2*n; ++i){
        for(int j = 0; j < 4*n - 1; ++j){
            if((i == n - 1 && (j >= ((4 * n - 1) / 2) - n + 1 && j <= ((4 * n - 1) / 2) + n - 1) || j - i == (4 * n - 1) / 2 || j + i == (4 * n - 1) / 2)
            || ((i == 2 * n - 1) && ((j >= 0 && j < 2 * n - 1) || (j > 2 * n - 1 && j <= 4 * n- 1))) || (i > n && ((i + j == 4*n - 1) || 
            (j == ((4 * n - 1) / 2) - 2*n + i)))) cout << '*';
            else cout << ' ';
        }
        cout << endl;
    }
}