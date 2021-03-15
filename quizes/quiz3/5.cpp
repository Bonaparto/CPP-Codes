#include <bits/stdc++.h>
using namespace std;



int main(){
    int n;
    cin >> n;
    set <int> s;
    for(int i = 0; i < n; ++i){
        int x;
        cin >> x;
        if(!s.insert(x).second){
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
}