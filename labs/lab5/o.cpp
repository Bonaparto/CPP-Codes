#include <iostream>
using namespace std;
int main(){
    string one;
    cin >> one;
    int max = one[0];
    for(size_t i = 0; i < one.size(); ++i){
        if(one[i] > max) max = one[i];
    }
    cout << char(max);
}