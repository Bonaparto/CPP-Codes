#include <iostream>
using namespace std;
int main(){
    int n, a, b, c, d;
    cin >> n >> a >> b >> c >> d;
    for(int i = 1; i < min(min(a,b), min(c,d)); ++i) cout << i << " ";
    for(int i = b; i >= a; --i) cout << i << " ";
    for(int i = d; i >= c; --i) cout << i << " ";
}