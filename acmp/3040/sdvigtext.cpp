#include <bits/stdc++.h>
using namespace std;
int main(){
    string s, ss;
    cin >> s >> ss;
    int cnt = 0;
    do{ cout << s << endl;
        if(s == ss){
            cout << (s.size() - cnt <= cnt? (s.size() - cnt) * -1: cnt);
            return 0;
        }
        cnt++;
    } while(next_permutation(s.begin(), s.end()));
    cout << "-1";
}