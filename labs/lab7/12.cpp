#include <bits/stdc++.h>
using namespace std;

bool res = true;

int PalOrNot(string n,int i){
    if(i == n.size()){ return res;}
    if(n[i] != n[n.size() - 1 - i]){ res = false;}
    return PalOrNot(n, i + 1);   
}

int main(){
    string n;
    cin >> n;
    PalOrNot(n,0)? cout << "Yes":cout << "No";
}