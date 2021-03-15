#include <bits/stdc++.h>
using namespace std;



int main(){
    int n;
    cin >> n;
    string s;
    multimap <string, string> m;
    vector <string> v;
    for(int i = 0; i < n; ++i){
        string s; cin >> s;
    }
    int x; cin >> x;
    for(int j = 0; j < x; ++j){
        pair <string, string> a;
        cin >> a.first >> a.second;
        m.insert(a);
    }
    cin >> s;
    multimap <string, string> :: iterator it;
    for(it = m.begin(); it != m.end(); ++it){
        if((*it).first == s) v.push_back((*it).second);
        if((*it).second == s) v.push_back((*it).first);
    }
    sort(v.begin(), v.end());
    cout << v.size() << endl;
    for(int i = 0; i < v.size(); ++i){
        cout << v[i] << " ";
    }
}