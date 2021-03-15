#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    map <string, int> m;
    vector <string> v;
    map <string, int> :: iterator it;
    for(int i = 0; i < n; ++i){
        string x; int y;
        cin >> x >> y;
        it = m.find(x);
        if(it != m.end()){
            v.push_back(x);
        }
        m.insert(make_pair(x, y)); 
    }
    if(v.empty()){
        cout << "NO";
        return 0;
    }
    for(int i = 0; i < v.size(); ++i){
        cout << v[i] << endl;
    }
}