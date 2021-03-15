#include <iostream>
using namespace std;
int main(){

int N;
cin >> N;
if(N - 1 == 0) cout << "0";
else if(N % 2 == 0) cout << N / 2;
else if((N - 1) % 2 == 0) cout << N;
}