#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    for(int i = 0; i < s.size(); ++i){
        if(s[i] < 109) s[i] = char(122 - (s[i] - 97));
        else s[i] = char(122 - s[i] + 97);
    }
    for(int i = 0; i < s.size(); ++i){
        cout << s[i];
    }
}