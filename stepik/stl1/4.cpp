#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    cin >> n;
    set <int> l, g;
    for(int i = 0; i < n; ++i){
        int x;
        cin >> x;
        l.insert(x);
    }
    cin >> m;
    for(int i = 0; i < m; ++i){
        int x;
        cin >> x;
        if(l.insert(x).second) continue;
        g.insert(x);
    }
    set <int> :: iterator it;
    for(it = g.begin(); it != g.end(); ++it){
        cout << *it << " ";
    }
}