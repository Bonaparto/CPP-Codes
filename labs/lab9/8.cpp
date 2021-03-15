#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    map <string, int> m;
    for(int i = 0; i < n; ++i){
        string l; cin >> l;
        m.insert(make_pair(l, i + 1));
    }
    map <string, int> :: iterator it; 
    for(it = m.begin(); it != m.end(); ++it){
        cout << (*it).first << " " << (*it).second << endl;;
    }
}