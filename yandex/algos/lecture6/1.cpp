#include <iostream>
using namespace std;

int a[100001], n;

bool binarysearch(int x)
{
    int l = 0, r = n - 1;
    //cout << r << endl;
    while(l < r)
    {
        int m = (l + r) / 2;
        //cout << m << endl;
        if(a[m] == x) return 1;
        else if(a[m] > x) r = m;
        else l = m + 1;
    }
    //cout << a[(l+r) / 2] << " " << x << " " << l << " " << r << endl;
    if(a[(l + r) / 2] != x) return 0;
    else return 1;
}

int main()
{
    int m;
    cin >> n >> m;
    for(int i = 0; i < n; ++i) cin >> a[i];
    for(int i = 0; i < m; ++i)
    {
        int x; cin >> x;
        cout << (binarysearch(x)?"YES":"NO") << endl;
    }
}