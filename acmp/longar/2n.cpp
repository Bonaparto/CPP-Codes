#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; long double a = 1;
    cin >> n;
    for(int i = 1; i <= n; ++i) a *= 2;
    cout << fixed << setprecision(0) << a;
}