#include <bits/stdc++.h>
using namespace std;
int main(){
    string n;
    getline(cin, n);
    int cnt = 0,cnt1 = 0,pos;
    if(n.find(' ') != string::npos){
        for(size_t i = 0; i < n.size(); ++i){
            if(i == n.size() - 1){
               if(cnt + 1 > cnt1){
                    cnt1 = cnt + 1;
                    pos = i + 1;
                } 
            }
            if(n[i] == ' '){
                if(cnt > cnt1){
                    cnt1 = cnt;
                    pos = i;
                }
                cnt = 0;
            }
            else cnt++;
        }
        cout << n.substr(pos - cnt1 , cnt1);
    }
    else cout << n;
}