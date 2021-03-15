#include <iostream>
using namespace std;
int main(){
    string one;
    cin >> one;
    int l = one.size() - 1;
    bool c = 1;
    for(size_t i = 0; i < one.size(); ++i){
        if(one[i] != one[l]) c = 0;
        l--;
    } 
    if(c == 1) cout << "YES";
    else cout << "NO";
}