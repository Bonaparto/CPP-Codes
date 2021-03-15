#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    if(n % 5 == 0) cout << n / 5 << " 0";
    if(n % 5 == 1) cout << (n - 6) / 5 << " 2";
    if(n % 5 == 2) cout << (n - 12) / 5 << " 4";
    if(n % 5 == 3) cout << (n - 3) / 5 << " 1";
    if(n % 5 == 4) cout << (n - 9) / 5 << " 3";
}