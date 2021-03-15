#include <bits/stdc++.h>
using namespace std;
int main(){
   int x, y, z, cnt = 0, cnt1 = 0; string s;
    cin >> x >> y >> z >> s;
    for(int i = 0; i < s.size(); ++i){
        if(s[i] <= 122 && s[i] >= 97) cnt += z;
        if(s[i] <= 90 && s[i] >= 65) cnt1 += y;
    }
    cout << min(cnt,cnt1);
}