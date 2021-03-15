#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    set <string> s;
    set <string> s1;
    cin >> n;
    for(int i = 0; i < n; ++i){
        string x;
        cin >> x;
        s.insert(x);
    }
    cin >> m;
    set <string> :: iterator it;
    for(int i = 0; i < m; ++i){
        string x;
        cin >> x;
        s1.insert(x);
    }
    cout << "Missed students:" << endl;
    for(it = s.begin(); it != s.end(); ++it){
        if(s1.insert(*it).second){
            cout << " - " << *it << endl;
        }
    }
    cout << "Not in the group:" << endl;
    for(it = s1.begin(); it != s1.end(); ++it){
        if(s.insert(*it).second)
        cout << " - " << *it << endl;
    }
}