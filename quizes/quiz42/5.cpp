#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    multiset<pair<pair<int, int>, pair<int, int>>> m;
    for (int i = 0; i < n; ++i)
    {
        string s;
        int a, b, c;
        cin >> s;
        a = (s[6] - 48) * 1000 + (s[7] - 48) * 100 + (s[8] - 48) * 10 + s[9] - 48;
        b = (s[3] - 48) * 10 + s[4] - 48;
        c = (s[0] - 48) * 10 + s[1] - 48;
        m.insert(make_pair(make_pair(a, b), make_pair(c, i)));
    }
    multiset<pair<pair<int, int>, pair<int, int>>>::iterator it;
    for (it = m.begin(); it != m.end(); ++it)
    {
        if ((*it).second.first < 10 && (*it).first.second >= 10)
        {
            cout << "0" << (*it).second.first << "-" << (*it).first.second << "-" << (*it).first.first << endl;
            continue;
        }
        if ((*it).first.second < 10 && (*it).second.first >= 10)
        {
            cout << (*it).second.first << "-0" << (*it).first.second << "-" << (*it).first.first << endl;
            continue;
        }
        if ((*it).first.second < 10 && (*it).second.first < 10)
        {
            cout << "0" << (*it).second.first << "-0" << (*it).first.second << "-" << (*it).first.first << endl;
            continue;
        }
        else
            cout << (*it).second.first << "-" << (*it).first.second << "-" << (*it).first.first << endl;
    }
}