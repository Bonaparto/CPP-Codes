#include <iostream>
using namespace std;
int main(){
    float n, z = 100;
    cin >> n;
    float a = n;
    for(int i = 0;; ++i){
        a += a * 0.2;
        z += 0.5 * z;
        if(a / n >= 10){
            cout << "bankroot";
            return 0;
        }
        if(a <= z){
            cout << "you won";
            return 0;
        }
    }
}