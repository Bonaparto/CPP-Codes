#include <iostream>
using namespace std;
int main(){
    int a, b, a1, b1, s1, s2, s3, s4, s;
    cin >> a >> b >> a1 >> b1;
    s1 = (a + a1) * max(b, b1);
    s2 = (a + b1) * max(a1, b);
    s3 = (b + a1) * max(a, b1);
    s4 = (b + b1) * max(a, a1);
    s = min(min(min(s3, s4), s2), s1);
    if(s == s1) cout << (a + a1) << " " << max(b, b1);
    else if(s == s2) cout << (a + b1) << " " << max(a1, 1);
    else if(s == s3) cout << (b + a1) << " " << max(a, b1);
    else cout << (b + b1) << " " << max(a, a1);
}