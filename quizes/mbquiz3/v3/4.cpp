#include <bits/stdc++.h>
using namespace std;
int main(){
    set <string> s;
    vector <string> a;
    vector <string> a1;
    string n; int cnt = 5;
    while(cnt > 0){
        cin >> n;
        if(cnt % 2 != 0){
            if(s.insert(n).second)
            a.push_back(n);
        }
        else{
            if(s.insert(n).second)
            a1.push_back(n);
        }
        cnt--; 
    }
    cout << "Aida" << endl;
    for(int i = 0; i < a.size(); ++i){
        cout << a[i] << endl;
    }
    cout << "Aizhan" << endl;
    for(int i = 0; i < a1.size(); ++i){
        cout << a1[i] << endl;
    }
}