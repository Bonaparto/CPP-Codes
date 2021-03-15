#include <iostream>
using namespace std;

int main() {

int N,M,M1,M2;

cin >> N >> M;

M1 = M / 100;

M2 = M % 10;

cout << N + M1 + M2;

return 0;

}