#include <iostream>
using namespace std;
int main(){
    int a,count = 0;
    cin >> a;
        while(a != 0){
            count += a;
            cin >> a;
        } cout << count;
}