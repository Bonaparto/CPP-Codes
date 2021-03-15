#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    string l;
    cin >> n;
    string f[n];
    getline(cin, l);
    for(int i = 0; i < n; ++i){
        getline(cin, l);
        f[i] = l;
    }
    string r;
    for(int i = 0; i < n; ++i){
        r = f[i];
        cout << r[0] << r.size() - 2 << r[r.size() - 1] << endl;
    }
}