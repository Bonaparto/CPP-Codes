#include <bits/stdc++.h>
using namespace std;
int main(){
    string s, m;
    cin >> s;
    sort(s.begin(), s.end());
    set <string> v;
    do{
        v.insert(s);
        } while(next_permutation(s.begin(), s.end()));
    while(cin >> m){
        if(v.find(m) != v.end()){
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
}