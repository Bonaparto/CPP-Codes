#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, a, b, gcd;
    cin >> n;
    while(n--) {
        cin >> a >> b;
        gcd = __gcd(a,b);
        if(gcd > 1) cout << "Sim";
        else cout << "Nao";
        cout << endl;
    }
}