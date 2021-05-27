#include <iostream>
using namespace std;
int main(){
    int P, X, Y, sum, K;
    cin >> P >> X >> Y >> K;
    sum = X * 100 + Y;
    while(K--){
        sum += (sum * P) / 100;
    }
    cout << sum / 100 << " " << ((sum / 10) % 10) * 10 + sum % 10;
}