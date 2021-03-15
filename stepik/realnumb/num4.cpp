#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int main(){
    int P;
    double R = 0,K,X,Y,X1,X2,Y1,Y2,sumK,sumK1;
    cin >> P >> X >> Y;
    X1 = X * P / 100;
    Y1 = Y * P / 100;
    Y2 = (X1 - trunc(X1)) * 100;
    sumK = Y + Y1 + Y2;
        while(sumK > 100){
            sumK -= 100;
            R++;
        }
    X2 = trunc(X1) + X + R;
    if(floor(sumK) == trunc(sumK)){
        sumK++;
        cout << X2 << " " << floor(sumK);
    }
    else cout << X2 << " " << trunc(sumK);
}