#include <iostream>
using namespace std;
int main(){
    int n; cin >> n;
    for(int i = 0; i < n; ++i){
        int x; cin >> x;
        string s; cin >> s;
        int l = 0;
        for(int j = 0; j < x; ++j){
            if(s[j] == '0') l += 90;
            if(s[j] == '1') l -= 90;
        }
        l %= 360;
        if(l == 0) cout << 'E' << endl;
        if(l == -270 || l == 90) cout << 'S' << endl;
        if(l == -180 || l == 180) cout << 'W' << endl;
        if(l == -90 || l == 270) cout << 'N' << endl;
    }
}