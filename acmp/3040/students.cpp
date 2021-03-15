#include <bits/stdc++.h>
using namespace std;

bool css(pair <string, pair <pair<string, string>, string > > a, pair <string, pair <pair<string, string>, string > > b){
    if(a.first == b.first) return a.second.first.second < b.second.first.second;
    else{
        if(a.first.size() != b.first.size()) return a.first.size() < b.first.size();
        else return a.first < b.first;
    }
}

int main(){
    int n;
    cin >> n;
    vector <pair <string, pair <pair <string, string>, string > > > m;
    for(int i = 0; i < n; ++i){
        string n, s, k, b;
        cin >> n >> s >> k >> b;
        m.push_back(make_pair(k, make_pair(make_pair(s, n), b)));
    }
    sort(m.begin(), m.end(), css);
    for(int i = 0; i < m.size(); ++i){
        cout << m[i].first << " " << m[i].second.first.second << " " << m[i].second.first.first <<
        " " << m[i].second.second << endl;
    }
}