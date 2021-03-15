#include <bits/stdc++.h>
using namespace std;

int max = 0;

int MaxDig(string n,int max,int i){
    if(i == n.size()) return max - 48;
    if(max < n[i]) max = n[i];
    return MaxDig(n, max, i + 1);   
}

int main(){
    string n;
    cin >> n;
    cout << MaxDig(n,0,0);
}