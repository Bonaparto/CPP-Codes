#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve(){
    int m; cin >> m;
    vector <int> v, v1;
    for(int i = 0; i < m; ++i){
        int x; cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    for(int i = 0; i < m; ++i){
        if(i == m - 1){ 
            cout << v[i] << " ";
            continue;
        }
        if(v[i] != v[i+1]) cout << v[i] << " ";
        else v1.push_back(v[i]);
    }
    for(int i = 0; i < v1.size(); ++i) cout << v1[i] << " ";
    cout << endl;
}

int main(){
    ios_base::sync_with_stdio();
    cin.tie(0);
    int n;
    cin >> n;
    while(n--) solve();
}