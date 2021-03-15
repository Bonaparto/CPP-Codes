#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    map <string, string> w;
    for(int i = 0; i < n; ++i){
        string x, y;
        cin >> x >> y;
        w.insert(make_pair(x, y));
    }
    string x;
    cin >> x;
    map <string, string> :: iterator it;
    for(it = w.begin(); it != w.end(); ++it){
        if(x == (*it).first) cout << (*it).second;
        if(x == (*it).second) cout << (*it).first;
    }
}