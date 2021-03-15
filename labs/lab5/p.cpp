#include <iostream>
using namespace std;
int main(){
    string one;
    cin >> one;
    for(size_t i = 0; i < one.size(); ++i){
        one[i]++;
        if(int(one[i]) == 123) cout << "a";
        else cout << char(one[i]);
    }
}