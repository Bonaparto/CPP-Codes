#include <iostream>
using namespace std;
int main(){
    int n, l; double x, ans;
    cin >> n >> x;
    double a[n];
    if(n == 0){
        cin >> ans;
        cout << ans;
        return 0;
    } 
    for(int i = 0; i <= n; ++i){
        double z; cin >> z;
        a[i] = z;
    } 
    l = n; ans = a[0] * x + a[1]; n--;
    while(n--) ans = (ans * x + a[l - n]);
    cout << ans;
}