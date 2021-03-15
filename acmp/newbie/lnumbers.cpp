#include <iostream>
using namespace std;

int n;

void luckyn(int a){
    if(a > n) return;
    int b = a;
    while(1){
        int x = a % 10;
        if(x != 4 && x != 7) break;
        if(a < 10) cout << b << endl;
        a /= 10;
    }
    return luckyn(b + 1);
}

int main(){
    cin >> n;
    luckyn(0);
}