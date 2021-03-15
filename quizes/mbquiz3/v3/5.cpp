#include <bits/stdc++.h>
using namespace std;
int main(){
    string n;
    getline(cin, n);
    set <char> l;
    for(int i = 0; i < n.size(); ++i){
        if(l.insert(n[i]).second)
        cout << n[i];
    }
}