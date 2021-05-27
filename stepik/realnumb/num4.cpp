#include <iostream>
using namespace std;
int main(){
    int P, X, Y, sum;
    cin >> P >> X >> Y;
    sum = X * 100 + Y + ((X * 100 + Y) * P) / 100;
    cout << sum / 100 << " " << ((sum / 10) % 10) * 10 + sum % 10;
}