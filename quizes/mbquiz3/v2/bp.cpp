#include <iostream>
#include <cmath>
using namespace std;

bool IsPointInRectangle(int x, int y, int x1, int y1, int x2, int y2){
    return(abs(x2) <= abs(x-x1) && abs(y2) <= abs(y-y1));
}

int main(){
    int x,y,x1,y1,x2,y2;
    cin >> x >> y >> x1 >> y1 >> x2 >> y2;
    cout << (IsPointInRectangle(x, y, x1, y1, x2, y2)?"yes":"no");
}