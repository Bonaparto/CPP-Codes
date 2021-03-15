#include <iostream>
using namespace std;
int main(){
    bool f = 1;
    int sum = 0,sum1 = 0;
    string one;
    cin >> one;
    for(size_t i = 0; i < one.size(); ++i){
        int comp = one[i];
        for(size_t l = 0; l < one.size(); ++l){
            if(comp == one[l]) sum++;
        } 
        if(sum1 == 0) sum1 = sum;
        else if(sum1 != sum){
            f = 0;
            break;
        }
        sum = 0;
    }
    if(f == 1) cout << "YES";
    else cout << "NO";   
}   