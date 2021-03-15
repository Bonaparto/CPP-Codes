#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector <int> a, b;
    for(int i = 0; i < n; ++i){
        int x;
        cin >> x;
        a.push_back(x);
        b.push_back(x);
    }
    reverse(a.begin(), a.end());
    for(int i = 0; i < n; ++i){
        if(b[i] == a[i]) cout << "OK";
        else cout << "Instead of " << b[i] << " here was " << a[i];
        cout << endl;
    }
}