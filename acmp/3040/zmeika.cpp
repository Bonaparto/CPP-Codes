#include <iostream>
using namespace std;
int main(){
    int n, l = 2;
    cin >> n;
    if(n == 1){
        cout << 1;
        return 0;
    }
    int a[n][n];
    a[0][0] = 1;
    for(int i = 1; i < n; ++i){
        for(int j = 0; j < n; ++j){
            if(i % 2 == 0){
                if(i - j < 0) break;
                a[j][i-j] = l;
                l++;
            }
            else{
                if(i - j < 0) break;
                a[i-j][j] = l;
                l++;
            }
        }
    }
    if(n % 2 == 0){
        for(int i = 1; i < n; ++i){
            for(int j = 0; j < n; ++j){
                if(i % 2 == 0){
                    if(n - 1 - j < 0 || i + j >= n) break;
                    a[n-1-j][i+j] = l;
                    l++;
                }
                else{
                    if(n - 1 - j < 0 || i + j >= n)  break;
                    a[i+j][n-1-j] = l;
                    l++;
                }
            }
        }
    }
    else{
        for(int i = 1; i < n; ++i){
            for(int j = 0; j < n; ++j){
                if(i % 2 != 0){
                    if(n - 1 - j < 0 || i + j >= n) break;
                    a[n-1-j][i+j] = l;
                    l++;
                }
                else{
                    if(n - 1 - j < 0 || i + j >= n)  break;
                    a[i+j][n-1-j] = l;
                    l++;
                }
            }
        }
    }
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            cout.width(10);
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}