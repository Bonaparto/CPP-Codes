#include <iostream>
using namespace std;
int main(){
    int n,no;
    cin >> n;
    for(int i = 2; i <= n; ++i){
        for(int j = 2; j < i; ++j){
            if(i % j == 0 && i != j)
            no = i;
            continue;
        }
        if(i != no)
        cout << i << " is prime" << endl;
    }
}