// by set/vector
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    set <string> s;
    vector <string> v;
    for(int i = 0; i < n; ++i){
        string x, y;
        cin >> x >> y;
        if(!s.insert(x).second) v.push_back(x);
    }
    if(v.empty()){
        cout << "NO";
        return 0;
    }
    for(int i = 0; i < v.size(); ++i){
        cout << v[i] << endl;
    }
}