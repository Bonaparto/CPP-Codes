#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    set <int> a, b;
    for(int i = 0; i < n; ++i){
        int x; cin >> x;
        a.insert(x);
    }
    for(int i = 0; i < m; ++i){
        int x; cin >> x;
        b.insert(x);
    }
    set <int> :: iterator it;
    if(n > m){
        for(it = b.begin(); it != b.end(); ++it)
            if(!a.insert(*it).second) cout << *it << " ";
    }
    else{
        for(it = a.begin(); it != a.end(); ++it)
            if(!b.insert(*it).second) cout << *it << " ";
    }
}