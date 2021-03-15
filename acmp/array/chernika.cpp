#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; ++i) cin >> a[i];
    int max = a[0] + a[1] + a[2];
    for(int i = 2; i < n; ++i){
        if(i + 1 < n && a[i] + a[i-1] + a[i+1] > max) max = a[i] + a[i-1] + a[i+1];
    }
    if(a[0] + a[n-1] + a[n-2] > max) max = a[0] + a[n-1] + a[n-2];
    if(a[0] + a[1] + a[n-1] > max) max = a[0] + a[1] + a[n-1];
    cout << max;
}