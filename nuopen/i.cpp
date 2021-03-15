#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double n, x;
    cin >> n >> x;
    cout << ceil(x /(n - 1)) << " " << floor(x /(n - 1));
}