#include <iostream>
#include <algorithm>
using namespace std;

const int MAXN = 10000500;
int n;
long long a[MAXN], x = 0;

int main(){
    cin >> n;
    for(int i = 0; i < n; ++i) cin >> a[i];
    long long sum = 0, ans = a[0];
    for(int i = 0; i < n; ++i){
        sum += a[i];
        ans = max(ans, sum);
        sum = max(sum, max(a[i], x));
    }
    cout << ans;
}