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
        for(int i = l; i < n; ++i){
            if (a[l] == a[i] && l != i)
            cnt++;
        }
        ++l;
    }
    cout << cnt;
}