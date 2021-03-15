#include <iostream>
using namespace std;

int ops(int one){
    int sum = 0;
    int rem = one % 10;
    while(one != 0){
        sum = sum + one % 10;
        one = one / 10;
    }
    if(sum % rem == 0) return 0;
    else return 1;
}

int main(){
    int n;
    cin >> n;
    int l = ops(n);
    if(l == 1) cout << "NO";
    else cout << "YES";
}