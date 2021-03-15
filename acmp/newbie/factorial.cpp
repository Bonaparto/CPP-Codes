#include <bits/stdc++.h>
using namespace std;

long long Fact(int n){
    if(n == 0) return 1;
    if(n == 1) return 1;
    return Fact(n - 1) * n;
}

int main(){
    int n;
    cin >> n;
    cout << Fact(n);
}