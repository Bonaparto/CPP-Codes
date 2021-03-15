#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector <string> l;
    for(int i = 0; i < n; ++i){
        string x;
        cin >> x;
        l.push_back(x);
    }
    int cnt1 = 0, cnt = 0;
    for(int i = 0; i < l.size() - 1; ++i){
        if(i != 0){
            if(l[i] == l[i-1]) continue;
        }
        for(int j = i + 1; j < l.size(); ++j){
            if(l[i] == l[j]) cnt++;
        }
        if(cnt == 2){cnt1++;}   
        cnt = 0;
    }
    cout << cnt1;
}   