#include <bits/stdc++.h>
using namespace std;

bool points(pair <int, string> a, pair <int, string> b){
    if(a.first == b.first) return a.second > b.second;
    else return a.first > b.first;
}

int main(){
    int n, m;
    cin >> n >> m;
    vector <pair <int, string> > v;
    for(int i = 0; i < n; ++i){ 
        string x; int a, b, c;
        cin >> x >> a >> b >> c;
        v.push_back(make_pair(a + b + c, x));
    }
    int cnt = 1;
    sort(v.begin(), v.end(), points);
    for(int i = 0; i < v.size(); ++i){
        if(cnt == m){
            cout << v[i].second << " " << v[i].first; 
            break;
        }
        cnt++;
    }
}