#include <bits/stdc++.h>
using namespace std;

bool sortt(pair <int, string> p, pair <int, string> p1){
    if(p.first == p1.first) return p.second < p1.second;
    else return p.first > p1.first; 
}

int main(){
    string s, ss = "";
    getline(cin, s);
    vector <pair <int, string> > v;
    map <string, int> m;
    for(int i = 0; i < s.size(); ++i){
        ss += s[i];
        if(s[i] == ' '){
            ss.erase(ss.size() - 1);
            m[ss]++;
            ss.clear();
        }
        if(i == s.size() - 1){
            m[ss]++;
        }
    }
    map <string, int> :: iterator it;
    for(it = m.begin(); it != m.end(); ++it){
        v.push_back(make_pair((*it).second, (*it).first)); 
    }
    sort(v.begin(), v.end(), sortt);
    for(int i = 0; i < v.size(); ++i){
        if(v[i].second != " ")
        cout << v[i].second << " : " << v[i].first << endl;
    }
}