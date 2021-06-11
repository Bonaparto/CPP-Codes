#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, cnt = 0;
    cin >> n;
    set <string> s;
    for(int i = 0; i < n; ++i){
        string x, y; cin >> x;
        s.insert(x);
        for(int j = 0; j < x.size(); ++j){
            y += tolower(x[j]);
        }
        s.insert(y);
    }
    if(s.empty()){
        cout << 0;
        return 0;
    }
    string ss, x, a = ""; getline(cin, x); getline(cin, ss);
    if(ss.size() == 0){
        cout << 0;
        return 0;
    }
    vector <string> v;
    for(int i = 0; i < ss.size(); ++i){
        if(ss[i] == ' '){
            v.push_back(a);
            a.clear();
            continue;
        }
        if(i == ss.size() - 1){
            a += ss[i];
            v.push_back(a);
        }
        a += ss[i];
    }
    
    for(int i = 0; i < v.size(); ++i){
        if(s.find(v[i]) != s.end()){
            cout << v[i] << endl;
            string g = "";
            for(int j = 0; j < v[i].size(); ++j){
                g += tolower(v[i][j]);
            }
            cout << g << endl;
            if(s.find(g) != s.end()) cnt++;
        } 
        else{
            int cnt1 = 0;
            for(int k = 0; k < v[i].size(); ++k){
                if(v[i][k] <= 'z' && v[i][k] >= 'a') cnt1++;
            }
            if(cnt1 == v[i].size()){
                cnt++; continue;
            }
            cnt1 = 0;
            for(int k = 0; k < v[i].size(); ++k){
                if(v[i][k] <= 'Z' && v[i][k] >= 'A') cnt1++;
                if(cnt1 == 2){cnt++; break;}
            }
        }
    }
    cout << cnt;
}