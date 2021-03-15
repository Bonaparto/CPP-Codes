#include <iostream>
using namespace std;
int main(){
    int cnt=0;
    string one;
    cin >> one;
    for(size_t i = 0; i < one.size(); ++i){
        if(one[i] == 97 || one[i] == 101
        || one[i] == 105 || one[i] == 111
        || one[i] == 117) cnt++;
    } cout << cnt;
}