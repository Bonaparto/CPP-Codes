#include <iostream>
using namespace std;
int main(){
    string s, subs;
    cin >> s >> subs;
    int x = -1;
    for(int i = 28; i >= 0; --i){
        string sub1 = subs;
        for(int j = 0; j < subs.size(); ++j){
            if(sub1[j] + i > 90) sub1[j] = char((sub1[j] + i) % 91 + 'A');
            else sub1[j] = char(sub1[j] + i);
        }
        if(s.find(sub1) != string::npos){
            x = i % 27;
        }
    }
    if(x == -1){
        cout << "IMPOSSIBLE";
        return 0;
    }
    for(int i = 0; i < s.size(); ++i){
        if(s[i] - x < 'A') s[i] = char('Z' + 1 - ('A' - s[i] + x));
        else s[i] = char(s[i] - x);
    }
    cout << s;
}