#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector <int> l(n);
    for(int i = 0; i < n; ++i){
        int x;
        cin >> x;
        l[i] = x;
    }
    sort(l.begin() + 2, l.end());
    for(int i = 0; i < l.size(); ++i){
        cout << l[i] << endl;
    }
}