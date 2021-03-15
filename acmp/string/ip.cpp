#include <iostream>
using namespace std;
int main(){
    string s;
    cin >> s;
    int a[4] = {0}, b = 0, cnt = 0;
    if(s[s.size() - 1] == '.'){
        cout << "Bad"; return 0;
    }
    for(int i = 0; i < s.size(); ++i){
        if(s[i] != '.') cnt++;
        if(s[i] == '.' && cnt == 0){
            cout << "Bad"; return 0;
        }
        if(s[i] == '.') cnt = 0;
    }
    cnt = 1;
    for(int i = s.size() - 1; i >= 0; --i){
        if(s[i] == '.'){
            b++; cnt = 1; continue;
        }
        a[b] += cnt * (s[i] - 48); cnt *= 10;
        if(a[b] > 255){
            cout << "Bad"; return 0;
        }
    }
    cout << "Good";
}