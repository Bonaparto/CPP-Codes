#include <iostream>
using namespace std;    
int main() {
  int x,y,x1,y1;
    cin >> x >> y >> x1 >> y1;

    if((x1 - x) * (x1 - x) + (y1 - y) * (y1 -y) == 5)
    cout << "YES";
    else cout << "NO";
}