#include <iostream>
using namespace std;

int Sum(){
    int n;
    cin >> n;
    if(n != 0) return n + Sum();
}

int main(){
    cout << Sum();
}