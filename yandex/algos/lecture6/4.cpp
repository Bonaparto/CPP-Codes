#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    long double n, a, b, w, h;
    cin >> n >> a >> b >> w >> h;
    long double r = max(w, h) * n, ans = 0, l = 0;
    while(l < r)
    {
        long double m = floor((l + r) / 2);
        if((floor(w / (b + (2 * m))) * floor(h / (a + (2 * m))) >= n) || (floor(w / (a + (2 * m))) * floor(h / (b + (2 * m))) >= n))
        {
            if(ans < m) ans = m;
            l = m + 1; 
        }
        else r = m;
    }
    cout << fixed << setprecision(0) << ans;
}