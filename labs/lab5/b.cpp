#include <iostream>
using namespace std;
int main(){
    string one;
    cin >> one;
    for(size_t i = 0; i < one.size(); ++i){
        if(int(one[i]) >= 97)
        one[i] = one[i] - 32;
    } cout << one;
}