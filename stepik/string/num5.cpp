#include <bits/stdc++.h>
using namespace std;
int main(){
    string n,l;
    getline(cin, n);
    l = n;
    reverse(n.begin(), n.end());
    if(n == l) cout << "yes";
    else cout << "no";
}