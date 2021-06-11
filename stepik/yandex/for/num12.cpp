#include <iostream>
using namespace std;
int main(){
    int n, l = 0,cnt = 0;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }
    while(l < n){
        for(int i = 0; i < n; ++i){
            if(a[l] == a[i] && i != l){
                cnt++; break;
            }
        }
        if(cnt == 0){
            cout << a[l] << " ";
        }
        l++; cnt = 0;
    }
}