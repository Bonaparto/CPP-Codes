#include <iostream>
using namespace std;

void op(int n){
    if(n % 2 != 0 || n % 10 == 0)
        cout << "Not valid";
    else{
        while(n / 10 != 0){
            if(n % 2 != 0){
                cout << "Not valid";
                break;
            }
            n /= 10;
        }
        if(n / 10 == 0) cout << "Valid";
    }
    
}

int main(){
    int n;
    cin >> n;
    op(n);
}