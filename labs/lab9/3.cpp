#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector <int> l;
    for(int i = 0; i < n; ++i){
        int x;
        cin >> x;
        l.push_back(x);
    }
    sort(l.begin(), l.end());
    int cnt1 = 0;
    for(int i = 0; i < l.size() - 1; ++i){
        int cnt = 0;
        if(l[i] == l[i-1]) continue;
        for(int j = i + 1; j < l.size(); ++j){
            if(l[i] == l[j]){
                cnt++;
            }
        }
        if(cnt >= 1) cnt1++;
    }
    cout << cnt1;
}   