#include <iostream>
#include <set>

using namespace std;
int main(){
    int n;
    cin >> n;
    set <pair<int,int>> s;
    for(int i = 0; i < n; ++i)
    {
        int x, y;
        cin >> x >> y;
        if(x < 0 || y < 0) continue;
        if(x + y == n - 1)
        {
            pair <int, int> p = make_pair(x, y);
            if(s.find(p) == s.end()) s.insert(p);
        }
    }
    cout << s.size();
}