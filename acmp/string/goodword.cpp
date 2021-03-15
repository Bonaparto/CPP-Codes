#include <iostream>
using namespace std;
int main(){
    string s;
    cin >> s;
    int cnt = 0, cnt1 = 0, ans = 0;
    for(int i = 0; i < s.size(); ++i){
        if(s[i] != 'a' && s[i] != 'e' && s[i] != 'y' && s[i] != 'u' && s[i] != 'i' && s[i] != 'o'){
        cnt++; cnt1 = 0;}
        else{ cnt1++; cnt = 0;}
        if(cnt == 3){ ans++; cnt = 1;}
        if(cnt1 == 3){ ans++; cnt1 = 1;}
    }   
    cout << ans;
}