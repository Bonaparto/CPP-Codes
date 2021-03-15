#include <iostream>
#include <ctype.h>
using namespace std;

char ops(char n){
    return toupper(n);
}

int main(){
    char n;
    cin >> n;
    cout << ops(n);
}