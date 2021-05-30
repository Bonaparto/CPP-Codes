#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    cin >> n;
    set <int> l;
    for(int i = 0; i < n; ++i){
        int x;
        cin >> x;
        l.insert(x);
    }
    n = l.size();
    cin >> m;
    for(int i = 0; i < m; ++i){
        int x;
        cin >> x;
        l.insert(x);
    }
    cout << m - (l.size() - n);
}