#include <iostream>
using namespace std;

void op(int n){
    int sum = 0;
    while(n != 0){
        sum = sum + (n % 10);
        n /= 10;
    }
    cout << sum;
}

int main(){
    int n;
    cin >> n;
    op(n);
}