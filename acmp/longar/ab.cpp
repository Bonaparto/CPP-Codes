#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    long double a, b, multiply;
    cin >> a >> b;
    multiply = a * b;
    cout << fixed << setprecision(0) << multiply;
}