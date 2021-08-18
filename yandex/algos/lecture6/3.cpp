#include <iostream>
#include <cmath>
using namespace std;

long long binarysearch(long long h, long long w, long long n)
{
    long long l = 0, r = max(w, h) * n, ans = max(w, h) * n; 
    while(l < r)
    {
        long long m = (l + r) / 2;
        if(floor(m / h) * floor(m / w) >= n)
        {
            if(ans > m) ans = m;
            r = m;
        }
        else l = m + 1;
    }
    return ans;
}

int main()
{
    long long h, w, n;
    cin >> h >> w >> n;
    cout << binarysearch(h, w, n);
}