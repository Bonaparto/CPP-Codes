#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void count(int a,int b){
    cout << setprecision(4) <<
    sqrt(a*a + b*b);
}

int main(){
    int n,l;
    cin >> n >> l;
    count(n,l);
}