#include <bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin >> n;
    vector <int> v;
    multiset <pair <int, int> > ms;
    multiset <pair <int, int> > :: iterator it; 
    for(int i = 0; i < n; ++i){
        int x, y, cnt = 0;
        cin >> x >> y;
        for(it = ms.begin(); it != ms.end(); ++it){
            if(((*it).first == x && (*it).second == y) ||
            ((*it).first == y && (*it).second == x))
            cnt++;
        }
        ms.insert({x, y});
        v.push_back(cnt);
    }
    for(int i = 0; i < n; ++i){
        cout << v[i] << endl;
    }
}