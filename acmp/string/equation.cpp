#include <iostream>
using namespace std;
int main(){
    string s;
    cin >> s;
    int c = s[4] - '0', a = s[0] - 48, b = s[2] - 48;
    if(s[1] == '-'){
        if(s[4] == 'x'){
            cout << a - b;
            return 0;
        }
        if(s[0] == 'x'){
            cout << c + b;
            return 0;
        }
        else{
            cout << a - c;
            return 0;
        }
    }
    else{
        if(s[4] == 'x'){
            cout << a + b;
            return 0;
        }
        if(s[0] == 'x'){
            cout << c - b;
            return 0;
        }
        else{
            cout << c - a;
            return 0;
        }
    }
}