#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m, t = 0;
    cin >> n;
    vector <pair <string, int> > vp;
    map <string, double> si;
    for(int j = 0; j < n; ++j){
        cin >> m;
        for(int i = 0; i < m; ++i){
            int x; string y;
            cin >> y >> x;
            t += x;
            vp.push_back(make_pair(y, x));
            si.insert(make_pair(y, 0));
        }
    }
    map <string, double> :: iterator it;
    for(int i = 0; i < vp.size(); ++i){
        for(it = si.begin(); it != si.end(); ++it){
            if(vp[i].first == (*it).first)
            (*it).second += vp[i].second;
        }
    }
    for(it = si.begin(); it != si.end(); ++it){
        cout << (*it).first << " " << ((*it).second / t) * 100 << endl;
    }
}