#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    map <char, pair <int,int> > m;
    for(int i = 0; i < n; ++i){
        char y; string s;
        cin >> y; getline(cin, s);
        int max = -1000000000, min = 1000000000;
        for(int j = 0; j < s.size(); ++j){
            if(s[j] >= '0' && s[j] <= '9'){
                if(s[j] > max) max = s[j];
                if(s[j] < min) min = s[j];
            }
        }
        m.insert({y, {min, max}});
    }
    map <char, pair <int,int> > :: iterator it;
    for(it = m.begin(); it != m.end(); ++it){
        cout << (*it).first << " " << ((*it).second.first - 48) << " "  << (*it).second.second - 48 << endl; 
    }  
}