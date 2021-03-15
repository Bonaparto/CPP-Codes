#include <iostream>
using namespace std;
int main(){

int n;
cin >> n;
string s = " ";
    while(n--){
    cout << s << "*" << endl;
    s = s + "-";
    }
}