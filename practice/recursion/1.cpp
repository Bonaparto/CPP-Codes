// two in degree n
#include <bits/stdc++.h>
using namespace std;

int f(int n){
    if(n == 0) return 1;
    return f(n-1) * 2;
}

int main(){
    int n;
    cin >> n;
    cout << f(n);
}