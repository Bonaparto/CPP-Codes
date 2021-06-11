#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    map <string, vector <string> > mm;
    string x; getline(cin, x);
    for(int i = 0; i < n; ++i){
        string g, s = "", k;
        cin >> k; getline(cin, g);
        for(int j = 3; j < g.size(); ++j){
            if(j == g.size() - 1){
                s += g[j];
                mm[s].push_back(k);
                s.clear();
            }
            if(g[j] == ' ') continue;
            if(g[j] == ','){
                mm[s].push_back(k);
                s.clear();
            }
            else s += g[j];
        }
    }
    cout << mm.size() << endl;
    map <string, vector <string> > :: iterator it;
    for(it = mm.begin(); it != mm.end(); ++it){
        cout << (*it).first << " - ";
        for(int i = 0; i < (*it).second.size(); ++i){
            if(i == 0) cout << (*it).second[i];
            else cout << ", " << (*it).second[i]; 
        }  
        cout << endl;
    }
}