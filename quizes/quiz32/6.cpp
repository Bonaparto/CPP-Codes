#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    set <string> v, v1;
    for(int i = 0; i < n; ++i){
        string x;
        cin >> x;
        v.insert(x);
    }
    int m;
    cin >> m;
    for(int i = 0; i < m; ++i){
        string x;
        cin >> x;
        v1.insert(x);
    }
    set <string> :: iterator it;
    cout << "Missed students:" << endl;
    for(it = v.begin(); it != v.end(); ++it){
        if(v1.insert(*it).second) cout << "- " << *it << endl;
    }
    cout << "Not in the group:" << endl;
    for(it = v1.begin(); it != v1.end(); ++it){
        if(v.insert(*it).second) cout << "- " << *it << endl;
    }
}