#include <bits/stdc++.h>
using namespace std;



int main(){
    string n, m;
    cin >> n >> m;
    for(int i = 0; i < n.size(); ++i){
        string l = n;
        rotate(l.begin(), l.begin() + i, l.end());
        if(l == m){
            if(i == 0){
                cout << 0;
                return 0;
            }
            cout << n.size() - i;
            return 0;
        }
    }
    cout << "Understandable have a nice day";
}