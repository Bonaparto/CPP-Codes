#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    string s = "";
    while(n != 0){
        s = char(n % 2 + 48) + s;
        n /= 2;
    }
    int a = 1, x = 0;
    for(int i = 0; i < s.length(); ++i){
        x += a * (s[i] - 48);
        a *= 2;
    }
    cout << x;
}