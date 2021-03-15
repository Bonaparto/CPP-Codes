#include <iostream>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    long double a = 0; long double b = 1;
    while(n != 0){
        a += (b * (n % 10));
        n /= 10;
        b *= 3;
    }
    long double a1 = 0; b = 1;
    while(m != 0){
        a1 += (b * (m % 10));
        m /= 10;
        b *= 3;
    }
    long double sum = a1 + a;
    cout << sum;
}