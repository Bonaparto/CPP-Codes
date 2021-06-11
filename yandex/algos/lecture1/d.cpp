#include <iostream>
using namespace std;
int main(){
    int a, b, c;
    cin >> a >> b >> c;
    if(c * c == b && a == 0) cout << "MANY SOLUTIONS";
    else {
        if(a != 0 && !((c * c - b) % a) && c >= 0) cout << (c * c - b) / a;
        else cout << "NO SOLUTION";
    }  
}