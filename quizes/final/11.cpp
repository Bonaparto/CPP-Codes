#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    map <string, string> m;
    map <string, string> :: iterator it;
    for(int i = 0; i <  n; ++i){
        string a, b;
        cin >> a >> b;
        bool c = 0;
        for(it = m.begin(); it != m.end(); ++it){
            if(a == (*it).second){
                c = 1;
                m[(*it).first] = b;
                continue;
            }
        }
        if(!c) m[a] = b;
    }
    cout << m.size() << endl;
    for(it = m.begin(); it != m.end(); ++it){
        cout << (*it).first << " " << (*it).second << endl;
    }
}
