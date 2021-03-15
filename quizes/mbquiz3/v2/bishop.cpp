#include <iostream>
using namespace std;

bool bishop(int x, int x1, int y, int y1){
    return ((x + y1 == x1 + y) || (x - y1 == x1 - y));
}

int main(){
    int x, x1, y, y1;
    cin >> x >> y >> x1 >> y1;
    cout << (bishop(x,x1,y,y1)? "YES":"NO");
}