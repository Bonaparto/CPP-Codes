#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    map <string, int> m;
    set <pair <string,int> > sp;
    for(int i = 0; i < n; ++i){
        int x; string s;
        cin >> s >> x;
        pair <string, int> p = make_pair(s, x);
        if(sp.insert(p).second == 0) continue;
        else{
            sp.insert(p);
            m[s]++;
        } 
    }
    map <string, int> :: iterator it;
    for(it = m.begin(); it != m.end(); ++it){
        if((*it).second >= 3) cout << (*it).first << " +1";
        else cout << (*it).first << " NO BONUS";
        cout << endl;
    }
}