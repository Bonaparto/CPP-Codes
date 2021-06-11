#include <bits/stdc++.h>
using namespace std;
int main(){
    long double x, max1 = -1, max2 = -1, min1 = 123124125, negmax1 = 0, negmax2 = 0, negmin = -123124125;
    while(cin >> x)
    {
        if(x >= 0 && x >= max1)
        {
            max2 = max1;
            max1 = x;
        }
        else if(x >= 0 && x > max2) max2 = x;
        if(x < 0 && x <= negmax1)
        {
            negmax2 = negmax1;
            negmax1 = x;
        }
        else if(x < 0 && x < negmax2) negmax2 = x;
        if(x >= 0 && x < min1) min1 = x;
        if(x < 0 && x > negmin) negmin = x;
    }
    long double a = -123123123, b = min1 * negmin, c = -123123123, ans;
    if(negmax1 != 0 && negmax2 != 0) c = negmax1 * negmax2;
    if(max1 != -1 && max2 != -1) a = max1 * max2;
    if(a >= b && a >= c) cout << min(max1, max2) << " " << max(max1, max2);
    else if(b > a && b > c) cout << min(min1, negmin) << " " << max(min1, negmin);
    else cout << min(negmax1, negmax2) << " " << max(negmax1, negmax2);
}