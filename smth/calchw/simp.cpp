#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main(){
    double n, m, sum = 0;
    double e = 2.7182818284;
    cin >> n >> m;
    for(int i = 2; i <= n; ++i){
        if(i == n){
            sum += log(i);
            break;
        }
        if(i % 2 == 0) sum += 4*log(i);
        else sum += 2*log(i);
    }
    cout << fixed << setprecision(10);
    cout << sum / 3 << endl;
    if(m == 1) cout << abs(sum / 3 - 1.5451);
    if(m == 2) cout << abs(sum / 3 - 6.6213);
    if(m == 3) cout << abs(sum / 3 - 365.127);
}