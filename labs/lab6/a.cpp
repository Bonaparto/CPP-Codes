#include <iostream>
using namespace std;

int sum(int a, int b){
    int c = a + b;
    return c;
}

int main(){
    int n,n1;
    cin >> n >> n1;
    cout << sum(n,n1) << endl;
}