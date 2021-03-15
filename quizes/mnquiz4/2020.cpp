#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i = n + 1;;++i){
        int a, b, c, d;
        a = i % 10;
        b = (i / 10) % 10;
        c = (i / 100) % 10;
        d = (i / 1000) % 10;
        if(a != b && a != c && a != d && b != c && b != d && c != d){
            cout << d * 1000 + c * 100 + b * 10 + a;
            return 0;
        }
    }
}