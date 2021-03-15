#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    vector <string> l;
    vector <int> x;
    map <string, int> f;
    cin >> n;
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < 2; ++j){
            if(j % 2 == 0){
                string g;
                cin >> g;
                l.push_back(g);
            }
            else{
                int y;
                cin >> y;
                x.push_back(y);
            }
        }
    }
    sort(l.begin(), l.end());
    sort(x.begin(), x.end());
    for(int i = 0; i < l.size(); ++i){
        f.insert(make_pair(l[i],x[i]));
    }
    map <string, int> :: iterator it;
    for(it = f.begin() ; it != f.end(); ++it){
        cout << (*it).first << " ";
        cout << (*it).second << endl;
    }
}