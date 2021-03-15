#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; ++i){
        string s, s1;
        cin >> s >> s1;
        if(s == s1){
            cout << s << endl;
            continue;
        }
        int a = s.length(), b = s1.length();
        if(a >= b){
            string l = s;
            while(s.length() % s1.length() != 0) s += l;           
            bool x = 1;
            for(int i = 0; i < s.length(); i += b){
                if(s.substr(i, b) != s1){
                    cout << -1 << endl;
                    x = 0;
                    break;
                }
            }
            if(x) cout << s << endl;
            
            
        }
        else{
            string l = s1;
            while(s1.length() % s.length() != 0) s1 += l;
            bool x = 1;
                for(int i = 0; i < s1.length(); i += a){         
                    if(s1.substr(i, a) != s){
                        cout << -1 << endl;
                        x = 0;
                        break;
                    }
                }
            if(x) cout << s1 << endl;
        }
    }
}