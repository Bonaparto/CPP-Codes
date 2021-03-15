#include <iostream>
using namespace std;

bool possibility(int a, int b, int x, int y){
    return x + y >= a + b;
}

int main(){
    int a, b, x , y;
    cin >> a >> b >> x >> y;
    cout << (possibility(a, b, x, y)? "Thanks, Nurbek":"Impossible");
}