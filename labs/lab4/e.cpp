#include <iostream>
using namespace std;
int main(){
    int n,r = 0;
    cin >> n;
    int a[n][r];
    for(int i = 0; i < n; ++i){
        r++;
        for(int j = 0; j < r; ++j){
            cout << "[*]" << " ";
        }
        cout << endl;
    } 
} 
