#include <iostream>
using namespace std;

bool winner(int n){
    for(int i = 1; n > 0; ++i){
        n -= i;
        if (n <= 0) return 0;
        n -= 2 * i;
        if(n <= 0) return 1;
    }    
}

int main(){
    int n;
    cin >> n;
    cout <<(winner(n)?"Nelson":"Bob");
}