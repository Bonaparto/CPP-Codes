#include <iostream>
#include <queue>
using namespace std;

void solve(){
    string s;
    cin >> s;
    int a = 0, b = 0, c = 0;
    for(int i = 0; i < s.size(); ++i){
        if(s[i] == s[0]) a++;
        else if(s[i] == s[s.length()-1]) b++;
        else c++;
    }
    if(s[0] == s[s.length()-1] || (a + b != c && a + c != b && c + b != a)){
        cout << "no" << endl;
        return;
    }
    if(a > b) c = -1;
    if(a == b && c != 0){
        cout << "no" << endl;
        return; 
    }
    if(a < b) c = 1;
    int cnt = 0;
    for(int i = 0; i < s.length(); ++i){
        if(s[i] == s[0]) cnt++;
        else if(s[i] == s[s.length()-1]) cnt--;
        else cnt += c;
        if(cnt < 0){
            cout << "no" << endl;
            return;
        }
    }
    if(cnt != 0) cout << "no" << endl;
    else cout << "yes" << endl;
} 

int main(){
    ios_base::sync_with_stdio();
    cin.tie(0);
    int n;
    cin >> n;
    while(n--) solve();
}