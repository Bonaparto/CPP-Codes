#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    map <string, int> m;
    vector <string> f;
    vector <int> g;
    for(int i = 0; i < n; ++i){
        string x;
        cin >> x;
        int y;
        cin >> y;
        f.push_back(x);
        g.push_back(y);
    }
    for(int i = 0; i < n; ++i){
        if(i != 0 && f[i] == f[i-1]) continue;
        int sum = g[i];
        for(int j = i + 1; j < n; ++j){
            if(f[j] == f[i])
            sum += g[j];
        }
        m.insert(make_pair(f[i], sum));
    }
    map <string, int> :: iterator it;
    for(it = m.begin(); it != m.end(); ++it){
        cout << (*it).first << " " << (*it).second << endl;
    }
}