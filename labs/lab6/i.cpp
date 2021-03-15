#include <iostream>
#include <ctype.h>
using namespace std;

void op(string n){
    for(size_t i = 0; i < n.size(); ++i){
        if(i % 2 == 0){
            cout << char(toupper(n[i]));
        }
        else cout << n[i];
        }
    }

int main(){
    string n;
    getline(cin, n);
    op(n);
}