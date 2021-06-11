#include <iostream>
#include <algorithm>
using namespace std;

const int MAXN = 10000500;
int n;
int a[MAXN];

int main(){
    cin >> n;
    for(int i = 0; i < n; ++i) cin >> a[i];
    int sum = 0, ans = a[0];
    for(int i = 0; i < n; ++i){
        sum += a[i];
        ans = max(ans, sum);
        sum = max(sum, max(a[i], 0));
    }
    cout << ans;
}