#include <iostream>
using namespace std;
int main(){
    int a, b, n, m, mina, minb, maxa, maxb;
    cin >> a >> b >> n >> m;
    mina = (n - 1) * a + n, minb = (m - 1) * b + m;
    maxa = a * (n + 1) + n, maxb = b * (m + 1) + m;
    if(mina > maxb || minb > maxa) cout << -1;
    else cout << max(mina, minb) << " " << min(maxa, maxb);
}
