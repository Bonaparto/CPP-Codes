#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int a, b, n;
    cin >> a >> b >> n;
    int c[n][4];
    int S = a * b;
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < 3; ++j){
            cin >> c[i][j];
        }
    }   
    for(int i = 0; i < n; ++i){
        S = S - ((c[i][3] - c[i][1]) * (c[i][2] - c[i][0]));
    }
    cout << S;
}