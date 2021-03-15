#include <bits/stdc++.h>
using namespace std;

bool IsPointInCircle(int x, int y, int x1, int y1, int r){
    return(pow((x - x1),2) + pow((y - y1),2) <= r);
}

int main(){
    double x,y,xc,yc,r;
    cin >> x >> y >> xc >> yc >> r;
    cout << (IsPointInCircle(x,y,xc,yc,r)?"YES":"NO");
}