#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int a,b,sum,k;
    cin >> a >> b;
    cout << __gcd(a,b) << endl;;
    for(;;){
        k = a / b;
        sum = a % b;
        a = b;
        b = sum;
        cout << k << " ";
        if (sum == 0) break;
    }   
    cout << "0";
}