#include <iostream>
#include <map>
using namespace std;
int main(){
    int n, k, mx = 0, fc = 0, r = 0, l = 0;
    string s;
    map <char, int> mp;
    cin >> n >> k >> s;
    while(r != n)
    {
        mp[s[r]]++;
        if(mp[s[r]] > k || r == n - 1)
        {
            int temp_r = r;
            if(mp[s[r]] <= k) temp_r++;
            if(temp_r - l > mx)
            {
                mx = temp_r - l;
                fc = l + 1;
            }
            int temp_f = l;
            while(mp[s[r]] > k)
            {
                mp[s[temp_f]]--;
                temp_f++;
            }
            l = temp_f;
        }
        r++;
    }
    cout << mx << " " << fc;
}