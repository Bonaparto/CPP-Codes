// сдвиги в бинарной системе (<< , >>)

#include <iostream>
using namespace std;

int main() {

int n,k;

cin >> n >> k;

cout << (n << k) << endl;
// n * pov(2 , k)

cout << (n >> k) << endl;

    return 0;
}