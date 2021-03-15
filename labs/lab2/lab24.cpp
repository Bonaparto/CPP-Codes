#include <iostream>
using namespace std;

int main () {

int n,k;

cin >> n >> k;

if ((n < k) && (n = k)){

cout << "2";
}

else if ((n > k) && (((2 * n) % k) == 0)){

    cout << (2 * n / k); 
}

else if ((n > k) && ((2 * n) % k != 0)) {

    cout << (2 * (n / k) + 2); 
}

    return 0;
}