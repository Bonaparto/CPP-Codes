#include <iostream>
using namespace std;

string toseven(int n){
    string s = "";
    while(n != 0){
        s = char((n % 7) + 48) + s;
        n /= 7;
    }
    return s;
}

int main(){
    int n;
    cin >> n;
    cout << toseven(n);
}