#include <bits/stdc++.h>
using namespace std;
int n,x,y,cnt;
char a[15][15];
int solve(int n,int x,int y)
{
    if(a[x-1][y]=='.' && x-1 > 0)
    {
        cnt++;
        a[x-1][y]='*';
        solve(n,x-1,y);
    }
    if(a[x+1][y]=='.' && x+1 <=n)
    {
        cnt++;
        a[x+1][y]='*';
        solve(n,x+1,y);
    }
    if(a[x][y-1]=='.' && y-1 > 0)
    {
        cnt++;
        a[x][y-1]='*';
        solve(n,x,y-1);
    }
    if(a[x][y+1]=='.' && y+1 <=n)
    {
        cnt++;
        a[x][y+1]='*';
        solve(n,x,y+1);
    }
}
int main()
{
    cin >> n;
    cin >> x >> y;
    for(int i =1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cin >> a[j][i];
        }
    }
    cnt++;
    a[x][y]='*';
    solve(n,x,y);
    cout << cnt;
}