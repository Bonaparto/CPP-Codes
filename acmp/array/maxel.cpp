#include <iostream>
using namespace std;
int main(){
    int n, l, r;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; ++i) cin >> a[i];
    cin >> l >> r;
    int x = l - 1;
    for(int i = l - 1; i <= r - 1; ++i)
        if(a[x] < a[i]) x = i;
    cout << a[x] << " " << x + 1;
}