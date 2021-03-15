#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    set <string> s, g;
    vector <string> f;
    for(int i = 0; i < n; ++i){
        string x;
        cin >> x;
        if(!s.insert(x).second){
            f.push_back(x);
        }
    }
    if(f.empty()){
        cout << "Understandable, have a great day";
        return 0;
    }
    for(int i = 0; i < f.size(); ++i){
        if(g.insert(f[i]).second) cout << f[i] << endl;
    }
}