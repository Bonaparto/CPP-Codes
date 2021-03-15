#include <bits/stdc++.h>
using namespace std;
int rec(int a, float d, float c){
    cin >> a;
    if(a < 0){
        cout<<(c / (d + c) * 100) << " " << (d / (d + c) * 100);
        return 0;
    }
    if(a % 2 == 0 && a >= 0) c++;
    else if(a % 2 == 1 && a >= 0) d++;
    return rec(a,d,c); 
}
int main(){
    int a;
    rec(a,0,0);
}