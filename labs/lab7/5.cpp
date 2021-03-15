#include <bits/stdc++.h>
using namespace std;

int cnt = 0;

int Divider(int n, int cnt){
   if(n == 0) return cnt - 1;
   return Divider(n / 2, cnt + 1);
}

int main(){
    int n;
    cin >> n;
    cnt = Divider(n, 0);
    if(pow(2, cnt) == n) cout << "Yes";
    else cout << "No";
}