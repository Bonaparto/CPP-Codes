#include <bits/stdc++.h>
using namespace std;



int main(){
    string n, m;
    cin >> n >> m;
    string z = n;
    bool a = 0;
    for(int i = 0; i < m.size(); ++i){
        z = n;
        string f = m.substr(m.size() - i, m.size());
        z += f;
        if(z.find(n) != string :: npos && z.find(m) != string :: npos){
            a = 1;
            break;
        } 
    }
    string g = m;
    for(int i = 0; i < n.size(); ++i){
        string g = m;
        string f = n.substr(n.size() - i, n.size());
        g += f;
        if(g.find(n) != string :: npos && g.find(m) != string :: npos){
            a = 1;
            break;
        } 
    }
    if(g >= z) cout << z;
    else cout << g;
}