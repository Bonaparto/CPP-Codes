#include <iostream>
using namespace std;
int main(){
    int sum = 0, sum1 = 0;
    string one, two;
    cin >> one >> two;
    if(one.size() != two.size()){
        cout << "NO";
        return 0;
    }
    else{
        for(size_t i = 0; i < one.size(); ++i){
            sum = sum + one[i];
        }
        for(size_t i = 0; i < two.size(); ++i){
            sum1 = sum1 + two[i];
        }
        if(sum == sum1) cout << "YES";
        else cout << "NO";
    }
}