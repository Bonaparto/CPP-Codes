#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector <int> s, l;
    for(int i = 0; i < n; ++i){
        int x;
        cin >> x;
        s.push_back(x);
    }
    int m;
    cin >> m;
    for(int i = 0; i < m; ++i){
        int x, cnt = 0;
        cin >> x;
        for(int j = 0; j < s.size(); ++j){
            if(s[j] == x) cnt++;
        }
        l.push_back(cnt);
    }   
    for(int i = 0; i < l.size(); ++i){
        cout << l[i] << endl;
    }
}