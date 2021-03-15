#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    map <string, string> f;
    vector <string> c;
    string s;
    for(int i = 0; i < n * 2; ++i){
        if(i % 2 == 0) cin >> s;
        else{
            string l;
            cin >> l;
            f.insert(make_pair(s, l));
        }
   }
   int x;
   cin >> x;
   string k;
   map <string, string> :: iterator it;
   for(int i = 0; i < x * 2; ++i){
        if(i % 2 == 0) cin >> k;
        else{
            int cnt = 0, cnt1 = 0;
            string l;
            cin >> l;
            for(it = f.begin(); it != f.end(); ++it){
                if(k == (*it).first){
                    if(l == (*it).second){
                        c.push_back("correct password");
                        cnt++;
                        break;
                    }
                    else{
                        cnt++;
                        c.push_back("password error");
                        break;
                    }
                }
                if(l == (*it).second){
                    cnt1++;
                    c.push_back("login error");
                    break;
                }
            }
            if(cnt == cnt1 && cnt == 0) c.push_back("login error");
        }
    }
    for(int i = 0; i < c.size(); ++i){
        cout << c[i] << endl;
    }
}