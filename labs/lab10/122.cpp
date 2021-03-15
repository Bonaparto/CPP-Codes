#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector <int> v;
    vector <string> v1;
    for(int i = 0; i < n; ++i){
        string x; int y;
        cin >> x >> y;
        v.push_back(y);
        v1.push_back(x);
    }
    sort(v.begin(), v.end());
    sort(v1.begin(), v1.end());
    for(int i = 0; i < n; ++i){
        cout << v1[i] << " " << v[i] << endl;
    }
}