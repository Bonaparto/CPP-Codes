#include <bits/stdc++.h>
using namespace std;

int n;

int vinci(int x, int y, int cnt){
    if(cnt == n) return 0;
    cout << y << " ";
    y += x;
    x = y - x;
    return vinci(x, y, cnt + 1);
}

int main(){
    cin >> n;
    vinci(0, 1, 0);
}