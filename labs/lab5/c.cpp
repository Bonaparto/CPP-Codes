#include <iostream>
using namespace std;
int main(){
    string one,two;
    cin >> one >> two;
    if(one.find(two) != string::npos)
        cout << "YES";
    else cout << "NO";
}           