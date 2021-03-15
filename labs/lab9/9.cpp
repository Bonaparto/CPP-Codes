#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    queue <string> users;
    vector <string> l;
    for(int i = 0; i < n; ++i){
        string x;
        cin >> x;
        users.push(x);
    }
    for(int i = 0; i < n; ++i){
        l.push_back(users.front());
        int cnt = 0;
        for(int j = 0; j < l.size(); ++j){
            if(l[j] == users.front()) cnt++;
        }
        users.pop();
        if(cnt > 1){
            cout << "user already exists" << endl;
            continue;
        }    
        cout << "new user added" << endl;
    }
}