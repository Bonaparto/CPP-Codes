#include <bits/stdc++.h>
using namespace std;

char firstL(string x, int y){
    if(y == x.size()) return '1';
    if(x[y] >= 'A' && x[y] <= 'Z') return x[y];
    return firstL(x, y + 1);
}

int main(){
    string x;
    cin >> x;
    if(firstL(x, 0) != '1') cout << firstL(x, 0);
    else cout << "-1";
}