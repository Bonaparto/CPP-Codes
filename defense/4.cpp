#include <bits/stdc++.h>
using namespace std;

bool bysurname(pair <string,string> a, pair <string,string> b){
    return a.first < b.first;
}

int main(){
    int n;
    cin >> n;
    vector <pair<string, string> > v;
    for(int i = 0; i < n; ++i){
        string n, s;
        cin >> n >> s;
        v.push_back(make_pair(s, n));
    }
    sort(v.begin(), v.end(), bysurname);
    for(int i = 0; i < n; ++i){
        cout << v[i].first;
    }
}