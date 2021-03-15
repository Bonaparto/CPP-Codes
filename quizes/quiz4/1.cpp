#include <bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin >> n;
    vector <pair <long long, long long> > v;
    vector <int> v1;
    for(int i = 0; i < n; ++i){
        long long x, y, cnt = 0;
        cin >> x >> y;
        for(int j = 0; j < v.size(); ++j){
            if((v[j].first == x && v[j].second == y) ||
            (v[j].first == y && v[j].second == x))
            cnt++;
        }
        v.push_back(make_pair(x, y));
        v1.push_back(cnt);
    }
    for(int i = 0; i < v1.size(); ++i){
        cout << v1[i] << endl; 
    }
}