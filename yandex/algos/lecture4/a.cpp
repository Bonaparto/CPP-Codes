#include <iostream>
#include <map>
using namespace std;
int main(){
    int n; string s, s1;
    cin >> n;
    map <string, string> mp;
    for(int i = 0; i < n; ++i)
    {
        cin >> s >> s1;
        mp[s] = s1;
    }
    cin >> s;
    if(mp.find(s) != mp.end()) cout << mp[s];
    else
    {
        map <string, string> :: iterator it;
        for(it = mp.begin(); it != mp.end(); ++it)
        {
            if(mp[(*it).first] == s)
            {
                cout << (*it).first;
                return 0;
            }
        }
    }
}