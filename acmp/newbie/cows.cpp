#include <bits/stdc++.h>
using namespace std;
int main(){
    string x, y;
    cin >> x >> y;
    int cnt = 0, cnt1 = 0;
    for(int i = 0; i < x.size(); ++i){
        if(x[i] == y[i]) cnt++;
        else if(x.find(y[i]) != string::npos) cnt1++;
    }
    cout << cnt << " " << cnt1;
}