#include <iostream>
using namespace std;
int main(){
    string s;
    getline(cin, s);
    if(s.length() == 0){
        cout << -1;
        return 0;
    }
    int max = -1; bool x = 0;
    for(int i = 0; i < s.length(); ++i){
        if(s[i] != '0') x = 1;
        if(s[i] < '0' || (s[i] > '9' && s[i] < 'A') || s[i] > 'Z'){
            cout << -1;
            return 0;
        }   
        if(s[i] >= '0' && s[i] <= '9' && s[i] - '0' + 1 > max){
            max = s[i] - '0' + 1;
        }
        if(s[i] >= 'A' && s[i] <= 'Z' && s[i] - '0' - 6 > max){
            max = s[i] - '0' - 6;
        }
    }
    if(!x) cout << 2;
    else cout << max;
}