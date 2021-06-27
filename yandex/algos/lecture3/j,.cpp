#include <iostream>
#include <set>
using namespace std;
int main(){
    int t, d, n, x, y, x1, y1;
    cin >> t >> d >> n;
    set <pair<int, int>> s, s1;
    while(n--)
    {
        cin >> x >> y;
        if(n == 1)
        {
            x1 = x;
            y1 = y;
            for(int i = x1 - t - d; i <= x1 + t + d; ++i)
            {
                for(int j = y1 - t - d; j <= y1 + t + d; ++j)
                {
                    if(abs(abs(i - x1) + abs(j - y1)) <= t + d)
                    {
                        s.insert(make_pair(i, j));
                    }
                }
            }
        }
    }
    if(s.size() == 0)
    {
        x1 = x;
        y1 = y;
    }
    for(int i = x - d; i <= x + d; ++i)
    {
        for(int j = y - d; j <= y + d; ++j)
        {
            if(abs(abs(i - x) + abs(j - y)) <= d){
                if(s.size() != 0 || abs(abs(i - x1) + abs(j - y1)) <= t)
                    s1.insert(make_pair(i, j));
            }
        }
    }
    set <pair<int, int>> :: iterator it, it1 = s1.begin();
    if(s.size() == 0)
    {
        cout << s1.size() << endl;
        for(it = s1.begin(); it != s1.end(); ++it) cout << (*it).first << " " << (*it).second << endl;
        return 0;
    }
    set <pair<int, int>> s3;
    for(it = s.begin(); it != s.end(); ++it)
    {
        for(it1 = s1.begin(); it1 != s1.end(); ++it1)
        {   
            if((*it1).first == (*it).first && (*it1).second == (*it).second)
            {
                s3.insert(*it);
                break;
            }
        } 
    }
    cout << s3.size() << endl;
    for(it = s3.begin(); it != s3.end(); ++it) cout << (*it).first << " " << (*it).second << endl;
}