#include <iostream>
using namespace std;
int main(){
    int L, R, X;
    //cin >> X;
    L=1; R=100;
    while(L < R){
        X = (L + R)/2;
        //cout << X << endl;
        if(X > L) L = X + 1;
        else R = X;
        cout << R << " " << L << endl;
    }
    cout << R;
}