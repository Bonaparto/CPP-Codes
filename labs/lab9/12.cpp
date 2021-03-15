#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    multiset <pair <int,int > > l;
    for(int i = 0; i < n; ++i){
        int x, y;
        cin >> x >> y;
        l.insert(make_pair((x + y), i + 1));
    }
    multiset <pair <int,int > > :: iterator it;
    for(it = l.begin(); it != l.end(); ++it){
        cout << (*it).second << " "; 
    }
}