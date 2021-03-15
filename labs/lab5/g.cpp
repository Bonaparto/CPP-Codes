#include <iostream>
using namespace std;
int main(){
    int sum1=0,sum2=0;
    string one,two;
    cin >> one >> two;
    for(size_t i = 0; i < one.size(); ++i){
        sum1 = sum1 + one[i];
    }
    for(size_t i = 0; i < two.size(); ++i){
        sum2 = sum2 + two[i];
    }
    if(sum1 == sum2) cout << "YES";
    else cout << "NO";
}