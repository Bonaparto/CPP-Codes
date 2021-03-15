#include <iostream>

using namespace std;

int main() {
 
int n,m;

m = 0;

cin >> n;

for(int x = 1;x <= n;x = 1 + x){

m = m + x;
}

cout << m << endl;


return 0;

}