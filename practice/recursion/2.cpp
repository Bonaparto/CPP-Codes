#include <bits/stdc++.h>
using namespace std;

string ToBinary(int n, string res){
    if(n == 0) return res;
    //cout << n % 2;
    return ToBinary(n / 2, char((n % 2) + 48) + res);
}

int main(){
    int n;
    cin >> n;
    cout << ToBinary(n, "");
}