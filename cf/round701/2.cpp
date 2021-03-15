#include <iostream>
#include <cmath>
using namespace std;

int a[100005], b[100005], k;

// void solve(int L, int R){
//     int cnt = a[L-1] - 1;
//     for(int i = L-1; i < R-1; ++i){
//         cnt += 2*(abs(a[i+1] - a[i] - 1));
//     }
//     cout << cnt + k - a[R-1] << endl;
// }


int main(){
    ios_base::sync_with_stdio();
    cin.tie(0);
    int n, q;
    cin >> n >> q >> k;
    cin >> a[0];
    b[0] = a[0] - 1;
    for(int i = 1; i < n; ++i){
        cin >> a[i];
        b[i] = b[i-1] + a[i] - a[i-1] - 1; 
    }
    for(int i = 0; i < q; ++i){
        int x, y; cin >> x >> y;
        cout << a[x-1] - 1 + 2 * (b[y-1] - b[x-1]) + k - a[y-1] << endl;
    }
}
