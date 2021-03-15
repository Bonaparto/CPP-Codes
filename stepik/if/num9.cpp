#include <iostream>
using namespace std;
int main(){
int x,y,x1,y1;
cin >> x >> y >> x1 >> y1;

if((x1 != x && y1 != y) && ((x1 - x) / (y1 - y) == 1) 
|| ((x1 - x) / (y1 - y) == -1)
|| ((n1 - n < 2 && m1 - m < 2) 
&& (n - n1 < 2 && m - m1 < 2))) cout << "YES";
else cout << "NO";
}