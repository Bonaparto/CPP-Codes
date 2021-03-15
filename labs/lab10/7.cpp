#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    multimap <string, int> m;
    for(int i = 0; i < n; ++i){
        string x, y, z; int a, b;
        cin >> x >> a >> y >> b;
        z += x; z += " and "; z += y;
        m.insert({z, a + b});
    }
    multimap <string, int> :: iterator it;
    pair <string, int> p;  
    for(it = m.begin(); it != m.end(); ++it){
        if((*it).first != p.first || (*it).second != p.second){
            cout << (*it).first<< " " << (*it).second << endl;
        }
        p = *it; 
    }
}