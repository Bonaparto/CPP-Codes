#include <bits/stdc++.h>
using namespace std;



int main(){
    string g, b, c = "";
    cin >> g >> b;
    for(int i = 0;;i++){
        c += b[i % b.size()];
        if(c.size() == g.size()) break;
    }
    char a[26][26];
    for(int i = 0; i < 26; ++i){
        for(int j = 0; j < 26; ++j){
            if('a' + i + j <= 'z')
            a[i][j] = char('a' + i + j);
            else a[i][j] = char('a' + (i + j) % 26);
        }
    }
    for(int i = 0; i < c.size(); ++i){ 
        c[i] = a[g[i] - 'a'][c[i] - 'a'];
        cout << c[i];
    }
}