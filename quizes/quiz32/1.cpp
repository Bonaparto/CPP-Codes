#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector <int> v, v1;
    for(int i = 0; i < n; ++i){
        int x;
        cin >> x;
        v.push_back(x);
    }
    int m;
    cin >> m;
    for(int i = 0; i < m; ++i){
        int x;
        cin >> x;
        v1.push_back(x);
    }
    int cnt = 0;
    for(int i = 0; i < v1.size(); ++i){
        cnt = 0;
        for(int j = 0; j < v.size(); ++j){
            if(v1[i] == v[j]) cnt++;
        }
        cout << cnt << endl;
    }
}