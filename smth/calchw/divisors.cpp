#include <iostream>
using namespace std;
int main(){
    int cnt=0, i = 2;
    while(i <= 500){
        if(i % 3 == 0 && i % 5 != 0 && i % 6 != 0){cnt++}
        i++;
    }
    cout << cnt;
}