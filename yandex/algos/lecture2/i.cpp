#include <iostream>
using namespace std;
int main(){
    int n, m, k;
    cin >> n >> m >> k;
    int a[n][m];
    for(int i = 0; i < n; ++i)
        for(int j = 0; j < m; ++j)
            a[i][j] = 0;
    for(int i = 0; i < k; ++i)
    {
        int x, y; cin >> x >> y;
        a[x-1][y-1] = -9;
        if(x - 1 > 0 && y - 1 > 0)
        {
            a[x-2][y-2]++;
            a[x-2][y-1]++;
            a[x-1][y-2]++;
        }
        else if(x - 1 > 0) a[x-2][y-1]++;
        else if(y - 1 > 0) a[x-1][y-2]++;
        if(x < n && y < m)
        {
            a[x][y]++;
            a[x-1][y]++;
            a[x][y-1]++;
        }
        else if(x < n) a[x][y-1]++;
        else if(y < m) a[x-1][y]++;
        if(x - 1 > 0 && y < m) a[x-2][y]++;
        if(y - 1 > 0 && x < n) a[x][y-2]++;

    }
    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < m; ++j)
        {
            if(a[i][j] >= 0) cout << a[i][j] << " ";
            else cout << '*' << " ";
        }
        cout << endl;
    }
}