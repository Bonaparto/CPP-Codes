#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main(){
    int x = 1, a[100000], cnt = 0, sum = 0;
    double ans = 0, mean;
    while(x != 0){
        cin >> x;
        a[cnt] = x;
        cnt++;
        sum += x;
    }
    mean = double(sum) / (cnt - 1);
    for(int i = 0; i < cnt - 1; ++i){
        ans += pow(a[i] - mean, 2);
    }
    cout << setprecision(11) << fixed << sqrt(ans / (cnt - 2));
}