#include <bits/stdc++.h>
using namespace std;

char FBB(string a, int x){
    if(x == a.size()) return '1';
    if(a[x] >= 65 && a[x] <= 91) return a[x];
    return FBB(a, x + 1);
}

int main(){
    string x;
    cin >> x;
    char a = FBB(x, 0);
    if(a == '1') cout << "-1";
    else cout << a;
}