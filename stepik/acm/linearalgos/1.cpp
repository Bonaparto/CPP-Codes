#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int n;
    cin >> n;
    long double sum = 0;
    while(n--){
        int x;
        cin >> x;
        sum += x;
    }
    cout << fixed << setprecision(0) << sum;
}