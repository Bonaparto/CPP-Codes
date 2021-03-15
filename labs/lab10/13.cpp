#include <bits/stdc++.h>
using namespace std;

bool conseq(int a, int b){
    return a == b;
}

int main(){
    int n, m;
    cin >> n >> m;
    vector <int> v, v1, v2;
    for(int i = 0; i < n; ++i){
        int x;
        cin >> x;
        v.push_back(x);
    }
    for(int i = 0; i < m; ++i){
        int x;
        cin >> x;
        v1.push_back(x);
    }
    vector <int> :: iterator it;  
    it = unique(v.begin(), v.end(), conseq);
    v.resize(distance(v.begin(), it));
    it = unique(v1.begin(), v1.end(), conseq);
    v1.resize(distance(v1.begin(), it));
    for(int i = 0; i < max(v.size(), v1.size()); ++i){
        if(i < v.size())
        v2.push_back(v[i]);
        if(i < v1.size())
        v2.push_back(v1[i]);
    }
    it = unique(v2.begin(), v2.end(), conseq);
    v2.resize(distance(v2.begin(), it));
    for(int i = 0; i < v2.size(); ++i){
        cout << v2[i] << " ";
    }
}