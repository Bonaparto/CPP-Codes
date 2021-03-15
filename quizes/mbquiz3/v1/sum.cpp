#include <bits/stdc++.h>
using namespace std;

int perc(int a, int cnt){
    if(a == cnt) return cnt;
    else if(a > 0) return perc(a, ++cnt);
    else if(a < 0) return perc(a, --cnt);
}

int perc1(int b, int cnt1){
    if(b == cnt1) return cnt1;
    else if(b > 0) return perc1(b, ++cnt1);
    else if(b < 0) return perc1(b, --cnt1); 
}

int main(){
    int a, b;
    cin >> a >> b;
    cout << (perc(a,0) + perc1(b,0));
}