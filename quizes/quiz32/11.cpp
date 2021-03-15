#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    map <int, int> m;
    vector <int> v;
    for(int i = 0; i < n; ++i){
        int x;
        cin >> x;
        m[x]++;
    }
    int l;
    cin >> l;
    for(int i = 0; i < l; ++i){
        int x;
        cin >> x;
        v.push_back(m[x]);
    }
    for(int i = 0; i < v.size(); ++i){
        cout << v[i] << endl;
    }
}