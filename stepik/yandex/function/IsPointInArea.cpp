#include <bits/stdc++.h>
using namespace std;

bool IsPointInArea(double x, double y){
    return((pow((x + 1),2) + pow((y - 1),2) <= 4)
    && (x * -1 <= y) && (2 * x + 2 <= y)) || 
    ((pow((x + 1),2) + pow((y - 1),2) >= 4) && 
    (x * -1 >= y) && (2 * x + 2 >= y));
}

int main(){
    double x,y;
    cin >> x >> y;
    cout << (IsPointInArea(x,y)?"YES":"NO");
}