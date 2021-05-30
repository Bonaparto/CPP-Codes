#include <iostream>
using namespace std;
int main(){
    int n = 1,count = 0,pr = 0, pr1 = 0;
    while(n != 0){
        cin >> n;
        if(n == 0) break;
        if(pr1 > n && pr1 > pr && pr != 0)
            count++;
        pr = pr1;
        pr1 = n;
   } cout << count;
}