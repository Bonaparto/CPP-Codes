#include <iostream>
using namespace std;
int main(){
    string one;
    cin >> one;
    if(int(one[0]) > 47 && int(one[0]) < 58)
    cout << "yes";
    else cout << "no";
}