#include <bits/stdc++.h>
using namespace std;

int main(){
    string n;
    cin >> n;
    queue <char> l;
    for(int i = 0; i < n.size(); ++i){
        l.push(n[i]);
        if(l.back() == '0' || l.front() == '0'){
            cout << l.front();
            l.pop();
        }
        if(l.size() == 2){
            l.pop(); l.pop();
        }
        if(l.size() == 1 && i == n.size() - 1) cout << l.front();
    }
}