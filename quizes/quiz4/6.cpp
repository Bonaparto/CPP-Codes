#include <bits/stdc++.h>
using namespace std;
int main(){
    string s, s1;
    getline(cin, s);
    int cnt = 0, cnt1 = 0, x;
    for(int i = 0; i < s.size(); ++i){
        cnt1++;
        if(s[i] == ' '){
            if(cnt1 - 1 > cnt){
                x = i - cnt1 - 1;
                cnt = cnt1 - 1;
            }
            cnt1 = 0;
        }
        if(i == s.size() - 1){
            if(cnt1 > cnt){
                x = i - cnt1;
                cnt = -1;
            }
        }
    }
    if(cnt == -1){
        for(int i = x + 1; i != s.size(); ++i){
            cout << s[i];
        }
        return 0;
    }
    else{
        for(int i = x + 2; s[i] != ' '; ++i){
            cout << s[i];
        }
    }
}