#include <iostream>
using namespace std;
int main(){
    int n, A, B, C;
    cin >> n >> A >> B >> C;
    string s = "";
    for(int i = 0; i < A; ++i){ cout << char('A' + i % 26); s += char('A' + i % 26);}
    for(int i = 0; i < B; ++i){ cout << char('a' + i % 26); s += char('a' + i % 26);}
    for(int i = 0; i < C; ++i){ cout << char('0' + i % 10); s += char('0' + i % 10);} 
    if(A + B + C < n){
        if((s[s.size() - 1] >= 'a' && s[s.size() - 1] <= 'z') || (s[s.size() - 1] >= '0' && s[s.size() - 1] <= '9') || s.size() == 0){
            cout << 'A'; s += 'A'; }
        else if(s[s.size() - 1] >= 'A' && s[s.size() - 1] <= 'Z' || s.size() == 0){
            cout << 'a'; s += 'a'; }
        for(int i = 0; i < n - (A + B + C) - 1; ++i){
            if(s[s.size() - 1] <= 'Z' && s[s.size() - 1] >= 'A') cout << char('a' + i % 26);
            if(s[s.size() - 1] <= 'z' && s[s.size() - 1] >= 'a') cout << char('0' + i % 10);
        }
    }
}