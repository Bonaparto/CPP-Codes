#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin, s);
    int cnt = 0, cnt1 = 0, x;
    for(int i = 0; i < s.size(); ++i){
        cnt1++;
        if(i == ' '){
            if(cnt1 - 1 > cnt){
                x = i;
                cnt = cnt1;
            }
            cnt1 = 0;
        }
    }
    for(int i = x; s[i] != ' '; ++i){
        cout << s[i];
    }
}