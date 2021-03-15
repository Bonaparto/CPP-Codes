#include <iostream>
using namespace std;
int main(){
    unsigned long long n, x, c, d;
    cin >> n >> x;
    if(n > x) cout << 1 << " " << 1;
    else if(n == x) cout << n << " " << n + 1;
    else if(n < x){
        if(x % (n - 1) == 0) c = x / (n - 1); else c = x / (n - 1) + 1 ; 
        if(x % (n - 1) == 0) d = x /(n - 1) + (x /(n - 1) - 1); else d = x /(n - 1) + 1 + (x / (n - 1));
        cout << c << " " << d;
    }    
}