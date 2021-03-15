#include <iostream>
#include <algorithm>
using namespace std;

void solve(){
    int n, max = 0; string s = "", ans = "";
    cin >> n;
    string b[n+1];
    for(int i = 0; i < n; ++i){
        int x; cin >> x; bool a = 0;
        if(x > max){
            max = x;
            b[i] = s;
            s = "";
            a = 1;
        }
        s += to_string(x) + " ";
        if(!a && i == n - 1){
            b[i+1] = s;
        }
        if(i == n - 1 && b[i+1].find(to_string(x)) == string::npos) b[i+1] += to_string(x) + " ";
    }
    for(int i = n; i >= 0; --i){
        if(b[i] != "") cout << b[i];
    }
    cout << endl;
}

int main(){
    ios_base::sync_with_stdio();
    cin.tie(0);
    int n;
    cin >> n;
    while(n--) solve();
}