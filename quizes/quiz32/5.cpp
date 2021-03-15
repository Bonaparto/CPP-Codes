#include <bits/stdc++.h>
using namespace std;

int Formula(int n, int cnt){
    if(n == 1) return cnt;
    int x = 0;
    for(int i = n - 1; i >= 1; --i){
        if(n % i == 0){
            cnt++;
            if(x == 0) x = i;
        }
    }
    return Formula(x, cnt);
}

int main(){
    int n;
    cin >> n;
    cout << Formula(n, 0) + 1;
}