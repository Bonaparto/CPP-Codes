#include <iostream>
using namespace std;

int main() {

freeopen ("input.txt", "r", stdin);
freeopen ("output.txt", "w", stdout);

int x,y;

cin >> x >> y;
cout << x + y;

    return 0;
}
