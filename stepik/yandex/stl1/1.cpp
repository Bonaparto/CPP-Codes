#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    set <int> l;
    for(int i = 0; i < n; ++i){
        int x;
        cin >> x;
        l.insert(x);
    }
    cout << l.size();
}