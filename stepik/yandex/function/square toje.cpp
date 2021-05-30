#include <bits/stdc++.h>
using namespace std;

bool IsPointInSquare(double a, double b){
    return (abs(a) + abs(b) <= 1);
}

int main(){
    double x,y;
    cin >> x >> y;
    IsPointInSquare(x,y)?cout << "YES": cout << "NO";
}