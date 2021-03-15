#include <iostream>
using namespace std;
int main(){
    int a,max = 0, count = 1;
    cin >> a;
    max = a;
    while(a != 0){
        if(max < a){
        max = a;
        count = 1;
        }
        cin >> a;
        if (a == max) 
        count++;
    } cout << count;
}