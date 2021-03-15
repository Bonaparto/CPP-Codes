#include <bits/stdc++.h>
using namespace std;

bool compare(pair <vector <int> , int> a, pair <vector <int> , int> b){
    return a.second < b.second;
}

int main(){
    int n;
    cin >> n;
    vector <int> v;
    vector <pair <vector <int> , int> >  vv;
    for(int i = 0; i < n; ++i){
        int m, sum = 0;
        cin >> m;
        for(int j = 0; j < m; ++j){
            int x;
            cin >> x;
            sum += x;
            v.push_back(x);
        }
        vv.push_back(make_pair(v, sum));
        v.clear();
    }
    sort(vv.begin(), vv.end(), compare);
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < vv[i].first.size(); ++j){
            cout << vv[i].first[j] << " ";
        }
        cout << endl;
    }
}