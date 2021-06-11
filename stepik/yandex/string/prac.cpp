#include <iostream>
#include <string>
using namespace std;
int main(){
    string n,l;    
    getline(cin, n);
    getline(cin, l);
    if(l.find("abcd") != string::npos)
    cout << l;
    else cout << n;
}