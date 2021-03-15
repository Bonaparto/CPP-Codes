#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main(){
    double n, m, sum = 0;
    double e = 2.7182818284;
    cin >> n >> m;
    for(double i = 2; i <= n; ++i){
        sum += log(i);
    }
    cout << fixed << setprecision(10);
    cout << sum << endl;
    if(m == 1) cout << abs(sum - 1.5451);
    if(m == 2) cout << abs(sum - 6.6213);
    if(m == 3) cout << abs(sum - 365.127);
}