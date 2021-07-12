#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio();
    int t, d, n, x, y, x1, y1, cnt = 0, cnt1 = 0, cnt2 = 0;
    cin >> t >> d >> n >> x1 >> y1;
    pair <int, int> v[n][t*d+1];
    bool check = false;
    n--;
    for(int i = x1 - t; i <= x + t; ++i)
    {
        for(int j = y1 - t; j <= y + t; ++j)
        {
            if(abs(i - x1) + abs(j - y1) <= t)
            {
                v[0][cnt] = make_pair(i, j);
                cnt++;
                //cout << i << " "  << j << endl; 
            }
        }
    }
    cnt2 = cnt;
    while(n--)
    {
        cnt1++; cnt = 0;
        cin >> x >> y;
        for(int i = x - d; i <= x + d; ++i)
        { 
            for(int j = y - d; j <= y + d; ++j)
            {
                if(abs(i - x) + abs(j - y) <= d)
                {
                    for(int k = 0; k < cnt2; ++k)
                    {
                        if(abs(x - v[cnt1-1][k].first) + abs(y - v[cnt-1][k].second) <= t)
                        {
                            v[cnt1][cnt] = make_pair(i, j);
                            cnt++;
                            break;
                        }
                    }
                }
            }
        }
        cnt2 = cnt;
    }
    cout << cnt << endl;
    for(int i = 0; i < cnt; ++i) cout << v[n-1][i].first << " " << v[n-1][i].second << endl;
}