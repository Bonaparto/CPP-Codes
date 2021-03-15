#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; bool c = 0;
    cin >> n;
    string a[n];
    set <char> s;
    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }
    for(int i = 0; i < a[0].size(); ++i){
        for(int j = 0; j < n; ++j){
            if(a[j].find(a[0][i]) == string :: npos) break;
            else if(j == n - 1){
                s.insert(a[0][i]);
                c = 1;
            } 
        }
    }
    if(!c){
        cout << "NO COMMON CHARACTERS"; 
        return 0;
    }
    set <char> :: iterator it;
    for(it = s.begin(); it != s.end(); ++it){
        cout << *it << " "; 
    }
}