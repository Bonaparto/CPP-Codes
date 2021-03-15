#include <bits/stdc++.h>
using namespace std;

string Kinary(int n, int k, string s){
    if(n == 0) return s;
    int l = n % k;
    if(l >= 10){
        char f = char(l + 55);
        s = f + s;
    }
    else{
        s = char(char(l) + 48) + s;
    }
    return Kinary(n / k, k, s);
}

int main(){
    int n,k;
    cin >> n >> k;
    cout << Kinary(n, k, "");
}