#include <bits/stdc++.h>
using namespace std;
int main(){
    int a, b, c;
    cin >> a >> b >> c;
    vector <int> v;
    for(int i = 1; i <= max(a,b); ++i){
        if(a % i == 0 && b % i == 0)
        v.push_back(i);
    }
    if(v.size() == 1){
        cout << v[0];
        return 0;
    }
    sort(v.begin(), v.end(), greater <int>());
    cout << v[c - 1];
}