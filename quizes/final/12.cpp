#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    map <int, int> s;
    map <int, int> :: iterator it;
    vector <pair< int, int > > v;
    for(int i = 0; i < n; ++i){
        s.clear(); v.clear();
        int x, cnt1 = 0; cin >> x;
        for(int j = 0; j < x; ++j){
            int y; cin >> y;
            s[y]++; v.push_back(make_pair(y, j));
        }
        int cnt = 0;
        bool a = 0;
        for(it = s.begin(); it != s.end(); ++it){
            if((*it).second == 1){
                for(int k = 0; k < v.size(); ++k){
                    if((*it).first == v[k].first){
                        a = 1;
                        cout << v[k].second + 1 << endl;
                        break;
                    }
                }
                if(a) break;
            }
        }
        if(!a) cout << "ZA WARUDO" << endl;
    }
}
