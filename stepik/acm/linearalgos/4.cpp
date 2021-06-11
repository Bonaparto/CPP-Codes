#include <iostream>
using namespace std;
int main(){
    int n, q; cin >> n >> q;
    int a[n]; long long sumv[n];
    sumv[0] = 0;
    for(int i = 1; i <= n; ++i){
        cin >> a[i];
        sumv[i] = sumv[i-1] + a[i];
    }
    for(int i = 0; i < q; ++i){
        int l, r; cin >> l >> r;
        cout << sumv[r] - sumv[l-1] << endl;
    }
}