#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    map <char, int> mp;
    long long cnt = 1;
    for(long long i = 1; i < s.size(); ++i) {
        if(s[i] == s[i-1]) cnt++;
        else if(s[i] != s[i-1]){
            cout << s[i-1] << cnt;
            cnt = 1;
        }
    }
    cout << s[s.size()-1] << cnt;
}   