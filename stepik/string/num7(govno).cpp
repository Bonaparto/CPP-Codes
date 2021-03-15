#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    for(size_t i = 0; i < s.size(); ++i){
        if((s[i] == '.' && (s[i] == s[i-1] && i != 0))
        || (s[i] == '0' && (s[i] == s[i-1] && i != 0))){
            cout << "NO";
            return 0;
        }
        else if(s[i] != '.' && (s[i] > 57 || s[i] < 48)){
            cout << "NO";
            return 0;
        }
        else if(i == s.size() - 1 && s[i] == '.'){
            cout << "NO";
            return 0;
        }
    }
    int l = 0,f = 0;
    for(size_t i = 0; i < s.size(); ++i){
        if(s[i] == '.' || i == s.size() - 1){
            if(i - l == 3 || i - l == 4){
                if(s[l] == '1'){
                    for(int j = l; j < i; ++j){
                        f = f + int(s[j]);
                        if(f > 163){
                        cout << "NO";
                        return 0;
                        }
                    } 
                }
                else if(s[l] == '2'){
                    for(int j = l; j < i; ++j){
                        f = f + int(s[j]);
                        if(f > 156){
                        cout << "NO";
                        return 0;
                        }
                    }
                }
                else if(s[l] == '.' && s[l+1] == '1'){
                    for(int j = l + 1; j < i; ++j){
                        f = f + int(s[j]);
                        if(f > 163){
                        cout << "NO";
                        return 0;
                        }
                    } 
                }
                else if(s[l] == '.' && s[l+1] == '2'){
                    for(int k = l + 1; k < i; ++k){
                        f = f + int(s[k]);
                        if(f > 156){
                            cout << "NO";
                            return 0;
                        }
                    }
                }
                else if(s[l] == '.' && (s[l+1] != '1' || s[l+1] != '2')){
                    cout << "NO";
                    return 0;
                }
            }
            if(l == 0 && i >= 4){
                cout << "NO";
                return 0;
            }
            if(i - l - 1 >= 4 && i != s.size() - 1){
                cout << "NO";
                return 0;
            }
            if(i - l >= 4 && i == s.size() - 1){
                cout << "NO";
                return 0;
            }
            l = i;
            }
        }
    cout << "YES";
}