#include <iostream>
using namespace std;

bool IsPointInSquare(double x,double y){
    if(x > 1 || x < -1 || y > 1 || y < -1) return false;
    else return true;
}

int main(){
    double a,b;
    cin >> a >> b;
    IsPointInSquare(a,b)?cout << "YES":cout << "NO";
}