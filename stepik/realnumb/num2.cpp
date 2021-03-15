#include <iostream>
#include <math.h>
using namespace std;
int main(){
    double n;
    cin >> n;
    int l = floor(n) * 10;
    if(n >= 1){
    n *= 10;
    cout << floor(n - l);
    }
    else cout << floor(n * 10);
}