#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    int m = n;
    for (int i = 0; i < n; ++i)
    {
        int x, max = -1000000000;
        for (int j = 0; j < m; ++j)
        {
            if (a[j] > max)
            {
                max = a[j];
                x = j;
            }
            if (j == m - 1 && j != x)
            {
                swap(a[j], a[x]);
            }
        }
        m--;
        cout << x << " ";
    }
}