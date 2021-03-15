#include <iostream>
#include <cmath>
using namespace std;

int ops(int one){
    one = abs(one);
    return one;
}

int main(){
    int n;
    cin >> n;
    cout << ops(n);
}