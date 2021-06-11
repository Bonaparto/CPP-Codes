#include <iostream>
using namespace std;
int main(){

    int x,y,z;
    cin >> x >> y >> z;
    if(x >= y && x >= z && y >= z) cout << z << " " << y << " " << x;
    else if(x >= y && x >= z && z >= y) cout << y << " " << z << " " << x;
    else if(y >= x && y >= z && x >= z) cout << z << " " << x << " " << y;
    else if(y >= x && y >= z && z >= x) cout << x << " " << z << " " << y;
    else if(z >= x && z >= y && x >= y) cout << y << " " << x << " " << z;
    else if(z >= x && z >= y && y >= x) cout << x << " " << y << " " << z;   
}