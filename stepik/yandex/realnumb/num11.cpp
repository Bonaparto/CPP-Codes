#include <iostream>
using namespace std;
int main(){
    double a, b, c, d, e, f, x, y;
    cin >> a >> b >> c >> d >> e >> f;
    cout << (e * d - b * f) / (a * d - b * c ) << " " << (a * f - e * c) / (a * d - b * c );
}