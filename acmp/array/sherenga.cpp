#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; ++i) cin >> a[i];
    int x; cin >> x;
    for(int i = 1; i < n; ++i){
        if(a[i-1] >= x && a[i] < x){ cout << i + 1;
        return 0;}  
    }
    cout << (x > a[0] ? 1 : n + 1);
}