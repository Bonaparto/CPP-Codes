#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve(int n, int k){
    vector <int> v; int cnt = 0;
    for(int i = 0; i < n; ++i){
        int x; cin >> x;
        if(x >= k) cnt++;
        else v.push_back(x);
    }
    sort(v.begin(), v.end());
    for(int i = 0; i < v.size() / 2; ++i){
        if(v[i] + v[v.size()-i-1] >= k) cnt++;
    }
    cout << cnt << endl;
}

int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; ++i){
        int x, x1; cin >> x >> x1;
        solve(x, x1);
    }
}