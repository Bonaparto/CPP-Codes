#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    set <string> s, ss;
    for(int i = 0; i < n; ++i){
        string x, z; cin >> x;
        s.insert(x);
        z = "";
        for(int j = 0; j < x.length(); ++j) z += tolower(x[j]);
        ss.insert(z);
    }
    string s1, z = "", z1 = ""; 
    getline(cin, s1);
    getline(cin, s1);
    int cnt = 0, cnt1 = 0;
    for(int i = 0; i < s1.length(); ++i){
        if(isupper(s1[i])) cnt1++;
        if(s1[i] == ' ' || i == s1.length() - 1){
            if(i == s1.length() - 1){
                z += s1[i];
                z1 += tolower(s1[i]);
            }
            if(cnt1 == 0 || cnt1 > 1 || (s.count(z) == 0 && ss.count(z1) != 0)) cnt++;
            z = "";
            z1 = "";
            cnt1 = 0;
            continue;
        }
        z1 += tolower(s1[i]);
        z += s1[i];
    }
    cout << cnt; 
}