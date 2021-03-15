#include <iostream>
using namespace std;
int main(){
    int sum1=0,sum2=0;
    string one;
    cin >> one;
    for(size_t i = 0; i < one.size(); ++i){
        if(i % 2 == 0) sum1 = sum1 + one[i] - 48;
        else sum2 = sum2 + one[i] - 48;
    } 
    if(sum2 == sum1) cout << "YES";
    else cout << "NO";
}