#include <bits/stdc++.h>
using namespace std;
int main(){
    int l = 0;
    string s,t;
    getline(cin,s);
    t = s;
    reverse(s.begin(), s.end());
    if(t == s){
        for(size_t i = 0; i < s.size(); ++i){
            if(s[0] != s[i]) l = 1;
        }
        if(l == 0) cout << 0;
        else cout << s.size() - 1;
    }
    else cout << s.size();
}