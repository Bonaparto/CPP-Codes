#include <bits/stdc++.h>
using namespace std;

int Evens(string a, int cnt, int i){
    if(i >= a.size()){ return cnt;}
    else{
    if(a[i] % 2 == 0) cnt++;
    return Evens(a, cnt, i + 1);
    }   
}

int main(){
    string n;
    cin >> n;
    cout << Evens(n, 0, 0);
}