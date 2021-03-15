#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m = 0; double l = 0;
    cin >> n;
    map <string, double> si;
    for(int j = 0; j < n; ++j){
        int n;
        cin >> m;
        for(int i = 0; i < m; ++i){
            int x; string y;
            cin >> y >> x;
            si[y] += x;
            l += x;
        }
    }
    map <string, double> :: iterator it;
    for(it = si.begin(); it != si.end(); ++it){
        cout << (*it).first << " " << ((*it).second * 100 / l)<< endl;
    }
}