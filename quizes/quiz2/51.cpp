#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int a[s.size()] = {0};
    for(size_t i = 0; i < s.size(); ++i){
        a[int(s[i]) - 48]++;
    }
    for(int i = 0; i < s.size(); ++i){
        if(a[i] != 0) cout << i << ":" << a[i] << endl;
    }
}