#include <iostream>
using namespace std;

double Power(double a, int n){
    if(n % 2 == 0){
        if(n == 0) return 1;
        return Power(a * a, n  / 2);
    }
    else return Power(a, n - 1) * a;
}

int main(){
    double a;
    int n;
    cin >> a >> n;;
    cout << Power(a,n);
}