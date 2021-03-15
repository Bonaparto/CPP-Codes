#include <iostream>
using namespace std;
int main() {
    
int H,A,B,M,K;
cin >> H >> A >> B;

    if(A >= H) cout << "1";
    else if(A <= B) cout << "NO";
    else{
        M = H - A;
        K = (M + (A - B) - 1) / (A - B);
        cout << K + 1;
    }
}
