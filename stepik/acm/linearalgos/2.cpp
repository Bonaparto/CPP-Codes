#include <iostream>
using namespace std;
int main(){
    int n, cnt = 0, maxv = 0, ans;
    cin >> n;
    while(n--){
        cnt++;
        int x; cin >> x;
        if(x > maxv){
            ans = cnt;
            maxv = x;
        }
    }
    cout << ans;
}