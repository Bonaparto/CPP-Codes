#include <iostream>
using namespace std;
int main(){
    int k, m, n;
    cin >> k >> m >> n;
    if(k >= n) cout << m * 2;
    else if(n % k == 0) cout << (n / k) * m * 2;
    else{
        if(n % k <= k / 2) cout << (n  / k) * 2 * m + m;
        else cout << (n / k) * 2 * m + 2 * m;
    }
}