#include <iostream>
using namespace std;

int a[201][201], b[202][202], c[202][202], n, m, ans = -8e8, ansx, ansy, ansx1, ansy1;

void check_sum(int x, int y){
    int sum = 0;
    for(int k = x; k < n; ++k)
    {
        for(int l = y; l < m; ++l)
        {
            if(k == x) sum = b[k][l+1] - b[k][y];
            else if(l == y) sum = c[k+1][y] - c[x][y];
            else sum = b[k][l+1] + b[x][l+1] - b[k][y] - b[x][y] + c[k+1][y] + c[k+1][l] - c[x][y] - c[x][y] - a[k][l] - a[x][y] - a[x][l] - a[k][y];   
            if(sum > ans){
                ans = sum;
                ansx = x;
                ansy = y;
                ansx1 = k;
                ansy1 = l;
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio();
    cin >> n >> m;
    for(int i = 0; i < n; ++i)
        for(int j = 0; j < m; ++j)
        {
            cin >> a[i][j];
            if(j > 0) b[i][j+1] = b[i][j] + a[i][j];
            else
            { 
                b[i][j+1] = a[i][j];
                b[i][j] = 0;
            }
            if(i > 0) c[i+1][j] = c[i][j] + a[i][j];
            else
            {
                c[i][j] = 0;
                c[i+1][j] = a[i][j];
            }
        }
    
    for(int i = 0; i < n; ++i)
        for(int j = 0; j < m; ++j)
            check_sum(i, j);

    cout << ans << endl << ansx + 1 << " " << ansy + 1 << " " << ansx1 + 1 << " " << ansy1 + 1;
}