#include <iostream>
#include <map>
using namespace std;
int main(){
    int n, c, w, cap; cin >> n >> cap;
    map <char, pair <int, int>> mp;
    int a[n+1][cap+1];
    string b[n+1][cap+1];
    char ch[n];
    for(int i = 0; i <= cap; ++i) b[0][i] = "";
    for(int i = 0; i <= n; ++i) b[i][0] == "";

    for(int i = 0; i <= cap; ++i) a[0][i] = 0;
    for(int i = 0; i <= n; ++i) a[i][0] = 0;

    for(int i = 0; i < n; ++i)
    {
        cin >> ch[i] >> c >> w;
        pair <int,int> p = make_pair(c, w);
        mp[ch[i]] = p;
    }
    
    for(int i = 1; i <= n; ++i)
    {
        for(int j = 1; j <= cap; ++j)
        {
            if(mp[ch[i-1]].second <= j)
            {
                int l = max(mp[ch[i-1]].first + a[i-1][j-mp[ch[i-1]].second], a[i-1][j]);
                a[i][j] = l;
                if(l == mp[ch[i-1]].first + a[i-1][j-mp[ch[i-1]].second]) b[i][j] = b[i-1][j-mp[ch[i-1]].second] + ch[i-1]; 
                else b[i][j] = b[i-1][j];
            }
            else
            {
                a[i][j] = a[i-1][j];
                b[i][j] = b[i-1][j];
            }
        }
    }
    
    for(int i = 0; i <= n; ++i)
    {
        for(int j = 0; j <= cap; ++j)
        {
           cout << a[i][j] << ":" << b[i][j] << " ";
           //cout << a[i][j] << " ";
        }
        cout << endl;
    }
   cout << "The most optimal variant is: " <<  b[n][cap];
}