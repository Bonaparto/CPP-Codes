#include <iostream>
using namespace std;
int main(){
    int A, B, C, D, E;
    cin >> A >> B >> C >> D >> E;
    if((A <= D && B <= E) || (A <= E && B <= D) || (A <= D && C <= E) || (C <= D && A <= E) || (B <= D && C <= E) || (C <= D && B <= E)) cout << "YES";
    else cout << "NO";
}