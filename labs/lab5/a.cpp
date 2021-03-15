#include <iostream>
using namespace std;
int main(){
    int cnt=0,cnt1=0;
    string one;
    cin >> one;
    for(size_t i = 0; i < one.size(); ++i){
        if(int(one[i]) >= 65 && int(one[i]) <= 90)
        cnt++;
        else cnt1++;
    } cout << cnt1 << " " << cnt;
}