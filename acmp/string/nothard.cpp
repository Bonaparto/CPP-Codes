#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, k;
    cin >> n >> k;
    string s;
    while(n != 0){
        s = char(n % k + 48) + s;
        n /= k;
    }
    int a = 1, b = 0;
    for(int i = 0; i < s.size(); ++i){
        a *= (s[i] - 48);
        b += (s[i] - 48);
    }
    cout << a - b;
}
