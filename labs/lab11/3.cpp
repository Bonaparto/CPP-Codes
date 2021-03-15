#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; double t = 0;
    cin >> n;
    map <string, int> m;
    multimap <double, string> m1;
    for(int i = 0; i < n; ++i){
        string s; int x;
        cin >> s >> x;
        m[s] += x;
        t += x;
    }
    map <string, int> :: iterator it;
    for(it = m.begin(); it != m.end(); ++it){
        m1.insert({((*it).second / t) * 100, (*it).first});
    }
    multimap <double, string> :: reverse_iterator it1;
    for(it1 = m1.rbegin(); it1 != m1.rend(); ++it1){
        cout << (*it1).second << " " << (*it1).first << "%" << endl; 
    }
}                       