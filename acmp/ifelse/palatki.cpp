#include <iostream>
using namespace std;
int main(){
    int N, W, a1, b1, a2, b2, a3, b3;
    cin >> N >> W >> a1 >> b1 >> a2 >> b2 >> a3 >> b3;
    if((a1 <= W && b1 >= N) || (a2 <= W && b2 >= N) || (a3 <= W && b3 >= N) || (a1 + a2 <= W && b1 + b2 >= N) || (a3 + a2 <= W && b3 + b2 >= N) || (a1 + a3 <= W && b1 + b3 >= N)
    || (a1 + a2 + a3 <= W && b1 + b2 + b3 >= N)) cout << "YES";
    else cout << "NO";
}