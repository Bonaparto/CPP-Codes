#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    long double x, max1 = -1, max2 = -1, max3 = -1, negmax1 = 1, negmax2 = 1, negmin1 = -123123123, negmin2 = -123123123, negmin3 = -123123123, posmin1 = 123123123, posmin2 = 123123123;
    while(cin >> x)
    {
        if(x >= 0 && x >= max1)
        {
            max3 = max2;
            max2 = max1;
            max1 = x;
        }
        else if(x >= 0 && x >= max2)
        {
            max3 = max2;
            max2 = x;
        }
        else if(x >= 0 && x > max3) max3 = x;
        if(x < 0 && x < negmax1)
        {
            negmax2 = negmax1;
            negmax1 = x;
        }
        else if(x < 0 && x < negmax2) negmax2 = x;
        if(x < 0 && negmin1 < x)
        {
            negmin3 = negmin2;
            negmin2 = negmin1;
            negmin1 = x;
        } 
        else if(x < 0 && negmin2 < x)
        {
            negmin3 = negmin2;
            negmin2 = x;
        }
        else if(x < 0 && negmin3 < x) negmin3 = x;
        if(x >= 0 && posmin1 > x){
            posmin2 = posmin1;
            posmin1 = x;
        }
        else if(x >= 0 && posmin2 > x) posmin2 = x;

    }
    long double a, b, c, d;
    if(max1 != -1 && max2 != -1 && max3 != -1) a = max1 * max2 * max3;
    else a = -1e20;
    if(negmax1 != 1 && negmax2 != 1 && max1 != -1) b = max1 * negmax2 * negmax1;
    else b = -1e20;
    if(negmin1 != -123123123 && posmin1 != 123123123 && posmin2 != 123123123) c = negmin1 * posmin1 * posmin2;
    else c = -1e20;
    if(negmin1 != -123123123 && negmin2 != -123123123 && negmin3 != -123123123) d = negmin1 * negmin2 * negmin3;
    else d = -1e20;
    long double ans = max(a, max(b, max(c, d)));
    cout << setprecision(0) << fixed;
    if(ans == a)
    {
        cout << max1 << " " << max2 << " " << max3;
    }
    else if(ans == b)
    {
        cout << max1 << " " << negmax2 << " " << negmax1;
    }
    else if(ans == c)
    {
        cout << posmin2 << " " << posmin1 << " " << negmin1;
    }
    else if(ans == d)
    {   
        cout << negmin1 << " " << negmin2 << " " << negmin3;
    }
}