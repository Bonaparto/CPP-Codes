#include <iostream>
using namespace std;
int main(){
    int n = 1,count = 0,maxcount = 1,pr = -1, m = -1;
    while(n != 0){
        cin >> n;
        if(n != pr)
            count = 1;
        if(n == pr)
            count++;
        if(maxcount < count)
            maxcount = count; 
        pr = n;
   } cout << maxcount;
}