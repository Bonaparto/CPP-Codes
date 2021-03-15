#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[4][4];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i + j == n - 1) a[i][j] = 1;
            else if(i + j < n - 1) a[i][j] = 0;
            else a[i][j] = 2;  
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; i < n; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}