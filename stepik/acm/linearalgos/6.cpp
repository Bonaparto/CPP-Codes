#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n; string s; bool f = 0;
    cin >> n;
    if(n >= 10e7){
        cout << -1;
        return 0;
    }
    while(true){
        n++;
        if(n >= 10e7){
            cout << -1;
            return 0;
        }
        s = to_string(n);
        if(s.find('0') == -1 && s.find('2') == -1){
            for(int i = 0; i < s.length(); ++i){
                if(count(s.begin(), s.end(), s[i]) > 1) break;
                if(i == s.length() - 1) f = 1;
            }
            if(f){
                cout << n;
                return 0;
            }
        }
    }
}