#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    for(size_t i = 0; i < s.size(); ++i){
        for(size_t j = 0; j < i; ++j){
            if(s[i] == s[j] && i != j){
                cout << s[i];
                break;
            }
        }
    }
}