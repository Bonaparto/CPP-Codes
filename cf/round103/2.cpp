#include <iostream>
using namespace std;

void solve(int p, double k){
    long double sum = 0; long long ans = 0;
    for(int i = 0; i < p; ++i){
        double x; cin >> x;
        if(i != 0 && x / sum > k / 100){
            long long L = 1, R = 100 * x; long double mid;
            while(L < R){
                mid = (L + R) / 2;
                if(x / (sum + mid) > k / 100) L = mid + 1;
                else R = mid;
            }
            sum += mid;
            ans += mid;
            while(x / sum < k / 100){
                sum--;
                ans--;
            }
            while(x / sum > k / 100){
                sum++;
                ans++;
            }
        }
        sum += x;
    }
    cout << ans << endl;
}

int main(){
    int n;
    cin >> n;
    while(n--){
        int x, y; cin >> x >> y;
        solve(x, y);
    }
}