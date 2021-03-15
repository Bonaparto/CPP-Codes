#include <iostream>
using namespace std;
int main(){

int x,y,x1,y1;
cin >> x >> y >> x1 >> y1;

if((x1 != x && y1 != y) && ((x1 - x) / (y1 - y) == 1 || (x1 - x) / (y1 - y) == -1)) cout << "YES";
else cout << "NO";
}