#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int cnt1 = 0;
    for(int i = 0; i < s.size(); ++i) {
        if(s[i] == 'A') cnt1++;
        else cnt1--;
        if(cnt1 < 0) {
            cout << "Nao";
            return 0;
        }
    }
    cout << (cnt1 == 0 ? "Sim":"Nao");
}