#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int a,pr = 0,n = 0;
    double ans,sum;
    cin >> a;
    pr = a;
    while(a != 0){
        cin >> a;
        sum += pr;
        pr = a;
        n++;
    } ans = sum / n;
    cout << fixed << setprecision(11);
    cout << ans;
}